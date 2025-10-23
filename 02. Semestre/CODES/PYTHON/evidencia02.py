#taller 2 PYTHON
#AUTOR: JENNNY QUIJANO
#FECHA 03/11/2024

from datetime import date
hoy = date.today()
print("hoy es el dia ", hoy)
a=int (input("Dijite el primer numero: "))
b=int (input("Dijite el segundo numero: "))
c=int (input("Dijite el tercer numero: "))
x=[a,b,c]
print("El valor maximo es: ",max(x))
print("El valor minimo es: ",min(x))
print("La suma de los 3 numeros es: ",sum(x))
print()
z=float(input("dijite un numero con los decimales; "))
redondo=round(z)
print ("El valor de ",z, "redondeado es; ",redondo)
print()
frase=input("Dijite una sola oracion: ")
print("La frase en mayuscula es: ",frase.upper())
print("La frase en minuscula es: ",frase.lower())
print("la frase con la primera mayuscula es: ",frase.capitalize())
print("la frase con con palabras en mayusculas es: ",frase.title())
print("la longitud de la frase es: ",len(frase)," caracteres")
print()
print("FIN")

