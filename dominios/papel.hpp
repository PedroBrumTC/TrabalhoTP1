#ifndef PAPEL_HPP_INCLUDED
#define PAPEL_HPP_INCLUDED

#include "template_dominios.hpp"

/**
 * @brief Domínio que representa o papel de um usuário no projeto.
 *
 * Os únicos valores válidos são: "DESENVOLVEDOR", "MESTRE SCRUM"
 * e "PROPRIETARIO DE PRODUTO". O papel determina quais serviços
 * o usuário tem permissão de acessar no sistema.
 */
class Papel : public Dominio<string> {
private:
    /** @brief Lista dos valores válidos aceitos pelo domínio. */
    static const string VALORES_VALIDOS[3];

    /**
     * @brief Valida se o papel informado é um dos valores permitidos.
     *
     * @param papel Valor a ser validado.
     * @throws std::invalid_argument Se o papel não for um dos valores válidos.
     */
    void validar(string);
};

#endif // PAPEL_HPP_INCLUDED
