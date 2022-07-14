#pragma once
#include "figure.h"
#include <stdexcept>

class FigureException : public std::domain_error {
    public:
        FigureException(std::string str);
};