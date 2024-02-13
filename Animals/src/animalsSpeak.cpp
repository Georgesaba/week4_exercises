#include <iostream>
#include <vector>
#include <memory>
#include "animalClasses.h"

int main()
{
    //declare a vector of animal pointers here
    std::vector<std::unique_ptr<Animal>> animals;
    animals.push_back(std::move(std::make_unique<Dog>()));
    animals.push_back(std::move(std::make_unique<Cat>()));
    animals.push_back(std::move(std::make_unique<Budgie>()));
    animals.push_back(std::move(std::make_unique<Labrador>()));
    animals.push_back(std::move(std::make_unique<Terrier>()));
    //put some different kinds of animal pointers (dogs, cats, budgies) in your vector


    //loop through all the animals in your vector and call Speak() on them in turn
    for(auto &a : animals){
        a->speak();
    }

    return 0;
}