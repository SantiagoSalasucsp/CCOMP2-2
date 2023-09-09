#include <iostream>

using namespace std;

int main(){

    int A[3][5]={1,3,5,7,9,2,4,6,8,10,21,31,41,51,61};

   // cout<<A+0<<endl;
    //cout<<A+1<<endl;
    

    /*int a=5;
    int* p=&a;
    int** k=&p;*/

    //cout<<p<<endl<<&a<<endl<<*p<<endl<<"ahora otra cosa"<<endl;
    //cout<<k<<endl<<&p<<endl<<*k<<endl<<**k<<endl;

    //cout<<A<<endl<<*A+1<<endl<<*(*A+1)<<endl;
   // cout<<A+1<<endl<<*(A+1)<<endl<<**(A+1)<<endl;

    for(int (*p)[5]=A;p<A+3;p++){
        for(int*q=*p;q<*(p+1);q++){
            cout<<*q<<" "; 
        }
        cout<<endl;
    }

    cout<<endl;

    for(int*l=(int*)A;l<*(A+3);l++){
        cout<<*l<<" ";
    }

    cout<<endl<<**A<<endl;
    cout<<**(A+1)<<endl;
    cout<<**(A+2)<<endl;

    cout<<(*(*A+1))<<endl;
    cout<<*(*(A+1)+1)<<endl;
    cout<<"--------------"<<endl;
    for(int*p=*A+2;p<*(A+3);p+=5){
        cout<<*p<<endl;
    }

    cout<<"----------"<<endl;

    for(int(*p)[5]=A;p<A+3;p++)
        cout<<*(*p+1)<<endl;
    
}