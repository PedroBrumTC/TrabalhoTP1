#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED

#include "template_dominios.hpp"
#include <cctype>

/**
 * @brief Domínio que representa um código identificador de entidade.
 *
 * Um código válido possui exatamente 5 caracteres: os dois primeiros
 * devem ser letras maiúsculas (A-Z) e os três últimos devem ser dígitos (0-9).
 * Exemplo de valor válido: "AB123".
 */
class Codigo : public Dominio<string> {
private:
    /** @brief Tamanho fixo exigido para o código. */
    static const int TAMANHO = 5;

    /** @brief Número de letras maiúsculas exigidas no início do código. */
    static const int TLET = 2;

    /**
     * @brief Valida o formato do código informado.
     *
     * @param codigo Valor a ser validado.
     * @throws std::invalid_argument Se o código não possuir o formato correto.
     */
    void validar(string);
};

#endif // CODIGO_HPP_INCLUDED
