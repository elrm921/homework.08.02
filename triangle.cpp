#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "figure_exception.h"

Triangle::Triangle() : Figure("Треугольник", 3) {
    this->a = 1;
    this->b = 2;
    this->c = 3;
    this->A = 40;
    this->B = 60;            
    this->C = 80;
    if (!check()) {
        throw FigureException("сумма углов не равнa 180", *this);
    }
}
Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Figure("Треугольник", 3)  {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;            
    this->C = C;
    if (!check()) {
        throw FigureException("сумма углов не равнa 180", *this);
    }
}
Triangle::Triangle(std::string name, int a, int b, int c, int A, int B, int C) : Figure(name, 3) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;            
    this->C = C;
    if (!check()) {
        throw FigureException("сумма углов не равнa 180", *this);
    }
}
std::string Triangle::print_side_values() {
    return "a = " + std::to_string(a) + " b = " + std::to_string(b) + " c = " + std::to_string(c);
}
std::string Triangle::print_angle_values() {
    return "A = " + std::to_string(A) + " B = " + std::to_string(B) + " C = " + std::to_string(C);
}
bool Triangle::check() {
    return (A + B + C == 180 && a > 0 && b > 0 && c > 0);
}