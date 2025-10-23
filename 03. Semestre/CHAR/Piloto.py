#Valores iniciales
salud = 100 #S
escudos = 20 #E
energia =50 #N

print("Bienvenido debes sobrevivir 5 ciclos.")
print("Acciones [R] Reparar ( +10% E, -8%N), [M] motor (-12% N, evita amenaza), [E] Energia (+15% N, E=0)")


for ciclo in range (1, 6):
    print(f"\n---Ciclo{ciclo}---")

    #Aplicar penalidad por escudos bajos <30
    if ciclo %2 == 0 and escudos <30:
        salud -= salud *0.15
        print ("Escudos bajos en ciclo par: La salud se redujo -15%")

        #Penalidad por energia 0
        if energia <=0:
            salud -= salud *0.10
            energia = 0
            print ("Energia baja: Salud -10%")


    #---Mostrar estado actual del PJ---

    print(f"Salud {salud:.2f} -- Escudos: {escudos:.2f} -- Energia {energia:.2f}")

    #---acciones---

    accion = ""
    while accion not in ['R','M','E']:
        accion = input ("Elija una accion: [R]eparar; [M]otor; [E]nergia").upper()

    if accion == 'R':  # Reparar
        escudos += escudos * 0.10
        energia -= energia * 0.08
    elif accion == 'M':  # Motor
        energia -= energia * 0.12
    elif accion == 'E':  # Energía
        energia += energia * 0.15
        escudos = 0

        #Mostar estado actual del jugador

        print(f"Estado despues de la accion ---> Salud {salud:.2f} -- Escudos: {escudos:.2f} -- Energia {energia:.2f}")
        

        #comprobacio de la vida

        if salud <=0:
            print("Has Muelto! fin del juego")
            break            
else:
    print ("\n Has pasado los 5 ciclos!")