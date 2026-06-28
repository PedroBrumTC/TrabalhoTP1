#ifndef EMAIL_HPP_INCLUDED
#define EMAIL_HPP_INCLUDED

#include "template_dominios.hpp"

/**
 * @brief Domínio que representa um endereço de e-mail.
 *
 * O e-mail deve seguir o formato parte-local\@domínio. A parte local
 * pode conter letras (a-z), dígitos (0-9), ponto (.) ou hífen (-),
 * não podendo iniciar ou terminar com ponto ou hífen, com comprimento
 * máximo de 64 caracteres. O domínio é composto por partes separadas
 * por ponto, cada parte contendo letras, dígitos ou hífen, não podendo
 * iniciar ou terminar com hífen, com comprimento máximo de 255 caracteres.
 * Exemplo de valor válido: "usuario@dominio.com".
 */
class Email : public Dominio<string> {
private:
    /**
     * @brief Valida o formato do endereço de e-mail informado.
     *
     * @param email Valor a ser validado.
     * @throws std::invalid_argument Se o e-mail não atender ao formato exigido.
     */
    void validar(string);
};

#endif // EMAIL_HPP_INCLUDED
