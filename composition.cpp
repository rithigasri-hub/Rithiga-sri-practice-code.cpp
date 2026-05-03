#include <iostream>
using namespace std;
class Engine {
public:
    void start() {
        cout << "Engine Start\n";
    }
};
class Car {
    Engine e;
public:
    void startCar() {
        e.start();
    }
};
int main() {
    Car c;
    c.startCar();
}
