Algoritmo valores
	Escribir "Ingrese el primer valor:"
	Leer nu1
	Escribir "Ingrese el segundo valor: "
	Leer nu2
	Escribir "Ingrese el tercer valor:"
	Leer nu3
	ma <- nu1
	Si num2 > ma Entonces
		ma <- nu2
	SiNo
		si nu3 < ma Entonces
			ma <- nu3
		FinSi
	Fin Si
	Escribir "El mayor valor es:", ma
FinAlgoritmo