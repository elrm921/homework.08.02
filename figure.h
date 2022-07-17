#pragma once
#include <string>

class Figure {
    public:
        Figure();
        std::string printstr() const;
        virtual std::string print_side_values() const;
        virtual std::string print_angle_values() const;
    protected:
        Figure(std::string name, int sides);
    private:
        std::string name;
        int sides;
};