import random

suma = 0

for i in range(10):
    n = random.randint(0, 10)
    print("Número generado:", n)
    suma += n

promedio = suma / 10

print("Suma:", suma)
print("Promedio:", promedio)
