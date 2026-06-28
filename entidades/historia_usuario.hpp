#ifndef HISTORIA_USUARIO_HPP_INCLUDED
#define HISTORIA_USUARIO_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/texto.hpp"
#include "../dominios/tempo.hpp"
#include "../dominios/prioridade.hpp"
#include "../dominios/estado.hpp"

/**
 * @brief Entidade que representa uma história de usuário no sistema.
 *
 * A história de usuário descreve um requisito funcional do ponto de vista
 * do usuário, composta por papel (como...), ação (eu quero...) e valor (para...).
 * Cada história possui um código identificador único, título, estimativa de
 * esforço, prioridade e estado atual no fluxo de trabalho.
 */
class HistoriaUsuario {
private:
    Codigo codigo;
    Texto titulo;
    Texto papel;
    Texto acao;
    Texto valor;
    Tempo estimativa;
    Prioridade prioridade;
    Estado estado;

public:
    /**
     * @brief Define o código identificador da história de usuário.
     * @param codigo Instância de Codigo com valor válido.
     */
    void setCodigo(const Codigo&);

    /**
     * @brief Define o título da história de usuário.
     * @param titulo Instância de Texto com valor válido.
     */
    void setTitulo(const Texto&);

    /**
     * @brief Define o papel (como...) da história de usuário.
     * @param papel Instância de Texto com valor válido.
     */
    void setPapel(const Texto&);

    /**
     * @brief Define a ação (eu quero...) da história de usuário.
     * @param acao Instância de Texto com valor válido.
     */
    void setAcao(const Texto&);

    /**
     * @brief Define o valor (para...) da história de usuário.
     * @param valor Instância de Texto com valor válido.
     */
    void setValor(const Texto&);

    /**
     * @brief Define a estimativa de esforço da história de usuário em dias.
     * @param estimativa Instância de Tempo com valor válido.
     */
    void setEstimativa(const Tempo&);

    /**
     * @brief Define a prioridade da história de usuário.
     * @param prioridade Instância de Prioridade com valor válido.
     */
    void setPrioridade(const Prioridade&);

    /**
     * @brief Define o estado atual da história de usuário.
     * @param estado Instância de Estado com valor válido.
     */
    void setEstado(const Estado&);

    /**
     * @brief Retorna o código identificador da história de usuário.
     * @return Instância de Codigo.
     */
    Codigo getCodigo() const;

    /**
     * @brief Retorna o título da história de usuário.
     * @return Instância de Texto.
     */
    Texto getTitulo() const;

    /**
     * @brief Retorna o papel (como...) da história de usuário.
     * @return Instância de Texto.
     */
    Texto getPapel() const;

    /**
     * @brief Retorna a ação (eu quero...) da história de usuário.
     * @return Instância de Texto.
     */
    Texto getAcao() const;

    /**
     * @brief Retorna o valor (para...) da história de usuário.
     * @return Instância de Texto.
     */
    Texto getValor() const;

    /**
     * @brief Retorna a estimativa de esforço da história de usuário.
     * @return Instância de Tempo.
     */
    Tempo getEstimativa() const;

    /**
     * @brief Retorna a prioridade da história de usuário.
     * @return Instância de Prioridade.
     */
    Prioridade getPrioridade() const;

    /**
     * @brief Retorna o estado atual da história de usuário.
     * @return Instância de Estado.
     */
    Estado getEstado() const;
};

// Setters
inline void HistoriaUsuario::setCodigo(const Codigo& codigo) {
    this->codigo = codigo;
}
inline void HistoriaUsuario::setTitulo(const Texto& titulo) {
    this->titulo = titulo;
}
inline void HistoriaUsuario::setPapel(const Texto& papel) {
    this->papel = papel;
}
inline void HistoriaUsuario::setAcao(const Texto& acao) {
    this->acao = acao;
}
inline void HistoriaUsuario::setValor(const Texto& valor) {
    this->valor = valor;
}
inline void HistoriaUsuario::setEstimativa(const Tempo& estimativa) {
    this->estimativa = estimativa;
}
inline void HistoriaUsuario::setPrioridade(const Prioridade& prioridade) {
    this->prioridade = prioridade;
}
inline void HistoriaUsuario::setEstado(const Estado& estado) {
    this->estado = estado;
}

// Getters
inline Codigo HistoriaUsuario::getCodigo() const {
    return codigo;
}
inline Texto HistoriaUsuario::getTitulo() const {
    return titulo;
}
inline Texto HistoriaUsuario::getPapel() const {
    return papel;
}
inline Texto HistoriaUsuario::getAcao() const {
    return acao;
}
inline Texto HistoriaUsuario::getValor() const {
    return valor;
}
inline Tempo HistoriaUsuario::getEstimativa() const {
    return estimativa;
}
inline Prioridade HistoriaUsuario::getPrioridade() const {
    return prioridade;
}
inline Estado HistoriaUsuario::getEstado() const {
    return estado;
}

#endif // HISTORIA_USUARIO_HPP_INCLUDED
