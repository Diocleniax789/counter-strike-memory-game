#include <stdio.h>
#include <stdlib.h>

#define FILAS 5
#define COLUMNAS 5

void iniciar_nuevo_juego();
void partida_como_terroristas();
void partida_como_anti_terroristas();

int main(){
    int op;

    do{
        system("cls");
        printf("\n -------------------------------- \n");
        printf("\n |* COUNTER STRIKE MEMORY GAME *| \n");
        printf("\n -------------------------------- \n");
        printf("\n -------------------------------------");
        printf("\n |1| --> Iniciar nueva partida <-- |1|");
        printf("\n -------------------------------------");
        printf("\n |2| -->       Salir           <-- |2| \n");
        printf(" ------------------------------------- ");
        printf("\n");
        do{
            fflush(stdin);
            printf("\n ======================================");
            printf("\n + Seleccione opcion. Ingrese 1 o 2: ");
            scanf("%i",&op);
            if(op < 1 || op > 2){
                printf("\n");
                printf("\n ////////////////////////////////////////////////////////////////////////// \n");
                printf("\n |x| Error. Debe ingresar 1 o 2 para poder avanzar. Vuelva a intentarlo |x| \n");
                printf("\n ////////////////////////////////////////////////////////////////////////// \n");
                printf("\n");
            }
        } while(op < 1 || op > 2);
        switch(op){
            case 1:
                iniciar_nuevo_juego();
            break;
        }
    } while(op != 2);

    return 0;
}

void iniciar_nuevo_juego(){
    int op;
        system("cls");
        printf("\n ||||||||||||||||||||||||||||||||||||||||");
        printf("\n");
        printf("\n + SELECCIONE BANDO + \n");
        printf("\n 1 - Terroristas.");
        printf("\n 2 - Anti-terroristas.");
        printf("\n 3 - Volver al menu principal.");
        printf("\n");
        printf("\n ||||||||||||||||||||||||||||||||||||||||");
        printf("\n");
    do{
        fflush(stdin);
        printf("\n =========================================================================");
        printf("\n + Ingrese bando seleccionado. 1 y 2 <para los bandos> o 3 para salir: ");
        scanf("%i",&op);
        if(op < 1 || op > 3){
                printf("\n");
                printf("\n ////////////////////////////////////////////////////////////////////////// \n");
                printf("\n |x| Error. Debe ingresar 1 o 2 o 3 para poder avanzar. Vuelva a intentarlo |x| \n");
                printf("\n ////////////////////////////////////////////////////////////////////////// \n");
                printf("\n");
        }
    } while(op < 1 || op > 3);
    switch(op){
        case 1:
            partida_como_terroristas();
        break;

        case 2:
            // partida_como_anti_terroristas();
        break;

    }

}

