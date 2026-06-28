#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED

#include "template_dominios.hpp"

/**
 * @brief Domínio que representa a senha de autenticação de um usuário.
 *
 * A senha deve ter exatamente 6 caracteres. Cada caractere pode ser
 * letra (a-z ou A-Z) ou dígito (0-9). Letra não pode ser seguida por
 * letra, e dígito não pode ser seguido por dígito. A senha deve conter
 * pelo menos uma letra minúscula, uma letra maiúscula e um dígito.
 * Exemplo de valor válido: "a1B2c3".
 */
class Senha : public Dominio<string> {
private:
    /** @brief Tamanho fixo exigido para a senha. */
    static const int TAMANHO = 6;

    /**
     * @brief Valida o formato da senha informada.
     *
     * @param senha Valor a ser validado.
     * @throws std::invalid_argument Se a senha não atender ao formato exigido.
     */
    void validar(string);
};

#endif // SENHA_HPP_INCLUDED
