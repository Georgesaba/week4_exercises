#include <vector>
#include <memory>
#include <iostream>
#include "Shape.h"

void printCol(std::optional<Colour> c);
std::optional<Colour> CheckColour(std::vector<std::unique_ptr<Shape>> &scene, const Point &p);
    