#TALLER 5 PYTHON
#AUTOR: DAVID PERNETT
#FECHA: 09/11/2024

from datetime import date
hoy = date.today()
print("Hoy es el dia : ", hoy)
print()
print("TALLER 5 CICLOS ITERATIVOS CON LA SENTENCIA FOR")
print()
num1=int(input("Dijite el primer numero: "))
num2=int(input("Dijite el segundo numero: (mayor): "))
print("Ciclo para el primer numero")
for i in range (num1):
    print(i)
    print ('Fin del ciclo')

print()
print("ciclo desde el primer numero hasta el segundo numero")
for i in range(num1,num2):
    print(i)
    print ('Fin del ciclo')

print()
print("ciclo desde el primer numero hasta el segundo numero con los incrementos de 2")
for i in range(num1,num2,2):
    print(i)
    print ('Fin del ciclo')

print()
empresa=input("dijite nombre de una empresa: ")
empresa=empresa.lower()
for character in empresa:
    print(character)
    print ('Fin del ciclo')

    print("\nFin")