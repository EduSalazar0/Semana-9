#include<stdio.h>
#include<stdlib.h>
#define filas 50
#define columnas 50
#define matriz 50
int main(){
int i,j,k,f,c,m; //Defino variablesindexadoras y variables para tomar el valor de filas,columnas y matrices
int A[matriz][filas][columnas]; // Defino una matriz de n matrices, n filas y n columnas
//Definicion y toma de valores por parte del usurio
    printf("ingrese cuantas matrices desea? ");
    scanf("%d",&m);
    printf("De cuantas filas va a querer su matriz? ");
    scanf("%d",&f);
    printf("De cuantas columnas va a querer su matriz? ");
    scanf("%d",&c);
    system("cls");
    //Funcion para formacion de matrices de n valores
    for(k=0;k<m;k++){
        for(i=0;i<f;i++){
            for(j=0;j<c;j++){
                 A[m][f][c] = 0;
                    if(k==(m-1)){
                        A[k][i][j] = 1;
                    }
            }
        }
    }
    system("cls");
    //Funcion para imprimir las matrices deseadas
    printf("Impresion de las matrices \n");
    for(k=0;k<m;k++){
        for(i=0;i<f;i++){
            for(j=0;j<c;j++){
                printf(" (%d) ",A[k][i][j]);
                if(j==(c-1)){
                    printf("\n");
                }
            }
        }
        printf("\n");
    }

    return 0;
}