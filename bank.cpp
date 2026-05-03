#include <iostream>
using namespace std;
class Bank {
    double balance;
public:
    void setBalance(double b) {
        balance = b;
    }
    double getBalance() {
        return balance;
    }
};
int main() {
    Bank b;
    b.setBalance(5000);
    cout << b.getBalance();
}
