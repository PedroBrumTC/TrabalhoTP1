#ifndef TEXTO_HPP_INCLUDED
#define TEXTO_HPP_INCLUDED

#include "template_dominios.hpp"

/**
 * @brief Domínio que representa um texto genérico de até 40 caracteres.
 *
 * São permitidos letras (a-z ou A-Z), dígitos (0-9), vírgula, ponto
 * e espaço em branco. Vírgula não pode ser seguida por vírgula ou ponto;
 * ponto não pode ser seguido por vírgula ou ponto; espaço em branco deve
 * ser seguido por letra ou dígito. O primeiro e o último caractere não
 * podem ser vírgula, ponto ou espaço em branco.
 * Exemplo de valor válido: "Titulo da historia".
 */
class Texto : public Dominio<string> {
private:
    /** @brief Tamanho máximo permitido para o texto. */
    static const int TAMANHO = 40;

    /**
     * @brief Valida o formato do texto informado.
     *
     * @param texto Valor a ser validado.
     * @throws std::invalid_argument Se o texto não atender ao formato exigido.
     */
    void validar(string);
};

#endif // TEXTO_HPP_INCLUDED
