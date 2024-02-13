#include "Shape.h"



Circle::Circle(const Point c, const double r, const Colour col) : radius(r)
{
    colour = col;
    centre = c;
}

std::optional<Colour> Circle::collide(const Point p)
{
    Point delta = {p[0] - centre[0],p[1] - centre[1]};
    if (delta[0] * delta[0] + delta[1] * delta[1] <=radius * radius)
    {
        return colour;
    }
    else{
        return std::nullopt;
    }
}

// Rectangle constructor corrected with proper parameter names and fixed typo
Rectangle::Rectangle(const Point c, const double h, const double w, const Colour col): height(h), width(w)
{
    colour = col;
    centre = c;
}

std::optional<Colour> Rectangle::collide(const Point p)
{
    bool x_cond = (p[0] <= centre[0] + width/2) && (p[0] >= centre[0] - width/2);
    bool y_cond = (p[1] <= centre[1] + height/2) && (p[1] >= centre[1] - height/2);
    if(x_cond && y_cond){
        return colour;
    }
    else{
        return std::nullopt;
    }
}

