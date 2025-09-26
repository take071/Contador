#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 5
#define MAX_NOME 50

void ordenarNomes(char nomes[][MAX_NOME], int n) {
    char temp[MAX_NOME];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }
}

int main() {
    char alunos[MAX_ALUNOS][MAX_NOME] = {
        "Carlos",
        "Ana",
        "Beatriz",
        "Daniel",
        "Fernando"
    };

    ordenarNomes(alunos, MAX_ALUNOS);

    printf("Nomes em ordem alfabetica:\n");
    for (int i = 0; i < MAX_ALUNOS; i++) {
        printf("%s\n", alunos[i]);
    }

    return 0;
}
