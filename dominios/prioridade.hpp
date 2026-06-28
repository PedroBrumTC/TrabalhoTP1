#ifndef PRIORIDADE_HPP_INCLUDED
#define PRIORIDADE_HPP_INCLUDED

#include "template_dominios.hpp"

/**
 * @brief Domínio que representa a prioridade de uma história de usuário.
 *
 * Os únicos valores válidos são: "ALTA", "MEDIA" e "BAIXA".
 * A prioridade indica a urgência com que a história de usuário
 * deve ser tratada dentro do projeto.
 */
class Prioridade : public Dominio<string> {
private:
    /**
     * @brief Valida se a prioridade informada é um dos valores permitidos.
     *
     * @param prioridade Valor a ser validado.
     * @throws std::invalid_argument Se a prioridade não for um dos valores válidos.
     */
    void validar(string);
};

#endif // PRIORIDADE_HPP_INCLUDED
