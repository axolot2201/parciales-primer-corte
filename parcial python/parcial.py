#nombro la variable y pido el numero al usuario
z = int(input("ingrese el numero de Quintaesencia descuebierto"))

#creo una condicion para que conforme al valor imprima en pantalla tal cosa
if (z <= 2):
    print("Gas noble")
elif (3 <= z <= 10):
    print("No metal")

elif(11 <= z <= 18):
    print("Metal alcalino o alcalinotérreo")
elif (19 <= z <= 36):
    print("Metaloide o no metal")

elif(z > 36):
    print("Elemento pesado")
else:
    print("no entra en la categoria mistica")