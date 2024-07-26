#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calcularNivel(int vitorias, int derrotas, char* nivel) {
    int saldoVitorias = vitorias - derrotas;

    if (vitorias < 10) {
        strcpy(nivel, "Ferro");
    } else if (vitorias >= 11 && vitorias <= 20) {
        strcpy(nivel, "Bronze");
    } else if (vitorias >= 21 && vitorias <= 50) {
        strcpy(nivel, "Prata");
    } else if (vitorias >= 51 && vitorias <= 80) {
        strcpy(nivel, "Ouro");
    } else if (vitorias >= 81 && vitorias <= 90) {
        strcpy(nivel, "Diamante");
    } else if (vitorias >= 91 && vitorias <= 100) {
        strcpy(nivel, "Lendario");
    } else if (vitorias >= 101) {
        strcpy(nivel, "Imortal");
    }

    printf("O Heroi tem de saldo de %d esta no nivel de %s\n", saldoVitorias, nivel);
}

int main() {
    int vitorias, derrotas;
    char nivel[30];

    printf("Ola Heroi! \n");
    printf("Quantas vitorias voce tem? \n");
    scanf("%d", &vitorias);

    printf("Quantas derrotas voce tem? \n");
    scanf("%d", &derrotas);

    calcularNivel(vitorias, derrotas, nivel);

    return 0;
}