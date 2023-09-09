#include <iostream>

using namespace std;


int main(){

    int a=10;
    cout<<&a<<endl;

    int b=20;
    cout<<&b<<endl;

    int*A=&a;
    int*B=&b;

    swap(*A,*B);

    cout<<*A<<endl<<*B<<endl;
    cout<<a<<endl<<b<<endl;


}