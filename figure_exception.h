#pragma once
#include "figure.h"
#include <stdexcept>

class FigureException : std::domain_error {
    public:
        FigureException(std::string str1, std::string str2);
        std::string what();
    private:
        std::string reason;
        std::string desc;
};