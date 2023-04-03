#include <iostream>

class Engine
{
public:
    void start()
    {
        std::cout << "Engine started" << std::endl;
    }
};

class Car
{
private:
    Engine engine;
public:
    void start()
    {
        engine.start();
        std::cout << "Car started" << std::endl;
    }
};

class Person
{
private:
    Car car;
public:
    void drive()
    {
        car.start();
        std::cout << "Person is driving the car" << std::endl;
    }
};

int main()
{
    Person person;
    person.drive();
    return 0;
}
