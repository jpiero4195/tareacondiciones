Algoritmo mess
    Definir mes, an, dia Como Entero
	
    Escribir "Ingrese el n�mero de mes (1 al 12): "
    Leer mes
	
    Escribir "Ingrese el a�o: "
    Leer an
	
    Si mes == 1 Entonces
        dia <- 31
    Sino
        Si mes == 2 Entonces
            Si ((an Mod 4 = 0 Y an Mod 100 <> 0) O (an Mod 400 = 0)) Entonces
                dia <- 29
            Sino
                dia <- 28
            Fin Si
        Sino
            Si mes == 3 Entonces
                dia <- 31
            Sino
                Si mes == 4 Entonces
                    dia <- 30
                Sino
                    Si mes == 5 Entonces
                        dia <- 31
                    Sino
                        Si mes == 6 Entonces
                            dia <- 30
                        Sino
                            Si mes == 7 Entonces
                                dia <- 31
                            Sino
                                Si mes == 8 Entonces
                                    dia <- 31
                                Sino
                                    Si mes == 9 Entonces
                                        dia <- 30
                                    Sino
                                        Si mes == 10 Entonces
                                            dia <- 31
                                        Sino
                                            Si mes == 11 Entonces
                                                dia <- 30
                                            Sino
                                                Si mes == 12 Entonces
                                                    dia <- 31
                                                Sino
                                                    Escribir "N�mero de mes inv�lido."
                                                Fin Si
                                            Fin Si
                                        Fin Si
                                    Fin Si
                                Fin Si
                            Fin Si
                        Fin Si
                    Fin Si
                Fin Si
            Fin Si
        Fin Si
    Fin Si
	
    Escribir "El mes ", mes, " del a�o ", an, " tiene ", dia, " d�as."
    Escribir "Finalizar"
FinAlgoritmo
