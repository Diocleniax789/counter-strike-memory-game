#include <stdio.h>
#include <stdlib.h>

void iniciar_nuevo_juego();

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
