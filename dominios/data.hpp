#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED

#include "template_dominios.hpp"
#include <string>

/**
 * @brief Domínio que representa uma data no formato DIA/MÊS/ANO.
 *
 * O dia deve ser um número de 1 a 31, o mês deve ser um dos valores
 * 01 a 12, e o ano deve estar entre 2000 e 2999. A data deve ser
 * válida considerando anos bissextos.
 * Exemplo de valor válido: "29/02/2024".
 */
class Data : public Dominio<string> {
private:
    /**
     * @brief Valida o formato e a consistência da data informada.
     *
     * @param data Valor a ser validado no formato DIA/MÊS/ANO.
     * @throws std::invalid_argument Se a data não for válida.
     */
    void validar(string);
};

#endif // DATA_HPP_INCLUDED
