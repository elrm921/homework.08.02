#include "figure.h"

Figure::Figure() {
    this->name = "Фигура";
    this->sides = 0;
}
Figure::Figure(std::string name, int sides) {
    this->name = name;
    this->sides = sides;
}
std::string Figure::printstr() const {
    return name + " стороны: " + print_side_values() + " углы: " +  print_angle_values();
}

std::string Figure::print_side_values() const {
    return std::string();
}
std::string Figure::print_angle_values() const {
    return std::string();
}