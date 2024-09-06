#include <stdio.h>
#include <stdbool.h>

bool hasDuplicate(int *vet, int n, int *operationCount) {
    int i, j;
    *operationCount = 0;  // Inicializa o contador de operações

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {  // Comparação de todos os pares
            (*operationCount)++;  // Conta a operação de comparação
            if (vet[i] == vet[j]) {  // Verifica se os elementos são iguais
                return true;  // Encontrou duplicata
            }
        }
    }

    return false;  // Nenhuma duplicata encontrada
}

int main() {
    int vet[5];
    int n = 5;
    int operationCount;
    bool result;

    // Leitura dos dados do usuário
    printf("Digite %d números inteiros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    // Verifica se há duplicatas e conta as operações
    result = hasDuplicate(vet, n, &operationCount);

    // Exibe o resultado
    if (result) {
        printf("Há duplicatas no array.\n");
    } else {
        printf("Não há duplicatas no array.\n");
    }

    // Exibe o número de operações realizadas
    printf("Número de operações: %d\n", operationCount);

    return 0;
}