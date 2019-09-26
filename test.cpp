#include<iostream>
using namespace std;

class Demo{
    public:
    void pointer(int p){
        p = 6;
    }
    void reference(int &q){
        q = 7;
    }
};

int main(){
    int x = 5;
    int y = 6;
    Demo d;
    d.pointer(x);
    d.reference(y);
    cout << x;
    cout << y;
    return 0;
}