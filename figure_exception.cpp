#include "figure_exception.h"
#include "figure.h"

FigureException::FigureException(std::string str, Figure &f) : domain_error(str) {
    this->f = f;
    char *cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    this->r = cstr;
};
void FigureException::print() {
    f.print();
}
char* FigureException::what() { 
    char* w = (char*) "Не был создан ";
    return w;
}
char* FigureException::reason() { 
    return r;
}
