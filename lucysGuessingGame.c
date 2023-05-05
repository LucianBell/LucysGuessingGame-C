#include <stdio.h>

int main()
{
    // Imprimindo cabeçalho do jogo
    printf("************************************\n");
    printf("* Welcome to Lucy's Guessing Game! *\n");
    printf("************************************\n");

    int secretNumber = 42;

    int guess;
    int win = 0;
    int tries = 1;

    // Evite número mágicos no código, aqui substituimos ele por TRIES_NUMBER
    while (win == 0)
    {
        printf("Try number %d\n", tries);
        printf("Try to guess the secret number: ");
        // scanf é a função que vai ser usada para ler o dado inserido pelo usuário.
        // dois argumentos. Qual o tipo de dado será inserido e onde será guardado
        scanf("%d", &guess);

        if (guess < 0)
        {
            printf("Your guess need to be higher than 0!\n");
            // Continue é irmão do break. Ele faz o for/while passar para a próxima parte do código, sem matar o código.
            continue;
        }

        if (guess == secretNumber)
        {
            printf("CONGRATULATIONS! YOU GUESS IS RIGHT :D You just needed %d tries!\n", tries);
            win = 1;
        }
        else if (guess > secretNumber)
        {
            printf("Your guess was not right :( Your guess was higher than the secret number!\n");
            printf("\n");
        }
        else
        {
            printf("Your guess was not right :( Your guess was lower than the secret number!\n");
            printf("\n");
        }
        tries++;
    }
    printf("\n");
    printf("Game over! Thanks for playing :D");
}