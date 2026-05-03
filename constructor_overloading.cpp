#include <iostream>
using namespace std;
class Demo {
public:
    Demo() {
        cout << "Default\n";
    }
    Demo(int x) {
        cout << x << endl;
    }
};
int main() {
    Demo d1;
    Demo d2(10);
}
