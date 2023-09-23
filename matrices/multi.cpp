#include <iostream>

using namespace std;

void suma(int(*p)[3][2]){

    int *c=**(p+2);
    int *a=**p;
    int *b=**(p+1);
    int *f=c;
    int *k=b;
    while(!(a==k) && !(b==f)){
        *c=*a+*b;

        c++;
        a++;
        b++;
    }

}


int main(){
    
    int A[3][3][2]={1,2,3,4,5,6,1,2,3,4,5,6};

    suma(A);

    for(int *p=**(A+2);p<**(A+3);p++){
        cout<<*p<<" ";
    }


}