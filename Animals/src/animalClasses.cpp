#include "animalClasses.h"
#include <iostream>

// void Dog::speak(){
//     std::cout << "WOOF" << std::endl;
// }

// void Cat::speak(){
//     std::cout << "WOOF" << std::endl;
// }

// void Budgie::speak(){
//     std::cout << "WOOF" << std::endl;
// }

Animal::Animal(){}

void Animal::speak(){
    std::cout << sound << std::endl;
}

Cat::Cat() {sound = "Meow";}
Dog::Dog() {sound = "Woof";}
Budgie::Budgie() { sound = "Tweet";};
Terrier::Terrier(){};
Labrador::Labrador(){sound = "Yap";};

