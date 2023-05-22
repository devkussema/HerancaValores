#ifndef DERIVADA_H
#define DERIVADA_H

#include "base.h"

/*
 *  @author: Augusto Kussema
 *  @github: https://github.com/devkussema
 *  @email: dev.kussema@gmail.com
 *  @version: 2.3
 *  @copyright: (c) 2023 Augusto Kussema
 *  @license: MIT
 *  @country: Angola, Luanda
 */
class Derivada : public Base {
private:
    int valorDerivado;

public:
    Derivada(int valorBase, int valorDerivado);
    int getValorDerivado() const;
    int calcularSoma() const;
};

#endif  // DERIVADA_H
