// EXPERIMENT-12
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3

#include <iostream>
using namespace std;

class Car {
    int Price;
    string name;
    int id;

public:
    // Parameterized constructor
    Car(string s, int a , int i) {
        name = s;
        Price = a;
        id = i;
    }

    // Copy constructor
    Car(const Car &c) {
        name = c.name;
        Price = c.Price;
        id=c.id;
        cout << "Copy Constructor Called!" << endl;
        cout<<"This output is by the copy constructor : "<<endl;
    }

    void display() {
        cout << "Name : " << name << " Price : " << Price <<" ID : "<<id<< endl;
    }
};

int main() {
    Car c1("toyota", 5000000,5487);
    Car c2 = c1;        // Copy constructor called here

    c1.display();
    c2.display();

    return 0;
}


/*Output :
Copy Constructor Called!
This output is by the copy constructor : 
Name : toyota Price : 5000000 ID : 5487
Name : toyota Price : 5000000 ID : 5487
*/
