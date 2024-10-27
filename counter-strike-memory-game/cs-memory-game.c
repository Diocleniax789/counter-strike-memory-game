#include <stdio.h>
#include <stdlib.h>

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
            // partida_como_terroristas();
        break;

        case 2:
            // partida_como_anti_terroristas();
        break;

    }

}
