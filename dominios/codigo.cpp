#include "codigo.hpp"

void Codigo::validar(string valor){

    if (valor.length() != TAMANHO) {
        throw invalid_argument("Codigo deve ter exatamente 5 caracteres.");
    }

    for (int i = 0; i < TLET; i++) {
        if (!isupper(valor[i])) {
            throw invalid_argument("Os dois primeiros caracteres devem ser letras maiusculas.");
        }
    }

    for (int i = TLET; i < TAMANHO; i++) {
        if (!isdigit(valor[i])) {
            throw invalid_argument("Os tres ultimos caracteres devem ser digitos numericos.");
        }
    }

}
