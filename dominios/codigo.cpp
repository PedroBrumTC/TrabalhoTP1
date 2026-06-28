#include "codigo.hpp"

/**
 * @details Verifica se o valor possui exatamente 5 caracteres.
 * Em seguida, confirma que os dois primeiros são letras maiúsculas (A-Z)
 * e que os três últimos são dígitos numéricos (0-9).
 */
void Codigo::validar(string valor) {

    // Verifica se o tamanho é exatamente 5 caracteres
    if (valor.length() != TAMANHO) {
        throw invalid_argument("Codigo deve ter exatamente 5 caracteres.");
    }

    // Verifica se os dois primeiros caracteres são letras maiúsculas
    for (int i = 0; i < TLET; i++) {
        if (!isupper(valor[i])) {
            throw invalid_argument("Os dois primeiros caracteres devem ser letras maiusculas.");
        }
    }

    // Verifica se os três últimos caracteres são dígitos numéricos
    for (int i = TLET; i < TAMANHO; i++) {
        if (!isdigit(valor[i])) {
            throw invalid_argument("Os tres ultimos caracteres devem ser digitos numericos.");
        }
    }
}
