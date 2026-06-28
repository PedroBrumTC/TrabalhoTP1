#ifndef TEMPO_HPP_INCLUDED
#define TEMPO_HPP_INCLUDED

#include "template_dominios.hpp"

/**
 * @brief Domínio que representa um valor de tempo em dias.
 *
 * O valor deve ser um número inteiro entre 1 e 365, representando
 * a estimativa de esforço de uma história de usuário ou a capacidade
 * de um plano de sprint em dias.
 * Exemplo de valor válido: 20.
 */
class Tempo : public Dominio<int> {
private:
    /**
     * @brief Valida se o valor de tempo está dentro do intervalo permitido.
     *
     * @param tempo Valor inteiro a ser validado.
     * @throws std::invalid_argument Se o valor estiver fora do intervalo de 1 a 365.
     */
    void validar(int);
};

#endif // TEMPO_HPP_INCLUDED
