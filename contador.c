#include<stdio.h>

int main() {
    float nota, soma = 0;
    int contador = 0;

    printf("Digite as notas (digite -1 para encerrar):\n");

    while (1) {
        scanf("%f", &nota);

        if (nota == -1) {
            break;
        }

        soma += nota;
        contador++;
    }

    if (contador > 0) {
        float media = soma / contador;
        printf("Média das notas: %.2f\n", media);
    } else {
        printf("Nenhuma nota válida foi inserida.\n");
    }

    return 0;
}
