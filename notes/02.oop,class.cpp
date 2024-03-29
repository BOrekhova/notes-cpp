#include <iostream>

////////////////////////////////

// Object-oriented programming (OOP)
// OOP = objects + classes

// Three principles of OOP:

// Encapsulation: object only exposes the selected information.
// Abstraction hides complex details to reduce complexity.
// Inheritance (наследование) enables one class’s structure and functions to be transferred down the hierarchy.
// Polymorphism: entities (сущности) can have more than one form.

////////////////////////////////

// class is a user-defined data type, which holds its own data members and member functions
// private > protected > public

////////////////////////////////

// Constructor: MyClass()
// Destructor: ~MyClass()

////////////////////////////////

class Animal {
public:
    int age;
};

int main()
{
    Animal Barbos;
    Barbos.age = 15;
}

////////////////////////////////

class Point {
public:
    int getX()
    {
        return x;
    }

    void setX(int x)
    {
        this->x = x;
    }

private:
    int x = 0, y = 0, z = 0;
};

/////////////////////////////////

class Engine {
public:
    Engine() = default;

    Engine(unsigned hp)
    {
        this->hp = hp;
    }

private:
    unsigned hp;
};

class VehicleCharacteristics {
protected:
    unsigned weight;
    unsigned wheelSize;
};

class Vehicle : public VehicleCharacteristics {
public:
    Vehicle(Engine engine, std::string mark, unsigned weight, unsigned wheelSize)
    {
        this->engine = engine;
        this->mark = mark;
        this->weight = weight;
        this->wheelSize = wheelSize;
    }

    std::string getModel()
    {
        return mark;
    }

private:
    std::string mark;
    Engine engine;
};

////////////////////////////////

int main()
{
    Point p1;
    p1.setX(10);
    std::cout << "x: " << p1.getX() << std::endl;
}
