Algoritmo trabajo
    Definir ht, th, sa, hn, he Como Real
	
    Escribir "Ingrese las horas trabajadas: "
    Leer ht
	
    Escribir "Ingrese la tarifa por hora: "
    Leer th
	
    Si ht <= 40 Entonces
        sa <- ht * th
    Sino
        hn <- 40
        he <- ht - 40
        sa <- (hn * th) + (he * th * 1.5)
    Fin Si
	
    Escribir "El salario del trabajador es: ", sa
    Escribir "Finalizar"
FinAlgoritmo
