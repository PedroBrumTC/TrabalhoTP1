#ifndef TEMPLATE_DOMINIOS_HPP_INCLUDED
#define TEMPLATE_DOMINIOS_HPP_INCLUDED

#include <stdexcept>
#include <string>
using namespace std;

/**
 * @brief Classe template base para todos os domínios do sistema.
 *
 * Define a estrutura comum de armazenamento e acesso ao valor de um domínio,
 * além de impor a validação do valor por meio do método virtual puro validar().
 * Toda classe de domínio deve herdar desta classe e implementar sua própria
 * lógica de validação.
 *
 * @tparam T Tipo do valor armazenado pelo domínio (ex: string, int).
 */
template <typename T>
class Dominio {
    private:
        T valor;

        /**
         * @brief Valida o valor fornecido conforme as regras do domínio.
         *
         * Método virtual puro que deve ser implementado por cada subclasse
         * para definir as regras de validação específicas do domínio.
         *
         * @param valor Valor a ser validado.
         * @throws std::invalid_argument Se o valor não atender ao formato exigido.
         */
        virtual void validar(T) = 0;

    public:
        /**
         * @brief Define o valor do domínio após validação.
         *
         * Chama o método validar() antes de armazenar o valor.
         * Lança exceção se o valor for inválido.
         *
         * @param novoValor Novo valor a ser atribuído ao domínio.
         * @throws std::invalid_argument Se o valor não atender ao formato exigido.
         */
        void setValor(T novoValor) {
            validar(novoValor);
            valor = novoValor;
        }

        /**
         * @brief Retorna o valor atual armazenado no domínio.
         *
         * @return Valor do tipo T armazenado.
         */
        T getValor() const {
            return valor;
        }
};

#endif // TEMPLATE_DOMINIOS_HPP_INCLUDED