void partida_como_terroristas(){
    int numero,contador_casillas_ocupadas = 0,lista_numeros_ingresados[FILAS],pos = 0,flag = 0,flag2 = 0,x,y,i = 0,j,k;
    static int grilla[FILAS][COLUMNAS];

    for(j = 0; j < FILAS; j++){
        for(k = 0; k < COLUMNAS; k++){
            grilla[j][k] = 0;
        }
    }

        do{
            fflush(stdin);
            printf("\n No se podran repetir numeros \n");
            printf("\n PAR NRO %i",contador_casillas_ocupadas + 1);
            printf("\n + Escriba un numero para colocarlo en la tabla: ");
            scanf("%i",&numero);
            if(lista_numeros_ingresados[0] == 0){
                lista_numeros_ingresados[0] = numero;
                contador_casillas_ocupadas++;

                        do{
                            fflush(stdin);
                            printf("\n Posicion 1, ingrese los dos valores para la coordenada \n");

                                do{
                                    fflush(stdin);
                                    printf("\n + Ingrese valor del eje x: ");
                                    scanf("%i",&x);
                                    if(x < 0 || x > 4){
                                        printf("\n xxxx ERROR. EL VALOR DEBE ESTAR ENTRE '0' O '4'. VUELVA A INTENTAR xxxx \n");
                                    }
                                } while(x < 0 || x > 4);

                                do{
                                    fflush(stdin);
                                    printf("\n + Ingrese valor del eje y: ");
                                    scanf("%i",&y);
                                    if(y < 0 || y > 4){
                                        printf("\n xxxx ERROR. EL VALOR DEBE ESTAR ENTRE '0' O '4'. VUELVA A INTENTAR xxxx \n");
                                    }
                                } while(y < 0 || y > 4);

                                if(grilla[x][y] != 0){
                                    printf("\n xxxx ERROR. ESA CASILLA YA ESTA OCUPADA. INGRESE OTRA xxxx");
                                } else{
                                    flag2 = 1;
                                }

                        } while(flag2 == 0);

                        grilla[x][y] = numero;
                        printf("\n **** NUMERO AGREGADO A LA CASILLA **** \n");

                // DEBO MEJORAR ESTO A LA HORA DE QUE SI INGRESO LA MISMA COORDENADA, SI HAY ALGUN NUMERO YA EN LA CASILLA, EL PROGRAMA DEBERA DECIRLE AL USUARIO DE INGRESAR OTRA COORDENADA

                          do{
                            fflush(stdin);
                            printf("\n Posicion 2, ingrese los dos valores para la coordenada \n");
                                do{
                                    fflush(stdin);
                                    printf("\n + Ingrese valor del eje x: ");
                                    scanf("%i",&x);
                                    if(x < 0 || x > 4){
                                        printf("\n xxxx ERROR. EL VALOR DEBE ESTAR ENTRE '0' O '4'. VUELVA A INTENTAR xxxx \n");
                                    }
                                } while(x < 0 || x > 4);

                                do{
                                    fflush(stdin);
                                    printf("\n + Ingrese valor del eje y: ");
                                    scanf("%i",&y);
                                    if(y < 0 || y > 4){
                                        printf("\n xxxx ERROR. EL VALOR DEBE ESTAR ENTRE '0' O '4'. VUELVA A INTENTAR xxxx \n");
                                    }
                                } while(y < 0 || y > 4);

                                if(grilla[x][y] != 0){
                                    printf("\n xxxx ERROR. ESA CASILLA YA ESTA OCUPADA. INGRESE OTRA xxxx");
                                } else{
                                    flag2 = 1;
                                }

                        } while(flag2 == 0);
                        grilla[x][y] = numero;
                        printf("\n **** COORDENADA 2 INGRESADA DE FORMA EXITOSA **** \n");
                        printf("\n **** NUMERO AGREGADO A LA CASILLA **** \n");

            }





















            else{
                lista_numeros_ingresados[i + 1] = numero;
                pos = 0;
                flag = 0;
                do{
                    if(numero != lista_numeros_ingresados[pos]){
                        flag = 1;
                    } else{
                        pos++;
                    }

                } while(pos < FILAS && flag == 0);
                    if(flag == 1){
                        contador_casillas_ocupadas++;
                        do{
                            fflush(stdin);
                            printf("\n Posicion 1, ingrese los dos valores para la coordenada \n");
                                do{
                                    fflush(stdin);
                                    printf("\n + Ingrese valor del eje x: ");
                                    scanf("%i",&x);
                                    if(x < 0 || x > 4){
                                        printf("\n xxxx ERROR. EL VALOR DEBE ESTAR ENTRE '0' O '4'. VUELVA A INTENTAR xxxx \n");
                                    }
                                } while(x < 0 || x > 4);

                                do{
                                    fflush(stdin);
                                    printf("\n + Ingrese valor del eje y: ");
                                    scanf("%i",&y);
                                    if(y < 0 || y > 4){
                                        printf("\n xxxx ERROR. EL VALOR DEBE ESTAR ENTRE '0' O '4'. VUELVA A INTENTAR xxxx \n");
                                    }
                                } while(y < 0 || y > 4);

                                if(grilla[x][y] != 0){
                                    printf("\n xxxx ERROR. ESA CASILLA YA ESTA OCUPADA. INGRESE OTRA xxxx");
                                } else{
                                    flag2 = 1;
                                }

                        } while(flag2 == 0);
                            grilla[x][y] = numero;
                            printf("\n **** COORDENADA 1 INGRESADA DE FORMA EXITOSA **** \n");
                        do{
                            fflush(stdin);
                            printf("\n Posicion 2, ingrese los dos valores para la coordenada \n");
                                do{
                                    fflush(stdin);
                                    printf("\n + Ingrese valor del eje x: ");
                                    scanf("%i",&x);
                                    if(x < 0 || x > 4){
                                        printf("\n xxxx ERROR. EL VALOR DEBE ESTAR ENTRE '0' O '4'. VUELVA A INTENTAR xxxx \n");
                                    }
                                } while(x < 0 || x > 14);

                                do{
                                    fflush(stdin);
                                    printf("\n + Ingrese valor del eje y: ");
                                    scanf("%i",&y);
                                    if(y < 0 || y > 4){
                                        printf("\n xxxx ERROR. EL VALOR DEBE ESTAR ENTRE '0' O '4'. VUELVA A INTENTAR xxxx \n");
                                    }
                                } while(y < 0 || y > 4);

                                if(grilla[x][y] != 0){
                                    printf("\n xxxx ERROR. ESA CASILLA YA ESTA OCUPADA. INGRESE OTRA xxxx");
                                } else{
                                    flag2 = 1;
                                }

                        } while(flag2 == 0);
                            printf("\n **** COORDENADA 2 INGRESADA DE FORMA EXITOSA **** \n");

                    }
                }

                printf("\n");
                system("pause");

            } while(contador_casillas_ocupadas <= 10);

            grilla[x][y] = numero;
            printf("\n **** NUMERO AGREGADO A LA CASILLA **** \n");


            printf("\n **** EL TABLERO HA SIDO COMPLETADO **** \n");

            for(j = 0; j < FILAS; j++){
                for(k = 0; k < COLUMNAS; k++){
                    printf("\t %i",grilla[j][k]);
                }
                printf("\n");
            }

}

