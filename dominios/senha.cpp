#include "senha.hpp"

/**
 * @details Verifica se a senha possui exatamente 6 caracteres, contendo
 * apenas letras e dígitos. Aplica a regra de alternância: letra não pode
 * ser seguida por letra, e dígito não pode ser seguido por dígito. Ao final,
 * confirma a presença de pelo menos uma letra minúscula, uma maiúscula e
 * um dígito.
 */
void Senha::validar(string senha) {
    bool possuiMaiusculo = false;
    bool possuiMinusculo = false;
    bool possuiDigito    = false;

    // Verifica tamanho fixo de 6 caracteres
    if (senha.length() != 6) {
        throw invalid_argument("Senha invalida: A senha deve conter 6 caracteres!");
    }

    for (int i = 0; i < senha.length(); i++) {

        // Atualiza flags de presença de cada tipo de caractere
        if (islower(senha[i])) possuiMinusculo = true;
        if (isupper(senha[i])) possuiMaiusculo = true;
        if (isdigit(senha[i])) possuiDigito    = true;

        // Apenas letras e dígitos são permitidos
        if (!isalnum(senha[i])) {
            throw invalid_argument("Senha invalida: A senha deve conter apenas letras ou numeros!");
        }

        // Verifica alternância entre letras e dígitos
        if (i < senha.length() - 1) {
            if (isalpha(senha[i]) && isalpha(senha[i + 1])) {
                throw invalid_argument("Senha invalida: Letra nao pode ser seguida por letra.");
            }
            else if (isdigit(senha[i]) && isdigit(senha[i + 1])) {
                throw invalid_argument("Senha invalida: Digito nao pode ser seguido por digito.");
            }
        }
    }

    // Confirma presença obrigatória de maiúsculo, minúsculo e dígito
    if (!possuiDigito || !possuiMaiusculo || !possuiMinusculo) {
        throw invalid_argument("Senha invalida: Deve conter caracteres maiusculo, minusculo e numero.");
    }
}
