def calcular(a, b):
    def sumar(x, y):
        return x + y
    return sumar(a, b)

print(calcular(5, 3))
