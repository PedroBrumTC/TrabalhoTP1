#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

#include "template_dominios.hpp"

/**
 * @brief Domínio que representa o nome de uma pessoa ou entidade.
 *
 * O nome deve ter no máximo 10 caracteres. São permitidos letras maiúsculas
 * (A-Z), letras minúsculas (a-z) e espaço em branco. O espaço em branco
 * deve ser seguido por letra; o primeiro e o último caractere não podem
 * ser espaço em branco.
 * Exemplo de valor válido: "Pedro Brum".
 */
class Nome : public Dominio<string> {
private:
    /** @brief Tamanho máximo permitido para o nome. */
    static const int TAMANHO = 10;

    /**
     * @brief Valida o formato do nome informado.
     *
     * @param nome Valor a ser validado.
     * @throws std::invalid_argument Se o nome não atender ao formato exigido.
     */
    void validar(string);
};

#endif // NOME_HPP_INCLUDED
