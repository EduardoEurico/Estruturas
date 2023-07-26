#include <stdio.h>
#include <locale.h>


//Declaração de Variaveis//

int vetorOriginal[10];
int vetorInvertido[10];
int i=0;

//Função Principal//

int main(){
    setlocale(LC_ALL, "Portuguese");
    for (i=0;i<10;i++){
        vetorInvertido[i]=0;
        vetorOriginal[i]=0;
}
    for (i=0;i<10;i++){
        printf("Digite a posição %d do vetor: ",i);
        scanf("%d",&vetorOriginal[i]);
    }
    for (i=9;i>=0;i--){
        vetorInvertido[9-i] = vetorOriginal[i];
    }
    for (i=0;i<10;i++){
        printf("vetorOriginal[%d] = %d\n",i, vetorOriginal[i]);
    }
     for (i=0;i<10;i++){
        printf("vetorInvertido[%d] = %d\n",i, vetorInvertido[i]);
    }
}
