#ifndef ESTADO_HPP_INCLUDED
#define ESTADO_HPP_INCLUDED

#include "template_dominios.hpp"

/**
 * @brief Domínio que representa o estado de uma história de usuário.
 *
 * Os únicos valores válidos são: "A FAZER", "FAZENDO" e "FEITO".
 * O estado indica em qual etapa do fluxo de trabalho a história se encontra.
 */
class Estado : public Dominio<string> {
private:
    /** @brief Lista dos valores válidos aceitos pelo domínio. */
    static const string VALORES_VALIDOS[3];

    /**
     * @brief Valida se o estado informado é um dos valores permitidos.
     *
     * @param estado Valor a ser validado.
     * @throws std::invalid_argument Se o estado não for um dos valores válidos.
     */
    void validar(string);
};

#endif // ESTADO_HPP_INCLUDED
