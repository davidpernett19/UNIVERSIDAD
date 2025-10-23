#Variables inciiales
saldo = 500
intentos = 0
contrasena_correcta = "1234"
transaccion1 = "Sin transaccion"
transaccion2 = "Sin transaccion"
transaccion3 = "Sin transaccion"

# Acceso a contraseña (Maximo de 3 intentos)

while intentos < 4:
    ingreso = input("Ingrese contraseña: ")
    if ingreso == contrasena_correcta: print("Acceso concedido: \n")
    break
else:
    intentos +=1
    print("Contraseña incorrecta. Intento", intentos, "de 3.\n")

if intentos == 4:
    print("Demasiados intentos fallidos. El sistema se ha bloqueado")

else:

    #Menu basico

    opcion = 0

    while opcion !=6:
        print("---MENU PRINCIPAL---")
        print("1. Consultar Saldo")
        print("2. Depositar Dinero")
        print("3. Retirar Dinero")
        print("4. Cambiar contraseña")
        print("5. Ver historial de transacciones")
        print("6. Salir")


    opcion = int(opcion)

    if opcion == 1: #consulta de saldo
        print("Su saldo actual es: $", saldo)

    elif opcion == 2: #depositar dinero
        deposito = int(input ("ingrese el monto a depositar")) 
        if deposito >0:
            saldo += deposito
            print("Deposito exitoso. Nuevo saldo: $",saldo)
        else:
            print("Debe ingresar un valor mayor a $0.")

    elif opcion ==3: #Retirar dinero
        monto = input ("Ingrese el valor a retirar")
        if monto.isdigit():
            monto = int (monto)
            if monto <= saldo:
                saldo -= monto
                print("Retiro existoso. Nuevo saldo: $", saldo)
            else:
                print("fondos insuficientes")
        else:
            print("Debe ingresar un valor mayor que 0.")

    elif opcion ==4:
        print("Gracias por usar el cajero")
else:
print("Gracias :D")
        