#include <stdio.h>
#include <stdlib.h>

#define FILAS 15
#define COLUMNAS 15

void iniciar_nuevo_juego();
void partida_como_terroristas();
void partida_como_anti_terroristas();
int * ya_ingresado(int);


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
    int numero,contador_casillas_ocupadas,grilla[FILAS][COLUMNAS],lista_numeros_ingresados[FILAS],long_array,pos,flag;

    do{
        system("cls");
        do{

            printf("\n /* NO SE PERMITIRA INGRESAR EL MISMO NUMERO MAS DE UNA VEZ */ \n");
            fflush(stdin);
            printf("\n + Ingrese un numero para colocarlo en la tabla: ");
            scanf("%i",&numero);
            long_array = sizeof(lista_numeros_ingresados);
            if(long_array == FILAS){
                lista_numeros_ingresados[0] = numero;
            } else{
                    pos = 0;
                    flag = 0;
                    do{
                        if(numero == lista_numeros_ingresados[pos]){
                            flag = 1;
                        } else{
                            pos++;
                        }
                    } while(pos < FILAS && flag == 0);
            }




        }











    } while(contador_casillas_ocupadas < );



}
