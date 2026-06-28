#ifndef PLANO_SPRINT_HPP_INCLUDED
#define PLANO_SPRINT_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/texto.hpp"
#include "../dominios/tempo.hpp"

/**
 * @brief Entidade que representa um plano de sprint no sistema.
 *
 * O plano de sprint é criado pelo Mestre Scrum e associado a um projeto.
 * Contém um código identificador único, um objetivo descritivo e uma
 * capacidade em dias. A soma das capacidades de todos os planos de sprint
 * de um projeto não pode exceder o número de dias entre as datas de início
 * e término do projeto.
 */
class PlanoSprint {
private:
    Codigo codigo;
    Texto objetivo;
    Tempo capacidade;

public:
    /**
     * @brief Define o código identificador do plano de sprint.
     * @param codigo Instância de Codigo com valor válido.
     */
    void setCodigo(const Codigo&);

    /**
     * @brief Define o objetivo do plano de sprint.
     * @param objetivo Instância de Texto com valor válido.
     */
    void setObjetivo(const Texto&);

    /**
     * @brief Define a capacidade do plano de sprint em dias.
     * @param capacidade Instância de Tempo com valor válido.
     */
    void setCapacidade(const Tempo&);

    /**
     * @brief Retorna o código identificador do plano de sprint.
     * @return Instância de Codigo.
     */
    Codigo getCodigo() const;

    /**
     * @brief Retorna o objetivo do plano de sprint.
     * @return Instância de Texto.
     */
    Texto getObjetivo() const;

    /**
     * @brief Retorna a capacidade do plano de sprint em dias.
     * @return Instância de Tempo.
     */
    Tempo getCapacidade() const;
};

// Setters
inline void PlanoSprint::setCodigo(const Codigo& codigo) {
    this->codigo = codigo;
}
inline void PlanoSprint::setObjetivo(const Texto& objetivo) {
    this->objetivo = objetivo;
}
inline void PlanoSprint::setCapacidade(const Tempo& capacidade) {
    this->capacidade = capacidade;
}

// Getters
inline Codigo PlanoSprint::getCodigo() const {
    return codigo;
}
inline Texto PlanoSprint::getObjetivo() const {
    return objetivo;
}
inline Tempo PlanoSprint::getCapacidade() const {
    return capacidade;
}

#endif // PLANO_SPRINT_HPP_INCLUDED
