#include <stdio.h>
#include <stdlib.h>

#define FILAS 10
#define COLUMNAS 10
#define ELEMENTOS 5

void iniciar_nuevo_juego();
void partida_como_terroristas();
void partida_como_anti_terroristas();
int numeros_ingresados(int*,int*);

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
    int contador_casillas_ocupadas = 0,j,k,grilla[FILAS][COLUMNAS],ya_ingresado,x,y;
    static int numero;
    static int lista_numeros[ELEMENTOS];

    for(j = 0; j < FILAS; j++){
        for(k = 0; k < COLUMNAS; k++){
            grilla[j][k] = 0;
        }
    }


    do{
        system("cls");
        fflush(stdin);
        printf("\n - NO SE PERMITIRA EL INGRESO DE OTRO NUMERO YA INGRESADO ANTERIORMENTE - \n");
        printf("\n Par nro %i",contador_casillas_ocupadas + 1);
        do{
            printf("\n + Ingrese un numero para colocarlos en la casilla: ");
            scanf("%i",&numero);
            ya_ingresado = numeros_ingresados(lista_numeros,&numero);
            if(ya_ingresado == 1){
                printf("\n x ESE NUMERO YA SE HA INGRESADO ANTERIORMENTE. INTENTE CON OTRO x \n");
            }
        } while(ya_ingresado == 1);

        printf("\n COORDENADA NUMERO 1 \n");

        do{
            do{
                fflush(stdin);
                printf("\n + Ingrese numero de la posicion X: ");
                scanf("%i",&x);
                if(x < 0 || x > 9){
                    printf("\n x ERROR. INGRESE UN VALOR DE ENTRE '0' y '9' x \n");
                }
            } while(x < 0 || x > 9);

            do{
                fflush(stdin);
                printf("\n + Ingrese numero de la posicion Y: ");
                scanf("%i",&y);
                if(y < 0 || y > 9){
                    printf("\n x ERROR. INGRESE UN VALOR DE ENTRE '0' Y '9' x \n");
                }
            } while(y < 0 || y > 9);

            if(grilla[x][y] != 0){
                printf("\n x ERROR. ESA CASILLA YA ESTA OCUPADA x \n");
            }

        } while(grilla[x][y] != 0);

        grilla[x][y] = numero;


        printf("\n COORDENADA NUMERO 2 \n");

        do{
            do{
                fflush(stdin);
                printf("\n + Ingrese numero de la posicion X: ");
                scanf("%i",&x);
                if(x < 0 || x > 9){
                    printf("\n x ERROR. INGRESE UN VALOR DE ENTRE '0' y '9' x \n");
                }
            } while(x < 0 || x > 9);

            do{
                fflush(stdin);
                printf("\n + Ingrese numero de la posicion Y: ");
                scanf("%i",&y);
                if(y < 0 || y > 9){
                    printf("\n x ERROR. INGRESE UN VALOR DE ENTRE '0' Y '4' x \n");
                }
            } while(y < 0 || y > 9);

            if(grilla[x][y] != 0){
                printf("\n x ERROR. ESA CASILLA YA ESTA OCUPADA x \n");
            }

        } while(grilla[x][y] != 0);

        grilla[x][y] = numero;

        printf("\n **** NUMERO INGRESADO EN AMBAS COORDENADAS DE FORMA EXITOSA **** \n");

        contador_casillas_ocupadas++;

        printf("\n");
        system("pause");




    } while(contador_casillas_ocupadas <= 20);



    /*for(j = 0; j < 4; j++){
        for(k = 0; k < 4; k++){
            printf("%i \t",grilla[j][k]);
        }
        printf("\n");
    }*/



}

int numeros_ingresados(int *lista_numeros,int *numero){
int pos = 0,flag = 0,pos_lista;

if(lista_numeros[0] == 0){
   lista_numeros[0] = *numero;
   return 0;
} else{

    do{
        if(*numero != lista_numeros[pos]){
            flag = 1;
            pos_lista = pos;
            break;

        } else{
            pos++;
            break;
        }
    } while(pos < 13 && flag == 0);

    if(flag == 1){
        lista_numeros[pos_lista] = *numero;
        return 0;
    } else {
        return 1;
    }
}

}
