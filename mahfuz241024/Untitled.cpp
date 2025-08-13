#include<iostream>
using namespace std;

class Base{
protected:
    int member_variable=0;

};

class Derive:public Base{
public:
    display(){
        cout << "Protected member variable is = " << member_variable ;
    }
};

int main(){
    Derive B;
    B.display();
return 0;
}

//checked ok
