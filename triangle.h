#pragma once
#include "figure.h"

class Triangle : public Figure {
    public:
        Triangle();
        Triangle(int a, int b, int c, int A, int B, int C);
        std::string print_side_values() const;
        std::string print_angle_values() const;
        bool check() const;
    protected:
        Triangle(std::string name, int a, int b, int c, int A, int B, int C);
    private:
        int a, b, c;
        int A, B, C;
        std::string desc;
};