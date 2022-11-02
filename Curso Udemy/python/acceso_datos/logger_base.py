import logging as log
'''imprime todo  log.basicConfig(level=log.DEBUG)
imprime a nivel info log.basicConfig(level=log.INFO)
imprime a nivel warning log.basicConfig(level=log.WARNING)
imrpime a nivel error log.basicConfig(level=log.ERROR)
imprime a nivel critical log.basicConfig(level=log.CRITICAL)'''


log.basicConfig(level=log.DEBUG,
                format='%(asctime)s: %(levelname)s [%(filename)s: %(lineno)s] %(message)s',
                datefmt='%I:%M:%S: %p',
                handlers=[
                    log.FileHandler('capa_datos.log'),
                    log.StreamHandler()
                ])

if __name__ == '__main__':
    log.debug('mensaje a nivel debug')
    log.info('mensaje a nivel de info')
    log.warning('mensaje a nivel de warning')
    log.error('mensaje a nivel de error')
    log.critical('mensaje a nivel de critical')