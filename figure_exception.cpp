#include "figure_exception.h"
#include "figure.h"

FigureException::FigureException(std::string str) : domain_error(str) {};
std::string FigureException::info() {
    return what();
}
