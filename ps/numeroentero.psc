Algoritmo numeroentero
    Definir num1, num2, num3, menor, suma Como Entero
	
    Escribir "Ingrese el primer n�mero: "
    Leer num1
	
    Escribir "Ingrese el segundo n�mero: "
    Leer num2
	
    Escribir "Ingrese el tercer n�mero: "
    Leer num3
	
    menor <- num1
    Si num2 < menor Entonces
        menor <- num2
    Fin Si
    Si num3 < menor Entonces
        menor <- num3
    Fin Si
	
    suma <- num1 + num2 + num3
	
    Escribir "El menor n�mero es: ", menor
    Escribir "La suma de los n�meros es: ", suma
    Escribir "Finalizar"
FinAlgoritmo
