#include <stdio.h>
#include <locale.h>

int vetor[10];
int i = 0;

int main(){
    //inicializa��o da mem�ria


    for (i=0;i<10;i++){
        vetor[i]=0;
    }
    //preenchimento do vetor
    for (i=0;i<10;i++){
        printf("Digite o valor da posi��o %d",i);
        scanf("%d",&vetor[i]);

    }
    //impress�o do vetor
    for (i=0;i<10;i++){
        printf("vetor[%d]=%d\n",i,vetor[i]);
    }
}


