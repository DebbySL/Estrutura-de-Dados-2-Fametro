#include <stdio.h>

// Função para trocar os valores usando ponteiros
void trocarValores(int *a, int *b) {
    int temp = *a;   // Armazena o valor de a em uma variável temporária
    *a = *b;         // Atribui o valor de b para a
    *b = temp;       // Atribui o valor temporário (antigo a) para b
}

int main() {
    int num1, num2;
    
    // Lendo os valores do usuário
    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    
    // Mostrando os valores antes da troca
    printf("\nAntes da troca:\n");
    printf("Primeiro valor: %d\n", num1);
    printf("Segundo valor: %d\n", num2);
    
    // Chamando a função para trocar os valores
    // Passamos os endereços das variáveis usando &
    trocarValores(&num1, &num2);
    
    // Mostrando os valores depois da troca
    printf("\nDepois da troca:\n");
    printf("Primeiro valor: %d\n", num1);
    printf("Segundo valor: %d\n", num2);
    
    return 0;
}