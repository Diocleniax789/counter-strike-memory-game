#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define FILAS 2
#define COLUMNAS 2
#define ELEMENTOS 2

void gotoxy(int,int);
void cartel_menu();
void iniciar_nuevo_juego();
void partida_como_terroristas();
void partida_como_anti_terroristas();
int numeros_ingresados(int*,int*,int*);
int buscar_numero_en_la_grilla(int [FILAS][COLUMNAS],int,int);
//void mostrar_valores_completos();

int main(){
    int op;

    cartel_menu();

    do{
        system("cls");
        cartel_menu();
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

void cartel_menu(){
int contador_apariciones = 0;

while (contador_apariciones < 3){
system("cls");
gotoxy(100,10);
Sleep(50);
printf("\n                                      ..:---------:..                                                        ");
Sleep(50);
printf("\n                                 :-+*%%@@@@@%%######%%@@@@@#*=-.                                             ");
Sleep(50);
printf("\n                          .-*%%@@%%#+=:.              .:-+*%%@@@*=:                                          ");
Sleep(50);
printf("\n                       :+%%@@#+:        .*%%@@@%%*.           :=*@@@*-                                       ");
Sleep(50);
printf("\n                    .+@@%%+:           :@@@@@@@@@.              :=%%@@*-                                     ");
Sleep(50);
printf("\n                  -#@@*:              *@@@@@@@@@@                 .=%%@%=                                    ");
Sleep(50);
printf("\n                -%%@%=                 .#@@@@@@@@@-  ::-+       :      :*@@=                                  ");
Sleep(50);
printf("\n              -%%@%=                :%%@%-                :#@@@@@@@@@@@-%%@@@@%%####*%@==+*--+-.*@@=          ");
Sleep(50);
printf("\n             *@@=                 *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+: :%%@#.                              ");
Sleep(50);
printf("\n           :%%@#.                :%%@@@@@@@@@@@@@%=.:-*@@@@@@@@@@@@-         *@@=                            ");
Sleep(50);
printf("\n          -@@+                  #@@@@@@@@@@@@@@*+@@@@@@@@@@%%@#=+.           -@@*                            ");
Sleep(50);
printf("\n         =@@-                   @@@@@@@@@@@@@@@@@@@@@@@@%%@@++@               :@@*                           ");
Sleep(50);
printf("\n        -@@-                   .@@@@@@@@@@@@@@@@@@@@@@#.  .  ##               .%%@*                          ");
Sleep(50);
printf("\n       :@@-                    =@@@@@@@@@@@@@@%%#%%#+=-.       .%%*               .@@=                       ");
Sleep(50);
printf("\n       %%@*                     #@@@@@@@@@@@@@*                 .                -@@:                        ");
Sleep(50);
printf("\n      =@@.                    .@@@@@@@@@@@@@@+                                   #@*                         ");
Sleep(50);
printf("\n      @@*                     #@@@@@@@@@@@@%%-.                                   -@@                        ");
Sleep(50);
printf("\n     -@@.                    .%%@@@@@@@@@@@@#                                      @@+                       ");
Sleep(50);
printf("\n     +@@                      @@@@@@@@@@@@@@#*                                    #@%%                       ");
Sleep(50);
printf("\n     *@#                      :@@@@@@@@@@@@@@@@=                                  +@@                        ");
Sleep(50);
printf("\n     *@#                      *@@@@@@@@@@@@@@@@@%%:                                =@@                       ");
Sleep(50);
printf("\n     *@%%                     :@@@@@@@@@@@@@@@@@@@@*                               +@@                       ");
Sleep(50);
printf("\n     +@@                     %%@@@@@@@@*+%%@@@@@@@@@+                               @@%%                     ");
Sleep(50);
printf("\n     -@@-                   +@@@@@@@@*   -%%@@@@@@@#.                             .@@=                       ");
Sleep(50);
printf("\n      @@#                  .@@@@@@@@#      +@@@@@@@@=                            =@@                         ");
Sleep(50);
printf("\n      =@@:                 +@@@@@@@%%        -@@@@@@@@*                           %%@*                       ");
Sleep(50);
printf("\n       %%@#                 @@@@@@@@:          =@@@@@@@%%.                        +@@:                       ");
Sleep(50);
printf("\n       -@@=               +@@@@@@@*             %%@@@@@@-                       :@@+                         ");
Sleep(50);
printf("\n        +@@-           :+#@@@@@@@@              :@@@@@@+                      .@@#     ");
Sleep(50);
printf("\n         +@@-        .*@@@@@@@@@@.               #@@@@@@                     :@@%%      ");
Sleep(50);
printf("\n          =@@+      -@@@@@@@@@@@.                -@@@@@@=                   -@@#       ");
Sleep(50);
printf("\n           :@@%%.   -@@@@@@@@@@@-                  %%@@@@@+                  *@@+        ");
Sleep(50);
printf("\n             *@@=  .@@@@@@-::::                   .@@@@@+                =@@%%:         ");
Sleep(50);
printf("\n              :%%@%%: =@@@@@-                        %%@@@@@:             -%%@@=           ");
Sleep(50);
printf("\n                -%%@#-:*##+:                        %%@@@@@@-          =%%@@+             ");
Sleep(50);
printf("\n                  -#@@+:                           .+@@@@@@-      :*@@@+               ");
Sleep(50);
printf("\n                    .+@@%%+-                           :+###:   -*@@@*-                 ");
Sleep(50);
printf("\n                       :*@@@%%+-.                          .-+#@@@*-                    ");
Sleep(50);
printf("\n                          .=*@@@@%%*+-:.            .:-=*#@@@@#=:                       ");
Sleep(50);
printf("\n                              .-=*#%%@@@@@@@%%%%@@@@@@@%%#*=-.                           ");
Sleep(50);
printf("\n                                      .::---------:.                                   ");

contador_apariciones++;

}

system("cls");
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

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void partida_como_terroristas(){
    int contador_casillas_ocupadas = 0,j,k,ya_ingresado,x,y,total_casillas,contador_intentos,valido1,valido2,score,partida_ganada_perdida = 0;
    static int numero;
    static int lista_numeros[ELEMENTOS];
    static int pos_arreglo = 0;
    static int grilla[FILAS][COLUMNAS];
    static int ejeX;
    static int ejeY;

    total_casillas = FILAS * COLUMNAS;
    printf("%i",total_casillas);

    for(j = 0; j < FILAS; j++){
        for(k = 0; k < COLUMNAS; k++){
            grilla[j][k] = 0;
        }
    }


    do{
        system("cls");
        fflush(stdin);
        printf("\n - NO SE PERMITIRA EL INGRESO DE UN YA INGRESADO ANTERIORMENTE - \n");
        printf("\n Xx Preparte for the battle xX \n");
        do{

            printf("\n + Ingrese un numero que sera colocado en dos casillas diferentes: ");
            scanf("%i",&numero);
            ya_ingresado = numeros_ingresados(lista_numeros,&numero,&pos_arreglo);
            if(ya_ingresado == 1){
                printf("\n x ESE NUMERO YA SE HA INGRESADO ANTERIORMENTE. INTENTE CON OTRO x \n");
            }
        } while(ya_ingresado == 1);

        lista_numeros[pos_arreglo] = numero;

        do{
            printf("\n CASILLA NUMERO %i \n",contador_casillas_ocupadas + 1);
            do{
                fflush(stdin);
                printf("\n + Ingrese numero de la posicion X: ");
                scanf("%i",&x);
                if(x < 0 || x > 1){
                    printf("\n x ERROR. INGRESE UN VALOR DE ENTRE '0' y '9' x \n");
                }
            } while(x < 0 || x > 1);

            do{
                fflush(stdin);
                printf("\n + Ingrese numero de la posicion Y: ");
                scanf("%i",&y);
                if(y < 0 || y > 1){
                    printf("\n x ERROR. INGRESE UN VALOR DE ENTRE '0' Y '9' x \n");
                }
            } while(y < 0 || y > 1);

            if(grilla[x][y] != 0){
                printf("\n x ERROR. ESA CASILLA YA ESTA OCUPADA x \n");
            }

        } while(grilla[x][y] != 0);

        grilla[x][y] = numero;
        contador_casillas_ocupadas++;


        do{
            printf("\n CASILLA NUMERO %i \n",contador_casillas_ocupadas + 1);
            do{
                fflush(stdin);
                printf("\n + Ingrese numero de la posicion X: ");
                scanf("%i",&x);
                if(x < 0 || x > 1){
                    printf("\n x ERROR. INGRESE UN VALOR DE ENTRE '0' y '9' x \n");
                }
            } while(x < 0 || x > 1);

            do{
                fflush(stdin);
                printf("\n + Ingrese numero de la posicion Y: ");
                scanf("%i",&y);
                if(y < 0 || y > 1){
                    printf("\n x ERROR. INGRESE UN VALOR DE ENTRE '0' Y '9' x \n");
                }
            } while(y < 0 || y > 1);

            if(grilla[x][y] != 0){
                printf("\n x ERROR. ESA CASILLA YA ESTA OCUPADA x \n");
            }

        } while(grilla[x][y] != 0);

        grilla[x][y] = numero;
        contador_casillas_ocupadas++;

        printf("\n **** NUMERO INGRESADO EN AMBAS COORDENADAS DE FORMA EXITOSA **** \n");

        printf("\n");
        system("pause");




    } while(contador_casillas_ocupadas < total_casillas);

    printf("\n Game Commencing \n");
    printf("\n");
      for(j = 0; j < FILAS; j++){
        for(k = 0; k < COLUMNAS; k++){
            printf(" | %i \t",grilla[j][k]);
        }
        printf("\n --------------\n");
    }

    Sleep(3000);

   system("cls");

   printf("\n LET'S MOVE OUT! \n");
   printf("\n");

   for(j = 0; j < FILAS; j++){
        for(k = 0; k < COLUMNAS; k++){
            printf(" | x \t");
        }
        printf("\n --------------\n");
    }



   contador_intentos = 0;
   score = 0;
   while(contador_intentos < 5){
    printf("\n ////////////////////////////////////////////////");
    printf("\n Contador de intentos: %i",contador_intentos + 1);
    printf("\n ///////////////////////////////////////////////");
    printf("\n -------------------------------------------- \n");


    printf("\n |*******************|");
    printf("\n - Primera coordenada -");
    printf("\n |*******************|");

    do{
        fflush(stdin);
        printf("\n Ingrese numero de la posicion X <0 o 1>: ");
        scanf("%i",&ejeX);
        if(x < 0 || x > 1){
            printf("\n x ERROR. INGRESE '0' O '1' x \n");
        }
    } while(x < 0 || x > 1);


    do{
        fflush(stdin);
        printf("\n Ingrese numero de la posicion Y <0 o 1>: ");
        scanf("%i",&ejeY);
        if(y < 0 || y > 1){
            printf("\n x ERROR. INGRESE '0' O '1' x \n");
        }
    } while(y < 0 || y > 1);

    printf("\n");

    valido1 = buscar_numero_en_la_grilla(grilla,ejeX,ejeY);

    printf("\n |*******************|");
    printf("\n - Segunda coordenada -");
    printf("\n |*******************|");

    do{
        fflush(stdin);
        printf("\n Ingrese numero de la posicion X <0 o 1>: ");
        scanf("%i",&ejeX);
        if(x < 0 || x > 1){
            printf("\n x ERROR. INGRESE '0' O '1' x \n");
        }
    } while(x < 0 || x > 1);


    do{
        fflush(stdin);
        printf("\n Ingrese numero de la posicion Y <0 o 1>: ");
        scanf("%i",&ejeY);
        if(y < 0 || y > 1){
            printf("\n x ERROR. INGRESE '0' O '1' x \n");
        }
    } while(y < 0 || y > 1);

    printf("\n");

    valido2 = buscar_numero_en_la_grilla(grilla,ejeX,ejeY);

    if(valido1 == valido2){
        printf("\n =================\n");
        printf("\n * TERRORIST WIN *\n");
        printf("\n =================\n");
        score = score + 100;
        partida_ganada_perdida = 1;
    } else{
        contador_intentos++;
        printf("\n ========================= \n");
        printf("\n * COUNTER-TERRORIST WIN * \n");
        printf("\n ========================= \n");
        partida_ganada_perdida = 0;
    }

   }

    if(contador_intentos > 5 && partida_ganada_perdida == 0){
        printf("\n HAS PERDIDO \n");
    } else{
        printf("\n HAS GANADO \n");
    }

    printf("\n");
    system("pause");
}

int numeros_ingresados(int *lista_numeros,int *numero, int *pos_arreglo){
int pos = 0,flag = 0;

    if(lista_numeros[0] == 0){
        lista_numeros[0] = *numero;
        return 0;
    } else{
        do{
            if(*numero == lista_numeros[pos]){
                flag = 1;
                break;
            } else{
                pos++;
            }
        } while(pos < ELEMENTOS && flag == 0);
        if(flag == 1){
            return 1;
        } else{
            (*pos_arreglo)++;
            return 0;
        }
    }
}

int buscar_numero_en_la_grilla(int grilla[FILAS][COLUMNAS], int x, int y) {
    int i, j, valor;

    valor = grilla[x][y];

    for (i = 0; i < FILAS; i++) {
        for (j = 0; j < COLUMNAS; j++) {
            if (i == x && j == y){
                printf(" | %i\t", grilla[i][j]);
            } else {
                printf(" | x \t");
            }
        }
        printf("\n --------------\n");
    }

    return valor;
}


