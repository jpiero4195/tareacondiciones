Algoritmo Triangulo
    Definir lado1, lado2, lado3 Como Real
	
    Escribir "Ingrese el primer lado del tri�ngulo: "
    Leer lado1
	
    Escribir "Ingrese el segundo lado del tri�ngulo: "
    Leer lado2
	
    Escribir "Ingrese el tercer lado del tri�ngulo: "
    Leer lado3
	
    Si lado1 = lado2 Y lado2 = lado3 Entonces
        Escribir "El tri�ngulo es equil�tero."
    Sino
        Si lado1 = lado2 O lado1 = lado3 O lado2 = lado3 Entonces
            Escribir "El tri�ngulo es is�sceles."
        Sino
            Escribir "El tri�ngulo es escaleno."
        Fin Si
    Fin Si
    
    Escribir "Finalizar"
FinAlgoritmo

