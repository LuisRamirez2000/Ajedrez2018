#include "finalizar.h"

//valida 4 casos: rey vs rey, rey vs rey y alfil, rey y alfil vs rey y alfil, rey y caballo vs rey
int validarPiezasInsuficientes(int torreBlanco1Columna, int torreBlanco1Fila, int caballoBlanco1Columna, int caballoBlanco1Fila, int alfilBlanco1Columna, int alfilBlanco1Fila, int reinaBlancoColumna, int reinaBlancoFila , int reyBlancoColumna, int reyBlancoFila, int torreBlanco2Columna, int torreBlanco2Fila, int caballoBlanco2Columna, int caballoBlanco2Fila, int alfilBlanco2Columna, int alfilBlanco2Fila, int peonBlanco1Columna, int peonBlanco1Fila, int peonBlanco2Columna, int peonBlanco2Fila,int peonBlanco3Columna, int peonBlanco3Fila, int peonBlanco4Columna, int peonBlanco4Fila, int peonBlanco5Columna, int peonBlanco5Fila, int peonBlanco6Columna,int peonBlanco6Fila, int peonBlanco7Columna, int peonBlanco7Fila, int peonBlanco8Columna, int peonBlanco8Fila ,int torreNegro1Columna, int torreNegro1Fila, int caballoNegro1Columna, int caballoNegro1Fila, int alfilNegro1Columna, int alfilNegro1Fila, int reinaNegroColumna, int reinaNegroFila, int reyNegroColumna, int reyNegroFila , int torreNegro2Columna, int torreNegro2Fila, int caballoNegro2Columna, int caballoNegro2Fila, int alfilNegro2Columna, int alfilNegro2Fila, int peonNegro1Columna, int peonNegro1Fila, int peonNegro2Columna, int peonNegro2Fila, int peonNegro3Columna, int peonNegro3Fila, int peonNegro4Columna, int peonNegro4Fila, int peonNegro5Columna, int peonNegro5Fila, int peonNegro16Columna, int peonNegro6Fila, int peonNegro7Columna, int peonNegro7Fila, int peonNegro8Columna, int peonNegro8Fila, int torreBlancoExtra1Columna, int torreBlancoExtra1Fila, int torreBlancoExtra2Columna, int torreBlancoExtra2Fila, int torreBlancoExtra3Columna, int torreBlancoExtra3Fila, int torreBlancoExtra4Columna, int torreBlancoExtra4Fila, int torreBlancoExtra5Columna, int torreBlancoExtra5Fila, int torreBlancoExtra6Column, int torreBlancoExtra6Fila, int torreBlancoExtra7Columna, int torreBlancoExtra7Fila, int torreBlancoExtra8Columna, int torreBlancoExtra8Fila, int caballoBlancoExtra1Columna, int caballoBlancoExtra1Fila, int caballoBlancoExtra2Columna, int caballoBlancoExtra2Fila, int caballoBlancoExtra3Columna, int caballoBlancoExtra3Fila, int caballoBlancoExtra4Columna, int caballoBlancoExtra4Fila, int caballoBlancoExtra5Columna, int caballoBlancoExtra5ColumnaFila, int caballoBlancoExtra6Columna, int caballoBlancoExtra6Fila, int caballoBlancoExtra7Columna, int caballoBlancoExtra7Fila, int caballoBlancoExtra8Columna, int caballoBlancoExtra8Fila, int alfilBlancoExtra1Columna, int alfilBlancoExtra1Fila, int alfilBlancoExtra2Columna, int alfilBlancoExtra2Fila, int alfilBlancoExtra3Columna, int alfilBlancoExtra3Fila, int alfilBlancoExtra4Columna, int alfilBlancoExtra4Fila, int alfilBlancoExtra5Columna, int alfilBlancoExtra5ColumnaFila, int alfilBlancoExtra6Columna, int alfilBlancoExtra6Fila, int alfilBlancoExtra7Columna, int alfilBlancoExtra7Fila, int alfilBlancoExtra8Columna, int alfilBlancoExtra8Fila, int reinaBlancoExtra1Columna, int reinaBlancoExtra1Fila, int reinaBlancoExtra2Columna, int reinaBlancoExtra2Fila, int reinaBlancoExtra3Columna, int reinaBlancoExtra3Fila, int reinaBlancoExtra4Columna, int reinaBlancoExtra4Fila, int reinaBlancoExtra5Columna, int reinaBlancoExtra5ColumnaFila, int reinaBlancoExtra6Columna, int reinaBlancoExtra6Fila, int reinaBlancoExtra7Columna, int reinaBlancoExtra7Fila, int reinaBlancoExtra8Columna, int reinaBlancoExtra8Columna, int torreBlancoExtra1Columna, int torreNegroExtra1Fila, int torreNegroExtra2Columna, int torreNegroExtra2Fila, int torreNegroExtra3Columna, int torreNegroExtra3Fila, int torreNegroExtra4Columna, int torreNegroExtra4Fila, int torreNegroExtra5Columna, int torreNegroExtra5Fila, int torreNegroExtra6Columna, int torreNegroExtra6Fila, int torreNegroExtra7Columna, int torreNegroExtra7Fila, int torreNegroExtra8Columna, int torreNegroExtra8Fila, int caballoBlancoExtra1Columna, int caballoNegroExtra1Fila, int caballoNegroExtra2Columna, int caballoNegroExtra2Fila, int caballoNegroExtra3Columna, int caballoNegroExtra3Fila, int caballoNegroExtra4Columna, int caballoNegroExtra4Fila, int caballoNegroExtra5Columna, int caballoNegroExtra5ColumnaFila, int caballoNegroExtra6Columna, int caballoNegroExtra6Fila, int caballoNegroExtra7Columna, int caballoNegroExtra7Fila, int caballoNegroExtra8Columna, int caballoNegroExtra8Fila, int alfilBlancoExtra1Columna, int alfilNegroExtra1Fila, int alfilNegroExtra2Columna, int alfilNegroExtra2Fila, int alfilNegroExtra3Columna, int alfilNegroExtra3Fila, int alfilNegroExtra4Columna, int alfilNegroExtra4Fila, int alfilNegroExtra5Columna, int alfilNegroExtra5ColumnaFila, int alfilNegroExtra6Columna, int alfilNegroExtra6Fila, int alfilNegroExtra7Columna, int alfilNegroExtra7Fila, int alfilNegroExtra8Columna, int alfilNegroExtra8Fila, int reinaBlancoExtra1Columna, int reinaNegroExtra1Fila, int reinaNegroExtra2Columna, int reinaNegroExtra2Fila, int reinaNegroExtra3Columna, int reinaNegroExtra3Fila, int reinaNegroExtra4Columna, int reinaNegroExtra4Fila, int reinaNegroExtra5Columna, int reinaNegroExtra5Fila, int reinaNegroExtra6Columna, int reinaNegroExtra6Fila, int reinaNegroExtra7Columna, int reinaNegroExtra7Fila, int reinaNegroExtra8Columna, int reinaNegroExtra8Fila){

int rey=0;
int alfil=0;
int caballoNegro=0;
int caballoBlanco=0;

//verifica que alguna pieza que no sea alfil,rey o torre sigan vivas
if( reinaBlancoColumna!=0 || torreBlanco1Columna!=0 || peonBlanco1Columna!=0 || peonBlanco2Columna!=0 || peonBlanco3Columna!=0 || peonBlanco4Columna!=0 || peonBlanco5Columna!=0 || peonBlanco6Columna!=0 || peonBlanco7Columna!=0 || peonBlanco8Columna!=0 ||  torreBlanco2Columna!=0 || reinaNegroColumna!=0 || torreNegro1Columna!=0 || peonNegro1Columna!=0 || peonNegro2Columna!=0 || peonNegro3Columna!=0 || peonNegro4Columna!=0 || peonNegro5Columna!=0 || peonNegro6Columna!=0 || peonNegro7Columna!=0 || peonNegro8Columna!=0 ||  torreNegro2Columna!=0 || torreBlancoExtra1Columna || torreBlancoExtra2Columna || torreBlancoExtra3Columna || torreBlancoExtra4Columna || torreBlancoExtra5Columna || torreBlancoExtra6Columna || torreBlancoExtra7Columna || torreBlancoExtra8Columna || reinaBlancoExtra1Columna!=0 || reinaBlancoExtra2Columna!=0 || reinaBlancoExtra3Columna!=0 || reinaBlancoExtra4Columna!=0 || reinaBlancoExtra5Columna!=0 || reinaBlancoExtra6Columna!=0 || reinaBlancoExtra7Columna!=0 || reinaBlancoExtra8Columna!=0 ||  torreNegraExtra1Columna || torreNegraExtra2Columna || torreNegraExtra3Columna || torreNegraExtra4Columna || torreNegraExtra5Columna || torreNegraExtra6Columna || torreNegraExtra7Columna || torreNegraExtra8Columna || reinaNegraExtra1Columna!=0 || reinaNegraExtra2Columna!=0 || reinaNegraExtra3Columna!=0 || reinaNegraExtra4Columna!=0 || reinaNegraExtra5Columna!=0 || reinaNegraExtra6Columna!=0 || reinaNegraExtra7Columna!=0 || reinaNegraExtra8Columna!=0 ){

	return 0;
}

if(reyBlancoColumna!=0 && reyNegroColumna!=0){
rey=2;
}

if(alfilBlanco1Columna!=0)
alfil++;
if(alfilBlanco2Columna!=0)
alfil++;
if(alfilBlanco1ExtraColumna!=0)
alfil++;
if(alfilBlanco2ExtraColumna!=0)
alfil++;
if(alfilBlanco3ExtraColumna!=0)
alfil++;
if(alfilBlanco4ExtraColumna!=0)
alfil++;
if(alfilBlanco5ExtraColumna!=0)
alfil++;
if(alfilBlanco6ExtraColumna!=0)
alfil++;
if(alfilBlanco7ExtraColumna!=0)
alfil++;
if(alfilBlanco8ExtraColumna!=0)
alfil++;
if(alfilNegro1Columna!=0)
alfil++;
if(alfilNegro2Columna!=0)
alfil++;
if(alfilNegro1ExtraColumna!=0)
alfil++;
if(alfilNegro2ExtraColumna!=0)
alfil++;
if(alfilNegro3ExtraColumna!=0)
alfil++;
if(alfilNegro4ExtraColumna!=0)
alfil++;
if(alfilNegro5ExtraColumna!=0)
alfil++;
if(alfilNegro6ExtraColumna!=0)
alfil++;
if(alfilNegro7ExtraColumna!=0)
alfil++;
if(alfilNegro8ExtraColumna!=0)
alfil++;

if(caballoBlanco1Columna!=0)
caballoBlanco++;
if(caballoBlanco2Columna!=0)
caballoBlanco++;
if(caballoBlanco1ExtraColumna!=0)
caballoBlanco++;
if(caballoBlanco2ExtraColumna!=0)
caballoBlanco++;
if(caballoBlanco3ExtraColumna!=0)
caballoBlanco++;
if(caballoBlanco4ExtraColumna!=0)
caballoBlanco++;
if(caballoBlanco5ExtraColumna!=0)
caballoBlanco++;
if(caballoBlanco6ExtraColumna!=0)
caballoBlanco++;
if(caballoBlanco7ExtraColumna!=0)
caballoBlanco++;
if(caballoBlanco8ExtraColumna!=0)
caballoBlanco++;

if(caballoNegro1Columna!=0)
caballoNegro++;
if(caballoNegro2Columna!=0)
caballoNegro++;
if(caballoNegro1ExtraColumna!=0)
caballoNegro++;
if(caballoNegro2ExtraColumna!=0)
caballoNegro++;
if(caballoNegro3ExtraColumna!=0)
caballoNegro++;
if(caballoNegro4ExtraColumna!=0)
caballoNegro++;
if(caballoNegro5ExtraColumna!=0)
caballoNegro++;
if(caballoNegro6ExtraColumna!=0)
caballoNegro++;
if(caballoNegro7ExtraColumna!=0)
caballoNegro++;
if(caballoNegro8ExtraColumna!=0)
caballoNegro++;

//verifica que solo haya por mucho 2 alfiles en el juego,además de los reyes,y ningun caballo vivo
switch(alfil){
	case 1:
		if(rey==2 && 	caballoNegro==0 && caballoBlanco==0){
			return 1;
		}
		break;
	case 2:
		if(rey==2 && 	caballoNegro==0 && caballoBlanco==0){
			return 1;
		}
		break;
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
	case 20:
		return 0;
		break;
}

//verifica que solo esten los dos reyes y un caballo blanco vivos
switch(caballoBlanco){
	case 1:
		if(rey==2 && 	caballoNegro==0 && alfil==0){
			return 1;
		}
		break;
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		return 0;
		break;
}

//verifica que solo esten los dos reyes y el un caballo negro vivos
switch(caballoNegro){
	case 1:
		if(rey==2 && 	caballoBlanco==0 && alfil==0){
			return 1;
		}
		break;
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
		return 0;
		break;
}
}

//cuando la variable movimientoslimite sea igual a 0 se acaba el juego
int validarLimiteDeMovimientos(int movimientoslimite){


	if(movimientoslimite==50){
		return 1;
	}
	else{
		return 0;
	}

}
