#include <stdio.h>

// funão main: ponto de entrada do programa
int main() {
    // imprime o cabeçalho do jogo
    printf("*************************************\n");
    printf("* Bem vindo ao jogo de adivinhacao! *\n");
    printf("*************************************\n\n");

    int numerosecreto = 42; // declarando a variavel e o valor da variavel
    int chute;

    printf("Qual o seu chute? "); // pedindo o chute do usuario
    scanf("%d", &chute); // lendo o chute do usuário, '&' indica o endereço da memória onde o valor será armazenado
    printf("\nSeu chute foi %d", chute);
}