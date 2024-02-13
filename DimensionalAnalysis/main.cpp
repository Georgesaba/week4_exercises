#include "Shape.h"
#include <vector>
#include <memory>
#include <iostream>
#include <optional>
#include "Scene.h"


int main()
{
    // Define a scene by setting up some shapes
    std::vector<std::unique_ptr<Shape>> scene;

    scene.push_back(std::make_unique<Circle>(Point{0.0, 0.0}, 2.0));
    scene.push_back(std::make_unique<Rectangle>(Point{-3, 0}, 3, 3));

    // Check the colour at various collision points

    // collide with sphere
    printCol(CheckColour(scene, {0,0}));

    // collide with rectangle
    printCol(CheckColour(scene, {-3,0}));

    // collide with both
    printCol(CheckColour(scene, {-1.6,0}));

    // collide with neither
    printCol(CheckColour(scene, {5,5}));

    // define an image
    uint N_x = 100;
    uint N_y = 100;
    double width = 5;
    double height = 5;
    std::vector<Colour> Image(N_x * N_y);
    Colour background = {0, 0, 0};  // black background
    // Corrected loop to properly calculate point positions
    for(uint i = 0; i < N_x; ++i) {
        for(uint j = 0; j < N_y; ++j) {
            // Correcting the formula to avoid division by zero and to map correctly
            Point p = { (i / (N_x - 1.0)) * width - width / 2, (j / (N_y - 1.0)) * height - height / 2 };
            std::optional<Colour> colour = CheckColour(scene, p);
            Image[i + N_x * j] = colour.has_value() ? colour.value() : background;
        }
    }

    return 0;
}
