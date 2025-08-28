// EXPERIMENT-12
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3

#include <iostream>
using namespace std;

class student {
    int age;
    string name;

public:
    // Parameterized constructor
    student(string s, int a) {
        name = s;
        age = a;
    }

    // Copy constructor
    student(const student &s) {
        name = s.name;
        age = s.age;
        cout << "Copy Constructor Called!" << endl;
        cout<<"This output is by the copy constructor : "<<endl;
    }

    void display() {
        cout << "Name : " << name << " Age : " << age << endl;
    }
};

int main() {
    student s1("Maitraiyee", 18);
    student s2 = s1;        // Copy constructor called here

    s1.display();
    s2.display();

    return 0;
}


/*Output
Copy Constructor Called!
This output is by the copy constructor : 
Name : Maitraiyee Age : 18
Name : Maitraiyee Age : 18
*/
