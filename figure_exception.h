#pragma once
#include <string>
#include <stdexcept>

class FigureException : public std::domain_error {
    public:
        FigureException(std::string str);
};