#include "tempo.hpp"

/**
 * @details Verifica se o valor inteiro informado está dentro do intervalo
 * permitido de 1 a 365 dias. Valores fora desse intervalo são rejeitados.
 */
void Tempo::validar(int valor) {

    // Valor deve estar entre 1 e 365 dias
    if (valor < 1 || valor > 365)
        throw invalid_argument("Argumento invalido para o dominio Tempo.");
}
