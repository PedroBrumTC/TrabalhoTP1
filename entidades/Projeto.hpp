#ifndef PROJETO_HPP_INCLUDED
#define PROJETO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/data.hpp"

/**
 * @brief Entidade que representa um projeto no sistema.
 *
 * O projeto é criado pelo Proprietário de Produto e deve ser associado
 * a um Mestre Scrum no momento da criação. Contém um código identificador
 * único, nome, data de início e data de término. A diferença em dias entre
 * início e término define o limite total de capacidade dos planos de sprint
 * associados ao projeto.
 */
class Projeto {
private:
    Codigo codigo;
    Nome nome;
    Data inicio;
    Data termino;

public:
    /**
     * @brief Define o código identificador do projeto.
     * @param codigo Instância de Codigo com valor válido.
     */
    void setCodigo(const Codigo&);

    /**
     * @brief Define o nome do projeto.
     * @param nome Instância de Nome com valor válido.
     */
    void setNome(const Nome&);

    /**
     * @brief Define a data de início do projeto.
     * @param inicio Instância de Data com valor válido.
     */
    void setInicio(const Data&);

    /**
     * @brief Define a data de término do projeto.
     * @param termino Instância de Data com valor válido.
     */
    void setTermino(const Data&);

    /**
     * @brief Retorna o código identificador do projeto.
     * @return Instância de Codigo.
     */
    Codigo getCodigo() const;

    /**
     * @brief Retorna o nome do projeto.
     * @return Instância de Nome.
     */
    Nome getNome() const;

    /**
     * @brief Retorna a data de início do projeto.
     * @return Instância de Data.
     */
    Data getInicio() const;

    /**
     * @brief Retorna a data de término do projeto.
     * @return Instância de Data.
     */
    Data getTermino() const;
};

// Setters
inline void Projeto::setCodigo(const Codigo& codigo) {
    this->codigo = codigo;
}
inline void Projeto::setNome(const Nome& nome) {
    this->nome = nome;
}
inline void Projeto::setInicio(const Data& inicio) {
    this->inicio = inicio;
}
inline void Projeto::setTermino(const Data& termino) {
    this->termino = termino;
}

// Getters
inline Codigo Projeto::getCodigo() const {
    return codigo;
}
inline Nome Projeto::getNome() const {
    return nome;
}
inline Data Projeto::getInicio() const {
    return inicio;
}
inline Data Projeto::getTermino() const {
    return termino;
}

#endif // PROJETO_HPP_INCLUDED
