#include "figure_exception.h"
#include "figure.h"

FigureException::FigureException(std::string str1, std::string str2) : domain_error(str1), reason(str1), desc(str2) {};

std::string FigureException::what() { 
    std::string w = "Не был создан";
    return w + " " + desc + " " + reason;
}
