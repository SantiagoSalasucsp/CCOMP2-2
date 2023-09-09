#include <iostream>

using namespace std;

void orden(int*ini,int*med){
int*fin=med+(med-ini);

    while(ini<med && med<fin){

        for(int*m=ini;m<med;m++){
            if(*m>*med)
                swap(*m,*med);
        }
        ini++;
        med++;
    }
}

void PrintPun(int*ini,int*fin){
    for(int*p=ini;p<=fin;p++)
        cout<<*p<<" ";
}

int main(){

    /*int A[]={1,3,5,7,9,2,4,6,8,10};
    PrintPun(A,A+9);
    cout<<endl;
    orden(A,(A+5));
    PrintPun(A,A+9);
    */
    int A[]={3,8,111,15,17,18,35,5,48,72,80,100};
    PrintPun(A,A+11);
    cout<<endl;
    orden(A,A+6);
    PrintPun(A,A+11);





}