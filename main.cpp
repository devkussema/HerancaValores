#include <iostream>
#include "base.h"
#include "derivada.h"

/*
 *  Um programa escrito em C++ que demonstra de forma resumida a forma como são usadas as classes
 *  e o conceito de herança na linguagem C++.
 *
 *  @author: Augusto Kussema
 *  @github: https://github.com/devkussema
 *  @email: dev.kussema@gmail.com
 *  @version: 2.3
 *  @copyright: (c) 2023 Augusto Kussema
 *  @license: MIT
 *  @country: Angola, Luanda
 */

int main() {
    Derivada objeto(5, 10);

    std::cout << "Valor da classe base: " << objeto.getValorBase() << std::endl;
    std::cout << "Valor da classe derivada: " << objeto.getValorDerivado() << std::endl;

    int soma = objeto.calcularSoma();
    std::cout << "Soma dos valores: " << soma << std::endl;

    return 0;
}
