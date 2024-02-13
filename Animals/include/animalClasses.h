#pragma once
#include <iostream>
#include <string>
// class Animal{
//     public:
//     virtual void speak() = 0;
// };

// class Dog : public Animal{
//     public: 
//     void speak();
// };

// class Cat : public Animal{
//     public:
//     void speak();
// };

// class Budgie : public Animal{
//     public:
//     void speak();
// };

class Animal{
    public:
    void speak();

    protected:
    Animal();
    std::string sound;

};

class Dog : public Animal{
    public:
    Dog();
};


class Budgie : public Animal{
    public:
    Budgie();
};

class Cat : public Animal{
    public:
    Cat();
};
class Labrador : public Dog {
    public:
    Labrador();
};

class Terrier : public Dog {
    public:
    Terrier();
    void speak();
};