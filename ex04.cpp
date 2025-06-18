#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    printf("Informe a quantidade de elementos do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int*) malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro: não foi possível alocar memória.\n");
        return 1;
    }

    // Preenchendo o vetor
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Exibindo o vetor original
    printf("\nVetor completo: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    // Calculando a metade do tamanho
    int novoTamanho = tamanho / 2;
    int *temp = (int*) realloc(vetor, novoTamanho * sizeof(int));

    if (temp == NULL) {
        printf("\nErro ao realocar memória.\n");
        free(vetor);
        return 1;
    }

    vetor = temp;

    // Exibindo o vetor reduzido
    printf("\nVetor reduzido (metade): ");
    for (int i = 0; i < novoTamanho; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    free(vetor);
    return 0;
}
