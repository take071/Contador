#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 50   // máximo de alunos
#define MAX_NOME 50     // máximo de caracteres por nome

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
    int n;

    printf("Quantos alunos deseja inserir? ");
    scanf("%d", &n);
    getchar(); // consome o '\n' deixado pelo scanf

    if (n > MAX_ALUNOS) {
        printf("Número máximo de alunos é %d.\n", MAX_ALUNOS);
        return 1;
    }

    char alunos[n][MAX_NOME];

    // Lendo os nomes manualmente
    for (int i = 0; i < n; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i], MAX_NOME, stdin);
        // Remove o '\n' do final da string, se existir
        size_t len = strlen(alunos[i]);
        if (len > 0 && alunos[i][len - 1] == '\n') {
            alunos[i][len - 1] = '\0';
        }
    }

    // Ordena os nomes
    ordenarNomes(alunos, n);

    printf("\nNomes em ordem alfabetica:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", alunos[i]);
    }

    return 0;
}
