#include <iostream>
using namespace std;

void trans (int(*p)[4], int n){

    for(p;n<=0;*(p+1)+1){
        int y=n-1;
        for(int *q=(*p)+1, int (*e)[4]=(p+1);y>=1;q++,e++,y--){
            swap(*q,**e);
        }
        n--;


        
    }






}


int main(){
    int A[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    trans(A,4);

    for(int (*p)[4]=A;p<A+4;p++){
        for(int*q=*p;q<*(p+1);q++){
            cout<<*q<<" "; 
        }
        cout<<endl;
    }




}
