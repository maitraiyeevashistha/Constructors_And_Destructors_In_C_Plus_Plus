// EXPERIMENT-12
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3

#include <iostream>
using namespace std;

class student
{
    double rollno;
    char name[50];
    double fee;
    
    public:
    student()
    {
        cout<<"Enter the RollNo.: ";
        cin>>rollno;
        cout<<"Enter the Name: ";
        cin>>name;
        cout<<"Enter the Fee: ";
        cin>>fee;
    }
};

int main() {
    student s;
    return 0;
}

/*Output :
Enter the RollNo.: 24070123057
Enter the Name: Maitraiyee
Enter the Fee: 500000
*/
