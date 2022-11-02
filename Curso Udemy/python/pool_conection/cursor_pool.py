
from logger_base import log
from conexion import Conexion

class cursordelpool:
    def __inti__(self):
        self._conexion = None
        self._cursor = None

    def __enter__(self):
        log.debug('incio del metodo with _enter__')
        self._conexion = Conexion.obtenerConexion()
        self._cursor=self._conexion.cursor()
        return self._cursor

    def __exit__(self,tipo_execepcion,valor_excepcion,detalle_excepcion):
        log.debug('se ejecuta metodo __exit__')
        if valor_excepcion:
            self._conexion.rollback()
            log.error(f'ocrurrio un error {valor_excepcion}{tipo_execepcion}{detalle_excepcion}')
        else:
            self._conexion.commit()
            log.debug('commit de la transaccion')
        self._cursor.close()
        Conexion.CerrarConexion(self._conexion)

if __name__ == '__main__':
    with cursordelpool() as  cursor:
        log.debug('dentro del bloque with')
        cursor.execute('SELECT * FROM persona')
        log.debug(cursor.fetchall())