#import <stdio.h>
#include <locale.h>

//Declara��o de Variaveis
int matriz[2][3];
int transporta[3][2];
int i;
int j;

int main(){
    setlocale(LC_ALL, "Portuguese");
    printf( "-----------------------------------");
    printf("Programa de Transposi��o de Matrizes");
    printf("-------------------------------------\n");
//limpeza da memoria
    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            matriz[i][j]=0;
            transporta[j][i]=0;
        }
    }
    //Transposi��o propriamente
    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            printf("matriz[%d,%d] = ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
            transporta[j][i] = matriz[i][j];
        }
    }
    //impress�o

    for (i=0;i<2;i++){
        for (j=0;j<3;j++){
        printf("%d/t",matriz[i][j]);


    }
    printf("/n");
}
}
