#include <iostream>
#include "figure.h"
#include "quadrangle.h"
#include "figure_exception.h"

Quadrangle::Quadrangle() : Figure("Четырехугольник", 4) {
    this->a = 1;
    this->b = 2;
    this->c = 3;
    this->d = 4;
    this->A = 20;
    this->B = 40;            
    this->C = 60;
    this->D = 80;
    if (!check()) {
        throw FigureException("сумма углов не равнa 360", *this);
    }
}
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Figure("Четырехугольник", 4) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    if (!check()) {
        throw FigureException("сумма углов не равнa 360", *this);
    }
}
Quadrangle::Quadrangle(std::string name, int a, int b, int c, int d, int A, int B, int C, int D) : Figure(name, 4) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    if (!check()) {
        throw FigureException("сумма углов не равнa 360", *this);
    }
}
std::string Quadrangle::print_side_values() {
    return "a = " + std::to_string(a) + " b = " + std::to_string(b) + " c = " + std::to_string(c) + " d = " + std::to_string(d);
}
std::string Quadrangle::print_angle_values() {
    return "A = " + std::to_string(A) + " B = " + std::to_string(B) + " C = " + std::to_string(C) + " D = " + std::to_string(D);
}
bool Quadrangle::check() {
    return (A + B + C + D == 360 && a > 0 && b > 0 && c > 0 && d > 0);
}