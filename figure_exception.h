#pragma once
#include "figure.h"
#include <stdexcept>

class FigureException : std::domain_error {
    public:
        FigureException(std::string str);
        std::string info();
};