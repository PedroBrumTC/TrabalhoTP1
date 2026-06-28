#include "texto.hpp"
#include <cctype>

/**
 * @details Verifica se o texto não excede 40 caracteres. Rejeita textos
 * que iniciem ou terminem com espaço, vírgula ou ponto. Percorre cada
 * caractere aceitando apenas letras, dígitos, espaço, vírgula e ponto.
 * Aplica restrições de sequência: vírgula e ponto não podem ser seguidos
 * por vírgula ou ponto; espaço deve ser seguido por letra ou dígito.
 */
void Texto::validar(string texto) {

    // Texto vazio é aceito
    if (texto.empty())
        return;

    // Verifica tamanho máximo
    if (texto.length() > TAMANHO)
        throw invalid_argument("Texto invalido: tamanho incorreto!");

    // Primeiro e último caractere não podem ser espaço, vírgula ou ponto
    string simbolos_invalidos = " .,";
    for (int c = 0; c < 3; c++) {
        if (texto.front() == simbolos_invalidos[c] || texto.back() == simbolos_invalidos[c])
            throw invalid_argument("Texto invalido: caractere nao permitido no inicio ou fim!");
    }

    for (size_t i = 0; i < texto.length(); i++) {
        char c = texto[i];

        // Apenas letras, dígitos, espaço, ponto e vírgula são permitidos
        if (!isalnum(c) && c != ' ' && c != '.' && c != ',')
            throw invalid_argument("Texto invalido: caractere nao permitido.");

        if (i + 1 < texto.length()) {
            char prox = texto[i + 1];

            // Vírgula não pode ser seguida por vírgula ou ponto
            if (c == ',' && (prox == ',' || prox == '.'))
                throw invalid_argument("Texto invalido: virgula mal posicionada.");

            // Ponto não pode ser seguido por vírgula ou ponto
            if (c == '.' && (prox == ',' || prox == '.'))
                throw invalid_argument("Texto invalido: ponto mal posicionado.");

            // Espaço deve ser seguido por letra ou dígito
            if (c == ' ' && !isalnum(prox))
                throw invalid_argument("Texto invalido: espaco mal posicionado.");
        }
    }
}
