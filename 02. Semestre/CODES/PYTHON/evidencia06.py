##TALLER 6 PYTHON
#AUTOR: DAVID PERNETT
#FECHA: 12/11/2024

from datetime import date
hoy = date.today()
print("Hoy es el dia",hoy)


print("TALLER 6 CICLOS ITERATIVOS CON LA SENTECIA WHILE")
print()
num1=int(input("Dijite un numero: "))
print("***Ciclo cnotrolado por contador")
i=1
while i <=num1:
    print(i)
    i+=1
    print ("fin ciclo")

    print ()
    print("***Ciclo controlado por evento ")
    i=1
    numero1=5
    numero2= int(input("dijite un numero de 1 a 10: "))
    while numero2 != numero1:
        i+=1
        numero2= int(input("dijite un numero de 1 a 10: "))
        print("Acertaste en el intento No. ",i)
        print("fin del ciclo")

        print()
        print("***Ciclo abortado con la sustencia break")
        amistad=input("dijite nombre de una amistad: ")
        amistad=amistad.upper()
        for character in amistad:
            print(character)
            if character=="A":
                break
            print("fin del ciclo")
            print()
            print("FIN")
    