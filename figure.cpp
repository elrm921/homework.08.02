#include <iostream>
#include "figure.h"

Figure::Figure() {
    this->name = "Фигура";
    this->sides = 0;
}
Figure::Figure(std::string name, int sides) {
    this->name = name;
    this->sides = sides;
}
void Figure::print() {
    std::cout << name;
    std::cout << " стороны: " << print_side_values();
    std::cout << " углы: " << print_angle_values();
}
std::string Figure::print_side_values() {
    return std::string();
}
std::string Figure::print_angle_values() {
    return std::string();
}