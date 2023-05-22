#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define filas 50
#define columnas 50
int main(){
srand(time(NULL));
int f,c; //Defino variablesindexadoras y variables para tomar el valor de filas,columnas y matrices
int A[filas][columnas]; // Defino una matriz de n matrices, n filas y n columnas
//Definicion y toma de valores por parte del usurio
    printf("De cuantas filas va a querer su matriz? ");
    scanf("%d",&f);
    printf("De cuantas columnas va a querer su matriz? ");
    scanf("%d",&c);
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            A[f][c] = 0;
        }
    }
    //Funcion para formacion de matrices con numeros randomicos
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            A[f][c] = rand()%100;
        }
    }
    //Funcion para imprimir la matrices con numeros randomicos
    printf("Impresion de la matrices \n");
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
                printf(" (%d) ",A[i][j]);
            }
            printf("\n");
        }
    //Funcion para imprimir la Matriz transpuesta
    printf("La matriz transpuesta es \n");
    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            printf(" (%d) ",A[j][i]);
        }
        printf("\n");
    }
    return 0;
}