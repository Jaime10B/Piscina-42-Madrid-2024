import random


def hacer_grupos():
	array_gente_disponible = ["marina", "jaime", "canario", "ivan", "houssi", "aiman"]
	array_apariciones = [0,0,0,0,0,0]

	for persona in array_gente_disponible:
		print(persona, "\n")
		grupo = []
		while (len(grupo) < 5):
			indice_aleatorio = random.randint(0, len(array_gente_disponible) - 1)
			if ((array_gente_disponible[indice_aleatorio] not in grupo) and ((array_gente_disponible[indice_aleatorio])) != persona and (array_apariciones[indice_aleatorio] < 5)):
				grupo.append(array_gente_disponible[indice_aleatorio]);
				array_apariciones[indice_aleatorio] = array_apariciones[indice_aleatorio] + 1
		print(grupo, "\n")



def main():
	hacer_grupos()

if __name__ == "__main__":
    main()