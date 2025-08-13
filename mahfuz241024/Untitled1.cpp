#include<iostream>
using namespace std;

class Vehicle{
private:
    int x=1;
protected:
    int y=2;
public:
    int z=3;
};

class Car:protected Vehicle{
public:
    void display(){
        //cout << x << endl; //not applicable in any
        cout << y << endl;
        cout << z << endl;
    }

};

int main(){
    Car ob2;
    ob2.display();


return 0;
}

/*base class mode    --> public     -- private -- protected */
/*______________________________________________________*/
/*public             --> public     -- private -- protected */
/*private            --> not ac     -- not ac  -- not ac */
/*protected          --> protected  -- private -- protected */


