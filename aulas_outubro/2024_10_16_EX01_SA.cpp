#include <iostream>
#include <ctime>
#include <iomanip>

/*
 * A função main demonstra o uso de ponteiros para acessar e manipular um array de inteiros.
 * Ela imprime os valores do primeiro elemento, o elemento apontado pelo ponteiro, o próximo elemento,
 * o elemento anterior, e o elemento duas posições à frente do ponteiro.
 */

void mudaLinha();
void meuCarimbo();

int main() {
    meuCarimbo();
    mudaLinha();

    int numeros[5] = {10, 20, 30, 40, 50};
    int *ptr = numeros;

    std::cout << "Array inicial: {10, 20, 30, 40, 50}" << std::endl;
    std::cout << "O ponteiro foi inicializado para apontar para o primeiro elemento do array." << std::endl;
    std::cout << "Pressione ENTER para continuar..." << std::endl;
    std::cin.get();

    std::cout << "Primeiro elemento do array: " << numeros[0] << std::endl;
    std::cout << "Valor apontado pelo ponteiro inicialmente: " << *ptr << std::endl;
    std::cout << "Pressione ENTER para mover o ponteiro para o proximo elemento..." << std::endl;
    std::cin.get();

    ptr++;
    std::cout << "Agora o ponteiro aponta para o proximo elemento: " << *ptr << std::endl;
    std::cout << "Pressione ENTER para mover o ponteiro de volta ao elemento anterior..." << std::endl;
    std::cin.get();

    ptr--;
    std::cout << "O ponteiro voltou a apontar para o primeiro elemento: " << *ptr << std::endl;
    std::cout << "Pressione ENTER para acessar o elemento duas posicoes a frente..." << std::endl;
    std::cin.get();

    std::cout << "Elemento duas posicoes a frente do atual: " << *(ptr + 2) << std::endl;

    std::cout << "Fim do programa. Pressione ENTER para sair." << std::endl;
    std::cin.get();

    return 0;
}

// Função que mostra (algumas) informações gerais
void meuCarimbo() {
    std::time_t tempo_atual = std::time(nullptr);
    std::tm* tempo_local = std::localtime(&tempo_atual);
    
    std::cout << "\n[Stefanie Abreu] - [ " 
              << std::put_time(tempo_local, "%d-%m-%Y %H:%M:%S") << " ]";
    mudaLinha();
}

// Função que imprime uma linha em branco
void mudaLinha() {
    std::cout << std::endl;
}
