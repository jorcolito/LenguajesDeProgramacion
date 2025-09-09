#Genere 2 arreglos paralelos que representen las sucursales de una empresa y sus ventas. Existen 25 sucursales en la empresa. Presente el promedio de ventas, así como las sucursales con ventas mayores al promedio. 
import random

sucursales = []
ventas = []

for i in range(25):
    sucursales.append(f"Sucursal {i+1}")
    ventas.append(random.randint(1000, 5000))  # Ventas entre 1000 y 5000

promedio = sum(ventas) / 25

print("Todas las sucursales y sus ventas:")
for i in range(25):
    print(f"{sucursales[i]} - {ventas[i]}")

print("\nPromedio de ventas:", promedio)

print("Sucursales con ventas mayores al promedio:")
for i in range(25):
    if ventas[i] > promedio:
        print(f"{sucursales[i]} - {ventas[i]}")
