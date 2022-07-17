#pragma once
#include "figure.h"

class Quadrangle : public Figure {
    public:
        Quadrangle();
        Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
        std::string print_side_values() const;
        std::string print_angle_values() const;
        bool check() const;
    protected:
        Quadrangle(std::string name, int a, int b, int c, int d, int A, int B, int C, int D);
    private:
        int a, b, c, d;
        int A, B, C, D;
        std::string desc;
};