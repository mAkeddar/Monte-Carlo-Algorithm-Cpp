//
// Created by hugo on 28/11/2020.
//

#include "PolynomlFunc.h"

PolynomFunc::PolynomFunc() {}
PolynomFunc::~PolynomFunc() {}



double PolynomFunc:: evaluate(double x){
    return coef_a*x + coef_b;
};