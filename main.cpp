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

void print(const Figure &f) {
    std::cout << "Создан " << f.printstr() << "\n";
}

int main() {
    try {
        print(RightTriangle(1, 2, 3, 30, 60));
        print(IsoscelesTriangle(2, 1, 30, 90));
        print(EquilateralTriangle(3));
        print(Rectangle(1, 4));
        print(Square(4));
        print(Parallelogram(1, 4, 60, 120));
        print(Rhombus(4, 60, 40));
    }
    catch(FigureException e) {
        std::cout << "Не был создан " << e.what() << "\n";
    }
    return 0;
}