#include "papel.hpp"

const string Papel::VALORES_VALIDOS[3] = {
    "DESENVOLVEDOR",
    "MESTRE SCRUM",
    "PROPRIETARIO DE PRODUTO"
};

/**
 * @details Percorre o array de valores válidos e retorna sem erro caso
 * o valor informado corresponda a um deles. Lança exceção se nenhuma
 * correspondência for encontrada.
 *
 * @note Valores aceitos: "DESENVOLVEDOR", "MESTRE SCRUM" e "PROPRIETARIO DE PRODUTO".
 */
void Papel::validar(string valor) {

    // Itera sobre os 3 valores válidos (índices 0, 1 e 2)
    for (int i = 0; i < 3; i++) {
        if (valor == VALORES_VALIDOS[i])
            return;
    }

    throw invalid_argument("Argumento invalido para o dominio Papel.");
}
