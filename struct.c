#include <stdio.h>

typedef struct{
    char name[50];
    int age;
    float average;
} Aluno;

int main(){
    Aluno aluno1 = {"Caio", 25, 8.5};

    printf("Aluno: %s Idade: %d Media: %.2f", aluno1.name, aluno1.age, aluno1.average);
    return 0;
}