#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
   	//Variáveis que podem ser usadas
   	unsigned int x[200];
   	int y;
   	int z;
   	int k;
   	int w;
   	int j;
   	int i;
   	
   	//#########################

    for (y = 0; y <= 199; y++) {
        x[y] = 0;
    }    
    // Pede que o usuário digite um número. Até que o número seja -1, todos os números serão armazenados em um vetor 
    // de bit. Ao final, são exibidos na tela em ordem.
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &z);

        if (z == -1) break;	// verifica se o número recebido é válido
        if (z < 0 || z > 5000) {// e se ele está no intervalo pré-estabelecido.
            printf("Número inválido!\n");
            continue;
        }

        x[z / 32] |= (1 << (z % 32));// 
    }

    printf("Números digitados: ");
    //O vetor é percorrido fazendo comparações bit a bit a fim de verificar quais foram digitados.
    for (k = 0; k <= 5000; k++) {
        if (x[k / 32] & (1 << (k % 32))) {
            printf("%d ", k);
        }
    }

    printf("\n");
   	
   	//#########################
   
	return 0;  
}
