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


    int acertou = (chute == numerosecreto); // declarando a variavel e atribuindo o valor booleano (1 ou 0)
    
    // Definindo a lógica do jogo
    // utilizando a variavel 'acertou' para verificar se o chute é igual ao número secreto
    if (acertou) {
        printf("\nParabens! Voce acertou!\n");
        printf("Jogue de novo, voce e um bom jogador!");
    } else { // se o chute for diferente do número secreto
        int maior = (chute > numerosecreto);
        if (maior) {
            printf("Seu chute foi maior que o umero secreto!\n");
        } else {
            printf("Seu chute foi menor que o numero secreto!\n");
        }
    }
    
}