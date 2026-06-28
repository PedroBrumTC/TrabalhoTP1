#include "prioridade.hpp"

/**
 * @details Verifica se o valor informado é exatamente um dos três
 * níveis de prioridade aceitos pelo sistema. A comparação é case-sensitive.
 *
 * @note Valores aceitos: "ALTA", "MEDIA" e "BAIXA".
 */
void Prioridade::validar(string prioridade) {

    // Aceita apenas os três valores definidos pela especificação
    if (prioridade == "BAIXA" || prioridade == "MEDIA" || prioridade == "ALTA") {
        return;
    }

    throw invalid_argument("Prioridade invalida!");
}
