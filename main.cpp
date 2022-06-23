#include <iostream>
#include "figure.h"
#include "triangle.h"
#include "quadrangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"
#include "rectangle.h"
#include "parallelogram.h"
#include "square.h"
#include "rhombus.h"
#include "figure_exception.h"

void print(Figure &f) {
    std::cout << "Создан ";
    f.print();
    std::cout << "\n";
}

int main() {
    try {
        Triangle t0;
        print(t0);
        Quadrangle q0;
        print(q0);
    }
    catch(FigureException e) {
        std::cout << e.what();
        e.print();
        std::cout << e.reason();
        std::cout << "\n";
    }
    return 0;
}