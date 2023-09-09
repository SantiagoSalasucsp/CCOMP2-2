#include <iostream>

using namespace std;

void coktail_sort(int* ini,int*fin){
    int cambios=1;
 while(cambios!=0 && ini<fin){
    cambios=0;
    for(int*p=ini;p<fin;p++){
        if(*p>*(p+1))
            swap(*p,*(p+1));
            cambios++;
    }
    fin--;

    for(int*p=fin;p>ini;p--){
        if(*p<*(p-1))
            swap(*p,*(p-1));
            cambios++;
    }
    ini++;

 }
}


void PrintPun(int*ini,int*fin){
    for(int*p=ini;p<=fin;p++)
        cout<<*p<<" ";
}



int main(){

    int A[]={100,90,80,50,20,10,2,6,9,1};
    int*ini=A;
    int*fin=A+9;
    cout<<*A<<endl;
    cout<<*fin<<endl;

for(int l=0;l<10;l++){
    cout<<A[l]<<" ";
}
    coktail_sort(ini,fin);

    cout<<endl;
for(int l=0;l<10;l++){
    cout<<A[l]<<" ";
}
cout<<endl;
    PrintPun(ini,fin);





}