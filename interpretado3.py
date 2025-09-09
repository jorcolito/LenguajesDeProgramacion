import random

pares = 0
impares = 0

for _ in range(500):
    n = random.randint(50, 100)
    if n % 2 == 0:
        pares += 1
    else:
        impares += 1

print("Pares:", pares)
print("Impares:", impares)
