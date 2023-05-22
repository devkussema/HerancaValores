#ifndef BASE_H
#define BASE_H

/*
 *  @author: Augusto Kussema
 *  @github: https://github.com/devkussema
 *  @email: dev.kussema@gmail.com
 *  @version: 2.3
 *  @copyright: (c) 2023 Augusto Kussema
 *  @license: MIT
 *  @country: Angola, Luanda
 */

class Base {
protected:
    int valorBase;

public:
    Base(int valor);
    int getValorBase() const;
};

#endif  // BASE_H
