// EXPERIMENT-12
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3

#include <iostream>
using namespace std;

class Date
{
    int date;
    int month;
    int year;
    public:
    Date();
    void display();
};    

Date::Date()
    {
        cout<<"Enter the day: ";
        cin>>date;
        cout<<"Enter the month: ";
        cin>>month;
        cout<<"Enter the year: ";
        cin>>year;
    }

void Date::display()
{
   cout<<"The current date is: "<<date<<"/"<<month<<"/"<<year<<endl;
}

int main() {
    Date d;
    d.display();
    return 0;
}


/* Output:
Enter the day: 26
Enter the month: 08
Enter the year: 2025
The current date is: 26/8/2025
*/
