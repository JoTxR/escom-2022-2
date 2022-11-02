barrav=float(input('inserte el numero de barras vendidas que no son del dia:'))
pan =3.49
descuento = 0.6
costo = round(pan * barrav * ( 1 -descuento),2)
print(f'el precio normal de las barras es de {pan}')
print(f'se hace un descuento del {descuento*100}% a las piezas que no son del dia')
print(f'el costo final es de :{costo}')