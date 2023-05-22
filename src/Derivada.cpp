#include "derivada.h"

/*
 *  @author: Augusto Kussema
 *  @github: https://github.com/devkussema
 *  @email: dev.kussema@gmail.com
 *  @version: 2.3
 *  @copyright: (c) 2023 Augusto Kussema
 *  @license: MIT
 *  @country: Angola, Luanda
 */

Derivada::Derivada(int valorBase, int valorDerivado)
    : Base(valorBase), valorDerivado(valorDerivado) {}

int Derivada::getValorDerivado() const {
    return valorDerivado;
}

int Derivada::calcularSoma() const {
    return valorBase + valorDerivado;
}
