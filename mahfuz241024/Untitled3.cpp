#include<iostream>
using namespace std;

class Base{
public:
    Base(){
        cout << "Base constructor is called." << endl ;
    }
    ~Base(){
        cout << "Base destructor is called." << endl ;
    }

};

class Derive:public Base{
public:
    Derive(){
        cout << "Derive constructor is called." << endl ;
    }
    ~Derive(){
        cout << "Derive destructor is called." << endl ;
    }

};

int main(){
    Base M;
    Derive B;
return 0;
}

//checked ok
