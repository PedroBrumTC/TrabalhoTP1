#include "nome.hpp"
#include <cctype>

/**
 * @details Verifica se o nome não está vazio e não excede 10 caracteres.
 * Rejeita nomes que iniciem ou terminem com espaço em branco. Percorre
 * cada caractere aceitando apenas letras (maiúsculas e minúsculas) e
 * espaço em branco. O espaço em branco deve ser seguido obrigatoriamente
 * por outro caractere não-espaço.
 */
void Nome::validar(string nome) {

    // Nome não pode ser vazio e não pode exceder o tamanho máximo
    if (nome.empty() || nome.length() > TAMANHO)
        throw invalid_argument("Nome invalido: tamanho incorreto!");

    // Nome não pode iniciar ou terminar com espaço
    if (nome.front() == ' ' || nome.back() == ' ')
        throw invalid_argument("Nome invalido: espaco no inicio ou fim!");

    for (size_t i = 0; i < nome.length(); i++) {
        char c = nome[i];

        // Apenas letras e espaço são permitidos
        if (!isalpha(c) && c != ' ')
            throw invalid_argument("Nome invalido: caractere nao permitido!");

        // Espaço deve ser seguido por outro caractere (não pode haver espaços consecutivos)
        if (c == ' ') {
            if (i + 1 >= nome.length() || nome[i + 1] == ' ')
                throw invalid_argument("Nome invalido: espaco mal posicionado!");
        }
    }
}
