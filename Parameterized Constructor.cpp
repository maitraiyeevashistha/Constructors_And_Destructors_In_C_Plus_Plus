// EXPERIMENT-11
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3

#include <iostream>
using namespace std;

class construct{
    int a,b;
    public:
    construct(int m,int n){
        
    a=m;
    b=n;
    }
    
    void putdata(){
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};

int main(){
    construct c(1000,25);
    c.putdata();
}

/* Output :
a=1000
b=25
*/
