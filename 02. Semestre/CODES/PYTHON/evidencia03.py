#taller 3 PYTHON
#AUTOR: JENNY QUIJANO
#FECHA 03/11/2024

from datetime import date
hoy = date.today()
print("Hoy es el dia : ",hoy)

a=int(input ("Dijite el valor de A: "))
b=int(input ("Dijite el valor de B: "))

if a>b:
    print("A es mayor o igual que B")
else:
    print("A es menor que B")

print()
curso1="Requerimientos"
curso2="Algoritmos"
print("El curso 1 es: ",curso1)
print("El curso 2 es: ",curso2)
if curso1 == "Requerimientos" and curso2 == "Algoritmos":
        print ("Usted estudia programacion de software")
else:
    print("Usted estudia otro programa diferente a programacion de Software")

print()
print("***      Final del analisis del programa de formacion SENA       ***")

print()
frase=input("Dijite una oracion: ")
print("La frase en mayuscula es :",frase.upper())
longitud=len(frase)
print("La longitud de la frase es: ",len(frase)," caracteres")
if longitud>10:
    print("La Frase contiene mas de 10 caracteres")
else:
    print("La frase contiene menos de 10 caracteres")

print("\nFIN")
