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
    printf("\nSeu chute foi %d\n", chute);

    // Definindo a lógica do jogo
    // se o chute for igual ao número secreto
    if (chute == numerosecreto) {
        printf("\nParabens! Voce acertou!\n");
        printf("Jogue de novo, voce e um bom jogador!");
    } else { // se o chute for diferente do número secreto
        printf("\nVoce errou!");
    }
    
}