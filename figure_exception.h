#pragma once
#include "figure.h"
#include <stdexcept>

class FigureException : std::domain_error {
    public:
        FigureException(std::string str, Figure &f);
        void print();
        char* what();
        char* reason();
    private:
        Figure f;
        char* r;
};