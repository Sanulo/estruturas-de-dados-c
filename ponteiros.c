#include <stdlib.h>
#include <stdio.h>

int main(){
    int x = 10; // Declaração de uma variável inteira.
    int* p = &x; // Declaração de um ponteiro para inteiro, o ponteiro 'p' vai armazenar o endereço de memória de 'x'.

    /* Manipulando o valor da variável através do ponteiro.
    Aqui, '*p' acessa o conteúdo do endereço armazenado em 'p',
    como 'p' aponta para 'x', isso altera diretamente o valor de 'x'. */
    *p = 20;

    printf("Novo valor de x: %d\n", x); // Exibe o novo valor de x.
    printf("Endereco de x: %p\n", &x);  // Exibe o endereco de memoria de x.
    printf("Conteudo de p (O endereco): %p\n", p);   // Exibe o conteudo de p, que é justamente o endereco de x.
    printf("Valor apontado por p: %d\n", *p);  // Exibe o valor armazenado no endereco que p aponta (o valor de x).

    return 0;
}