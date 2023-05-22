#include<stdio.h>
#include<stdlib.h>
#define filas 1000
#define columnas 1000
int main(){
int i,j,f,c; //Defino variablesindexadoras y variables para tomar el valor de filas,columnas y matrices
int A[filas][columnas]; // Defino una matriz de n matrices, n filas y n columnas
//Definicion y toma de valores por parte del usurio
    printf("De cuantas filas va a querer su matriz? ");
    scanf("%d",&f);
    printf("De cuantas columnas va a querer su matriz? ");
    scanf("%d",&c);
    system("cls");
    //Funcion para formacion de matrices con numeros randomicos
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            A[f][c] = rand( ) % 100;
        }
    }
    system("cls");
    //Funcion para imprimir las matrices con numeros randomicos
    printf("Impresion de las matrices \n");
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
                printf(" (%d) ",A[i][j]);
            }
            printf("\n");
        }
    //Funcion para imprimir la Matriz transpuesta
    printf("La matriz transpuesta es \n");
    for(i=0;i<f;i++){
        for(j=0;j<c;j++){
            printf(" (%d) ",A[j][i]);
        }
        printf("\n");
    }
    return 0;
}