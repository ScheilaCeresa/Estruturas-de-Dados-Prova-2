#include "../include/posfixa.hpp"
#include <iostream>

int posfixa(Fila<char> &entrada) {

    fila<char> expressao;

    string entrada = "56987+123-12*";

    for (char c : entrada) {
        if (c != ' ') expressao.empilhar(c);
    }

    int resultado = posfixa(expressao);
    cout << "Resultado: " << resultado << endl;

}