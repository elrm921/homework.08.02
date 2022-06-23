#pragma once
#include <iostream>

class Figure {
    public:
        Figure();
        void print();
        virtual std::string print_side_values();
        virtual std::string print_angle_values();
    protected:
        Figure(std::string name, int sides);
    private:
        std::string name;
        int sides;
};