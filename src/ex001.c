#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

// -----------------------------------------
// Função para inverter o número
// -----------------------------------------

/*
 * Função: inverterNumero
 * ----------------------
 * Recebe um número inteiro como entrada e retorna o mesmo número com seus dígitos invertidos.
 * 
 * Parâmetros:
 *   - numero: número inteiro a ser invertido.
 * 
 * Retorno:
 *   - O número com os dígitos invertidos.
 */
int inverterNumero(int numero) { 
    int invertido = 0; // Variável que armazenará o número invertido
    int resto; // Variável para armazenar o resto da divisão por 10 (último dígito do número)
    
    // Loop que continuará enquanto o número for diferente de 0
    while (numero != 0) { 
        resto = numero % 10; // Obtém o último dígito do número
        invertido = invertido * 10 + resto; // Adiciona o dígito ao número invertido
        numero /= 10; // Remove o último dígito do número original
    } 
    
    return invertido; // Retorna o número invertido
}

// -----------------------------------------
// Função principal (main) - ponto de entrada do programa
// -----------------------------------------

/*
 * Função: main
 * ------------
 * Função principal que solicita ao usuário um número inteiro de 3 dígitos,
 * verifica se o número está no intervalo de 100 a 999 e, se estiver, inverte seus dígitos.
 * 
 * Retorno:
 *   - Retorna 0 se a execução for bem-sucedida.
 */
int main() { 
    int numero; // Variável para armazenar o número digitado pelo usuário
    int numeroInvertido; // Variável para armazenar o número invertido
    
    // -----------------------------------------
    // Entrada de dados
    // -----------------------------------------
    
    printf("Digite um número de três dígitos: "); // Solicita ao usuário que insira um número
    scanf("%d", &numero); // Lê o número inteiro fornecido pelo usuário e armazena na variável "numero"
    
    // -----------------------------------------
    // Verificação do intervalo
    // -----------------------------------------
    
    // Verifica se o número está entre 100 e 999 (3 dígitos)
    if (numero >= 100 && numero <= 999) { 
        // -----------------------------------------
        // Processamento: inverter o número
        // -----------------------------------------
        
        numeroInvertido = inverterNumero(numero); // Chama a função para inverter o número
        printf("O número invertido é: %d\n", numeroInvertido); // Exibe o número invertido para o usuário
    
    } else { 
        // -----------------------------------------
        // Mensagem de erro
        // -----------------------------------------
        
        // Caso o número não esteja no intervalo de 100 a 999, exibe uma mensagem de erro
        printf("Número inválido. Digite um número entre 100 e 999.\n"); 
    } 
    
    return 0; // Retorno 0 indica que o programa foi executado com sucesso
}
