#include "email.hpp"

/**
 * @details Verifica primeiramente a presença do caractere '@', separando
 * o e-mail em parte local e domínio. Valida o tamanho de cada parte,
 * os caracteres permitidos na parte local (letras, dígitos, ponto e hífen),
 * as restrições de início e fim (sem ponto ou hífen), e as regras do domínio,
 * que é dividido em duas partes separadas pelo primeiro ponto encontrado.
 */
void Email::validar(string email) {

    // Verifica se contém '@'
    if (email.find("@") == string::npos) {
        throw invalid_argument("E-mail invalido: Deve conter '@'!");
    }

    // Divide o e-mail em parte local e domínio
    string parte_local = email.substr(0, email.find("@"));
    string dominio = email.substr(email.find("@") + 1);

    // Valida tamanho da parte local (máximo 64 caracteres, não pode ser vazia)
    if (parte_local.empty() || parte_local.length() > 64) {
        throw invalid_argument("E-mail invalido: Parte local nao pode ter mais que 64 caracteres!");
    }

    // Valida tamanho do domínio (máximo 255 caracteres, não pode ser vazio)
    if (dominio.empty() || dominio.length() > 255) {
        throw invalid_argument("E-mail invalido: Dominio nao pode ter mais que 255 caracteres!");
    }

    // Valida caracteres da parte local: apenas letras, dígitos, ponto e hífen
    for (int i = 0; i < parte_local.length(); i++) {
        if (!isalnum(parte_local[i]) && parte_local[i] != '-' && parte_local[i] != '.') {
            throw invalid_argument("E-mail invalido: Caractere invalido na parte local!");
        }
        // Ponto ou hífen deve ser seguido por letra ou dígito
        else if ((parte_local[i] == '.' || parte_local[i] == '-') && !isalnum(parte_local[i + 1])) {
            throw invalid_argument("E-mail invalido: '.' ou '-' deve ser seguido por letra ou digito.");
        }
    }

    // Parte local não pode iniciar ou terminar com ponto ou hífen
    if (parte_local.front() == '.' || parte_local.front() == '-' ||
        parte_local.back()  == '.' || parte_local.back()  == '-') {
        throw invalid_argument("E-mail invalido: Parte local nao pode iniciar ou finalizar com '.' ou '-'.");
    }

    // Divide o domínio em duas partes pelo primeiro ponto
    string dominio_primeiro = dominio.substr(0, dominio.find("."));
    string dominio_segundo  = dominio.substr(dominio.find(".") + 1);

    // Valida caracteres da primeira parte do domínio: letras, dígitos e hífen
    for (int i = 0; i < dominio_primeiro.length(); i++) {
        if (!isalnum(dominio_primeiro[i]) && dominio_primeiro[i] != '-') {
            throw invalid_argument("E-mail invalido: Caractere invalido na primeira parte do dominio!");
        }
    }

    // Primeira parte do domínio não pode iniciar ou terminar com hífen
    if (dominio_primeiro.front() == '-' || dominio_primeiro.back() == '-') {
        throw invalid_argument("E-mail invalido: Dominio nao pode iniciar ou finalizar com '-'.");
    }

    // Valida caracteres da segunda parte do domínio
    for (int i = 0; i < dominio_segundo.length(); i++) {
        if (!isalnum(dominio_segundo[i]) && dominio_segundo[i] != '-') {
            throw invalid_argument("E-mail invalido: Caractere invalido na segunda parte do dominio!");
        }
    }

    // Segunda parte do domínio não pode iniciar ou terminar com hífen
    if (dominio_segundo.front() == '-' || dominio_segundo.back() == '-') {
        throw invalid_argument("E-mail invalido: Segunda parte do dominio nao pode iniciar ou finalizar com '-'.");
    }
}
