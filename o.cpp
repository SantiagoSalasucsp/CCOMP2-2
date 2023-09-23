#include <iostream>
using namespace std;
void tra(int(*p)[4]){
    int n=4;
    for(int*q=*p;n>0;q+=5){
        int c=n-1;
        
        int*o=q+1;
        int*l=(q+4);
        
        
        
        while(c>0){
            swap(*o,*l);
            o+=1;
            l+=4;
            c--;
        }
        n--;
    }

}

int main(){
    int A[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    tra(A);

    for(int (*p)[4]=A;p<A+4;p++){
        for(int*q=*p;q<*(p+1);q++){
            cout<<*q<<" "; 
        }
        cout<<endl;
    }



/*int(*q)[4]=A;
int*p;
q=(*(q+1)+1);
cout <<"Esto es: "<<*(q+1)+1<<endl;
cout<<*p<<endl<<q<<endl;*/



}
