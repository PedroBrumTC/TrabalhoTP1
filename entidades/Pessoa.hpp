#ifndef PESSOA_HPP_INCLUDED
#define PESSOA_HPP_INCLUDED

#include "../dominios/email.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/senha.hpp"
#include "../dominios/papel.hpp"

/**
 * @brief Entidade que representa um usuário do sistema.
 *
 * Cada pessoa deve criar uma conta informando e-mail, nome, senha e papel
 * no projeto. O e-mail funciona como chave primária e identificador único
 * da pessoa no sistema. O papel define quais serviços o usuário pode acessar.
 */
class Pessoa {
private:
    Email email;
    Nome nome;
    Senha senha;
    Papel papel;

public:
    /**
     * @brief Define o e-mail da pessoa, utilizado como identificador único.
     * @param email Instância de Email com valor válido.
     */
    void setEmail(const Email&);

    /**
     * @brief Define o nome da pessoa.
     * @param nome Instância de Nome com valor válido.
     */
    void setNome(const Nome&);

    /**
     * @brief Define a senha de autenticação da pessoa.
     * @param senha Instância de Senha com valor válido.
     */
    void setSenha(const Senha&);

    /**
     * @brief Define o papel da pessoa no projeto.
     * @param papel Instância de Papel com valor válido.
     */
    void setPapel(const Papel&);

    /**
     * @brief Retorna o e-mail da pessoa.
     * @return Instância de Email.
     */
    Email getEmail() const;

    /**
     * @brief Retorna o nome da pessoa.
     * @return Instância de Nome.
     */
    Nome getNome() const;

    /**
     * @brief Retorna a senha de autenticação da pessoa.
     * @return Instância de Senha.
     */
    Senha getSenha() const;

    /**
     * @brief Retorna o papel da pessoa no projeto.
     * @return Instância de Papel.
     */
    Papel getPapel() const;
};

// Setters
inline void Pessoa::setEmail(const Email& email) {
    this->email = email;
}
inline void Pessoa::setNome(const Nome& nome) {
    this->nome = nome;
}
inline void Pessoa::setSenha(const Senha& senha) {
    this->senha = senha;
}
inline void Pessoa::setPapel(const Papel& papel) {
    this->papel = papel;
}

// Getters
inline Email Pessoa::getEmail() const {
    return email;
}
inline Nome Pessoa::getNome() const {
    return nome;
}
inline Senha Pessoa::getSenha() const {
    return senha;
}
inline Papel Pessoa::getPapel() const {
    return papel;
}

#endif // PESSOA_HPP_INCLUDED
