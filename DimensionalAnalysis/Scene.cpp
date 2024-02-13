#include "Shape.h"
#include <vector>
#include <memory>
#include <iostream>
#include <optional>
#include "Scene.h"

void printCol(std::optional<Colour> c)
{
    if (c)
    {
        auto colour = c.value();
        std::cout << "(r,g,b) = (" << int(colour.r) << "," << int(colour.g) << "," << int(colour.b) << ")" << std::endl;
    }
    else
    {
        std::cout << "background" << std::endl;
    }
}

std::optional<Colour> CheckColour(std::vector<std::unique_ptr<Shape>> &scene, const Point &p)
{
    std::optional<Colour> colour = std::nullopt;
    int n_collide = 1;
    for (auto &obj : scene)
    {
        if (!colour.has_value())
        {
            colour = obj->collide(p);
        }
        else
        {
            auto colour2 = obj->collide(p);
            if (colour2)
            {
                n_collide += 1;
                double frac = double(n_collide-1)/double(n_collide); 
                colour.value().r = colour.value().r * frac + colour2.value().r / n_collide;
                colour.value().g = colour.value().g * frac + colour2.value().g / n_collide;
                colour.value().b = colour.value().b * frac + colour2.value().b / n_collide;
            }
        }
    }
    return colour;
}
