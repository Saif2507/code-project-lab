#include<iostream>
using namespace std;

class Person{
private:

protected:
    string name="Mahfuz";
    int age=21;
public:
};

class Employee:protected Person{
public:
    void display(){
        cout << "Employee name:" << name << endl;
        cout << "Employee age:" << age << endl;
    }
};

class Student:public Person{
public:
    void display(){
        cout << "Student name:" << name << endl;
        cout << "Student age:" << age << endl ;
    }

};

int main(){
    Employee M;
    Student B;
    M.display();
    B.display();
return 0;
}

// hierarchical inheritance work
