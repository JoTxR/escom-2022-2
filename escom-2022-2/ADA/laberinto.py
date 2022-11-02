
def crear(tam):
    return [[j*j for j in range(tam)] for i in range(tam)]

tam = int(input('ingrese el tamaño del laberinto cuadrado:'))
matriz=crear(tam)
print(matriz)

