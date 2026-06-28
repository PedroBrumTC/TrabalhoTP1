#include "estado.hpp"

const string Estado::VALORES_VALIDOS[3] = {
    "A FAZER",
    "FAZENDO",
    "FEITO"
};

/**
 * @details Percorre o array de valores válidos e retorna sem erro caso
 * o valor informado corresponda a um deles. Lança exceção se nenhuma
 * correspondência for encontrada.
 *
 * @note Valores aceitos: "A FAZER", "FAZENDO" e "FEITO".
 */
void Estado::validar(string valor) {

    // Itera sobre os 3 valores válidos (índices 0, 1 e 2)
    for (int i = 0; i < 3; i++) {
        if (valor == VALORES_VALIDOS[i])
            return;
    }

    throw invalid_argument("Argumento invalido para o dominio Estado.");
}
