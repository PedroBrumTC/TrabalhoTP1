#include "data.hpp"

/**
 * @details Valida o formato DD/MM/AAAA verificando tamanho e separadores.
 * Extrai dia, mês e ano como inteiros e verifica os limites: ano entre 2000
 * e 2999, mês entre 1 e 12, e dia dentro do intervalo correto para o mês
 * informado. Aplica a regra de ano bissexto para fevereiro: divisível por 4
 * e não por 100, ou divisível por 400.
 */
void Data::validar(string valor) {

    // Valida formato básico: tamanho 10 e separadores nas posições corretas
    if (valor.length() != 10 || valor[2] != '/' || valor[5] != '/') {
        throw invalid_argument("Formato invalido. Use DD/MM/AAAA.");
    }

    // Extrai e converte dia, mês e ano
    int dia = stoi(valor.substr(0, 2));
    int mes = stoi(valor.substr(3, 2));
    int ano = stoi(valor.substr(6, 4));

    // Valida limites do ano e do mês
    if (ano < 2000 || ano > 2999) {
        throw invalid_argument("Ano fora do intervalo permitido (2000-2999).");
    }
    if (mes < 1 || mes > 12) {
        throw invalid_argument("Mes invalido.");
    }

    // Determina o número máximo de dias para o mês informado
    int diasNoMes = 31;

    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasNoMes = 30;
    } else if (mes == 2) {
        // Ano bissexto: divisível por 4 e não por 100, ou divisível por 400
        bool bissexto = (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
        diasNoMes = bissexto ? 29 : 28;
    }

    // Valida o dia dentro do intervalo correto para o mês e ano
    if (dia < 1 || dia > diasNoMes) {
        throw invalid_argument("Dia invalido para o mes/ano especificado.");
    }
}
