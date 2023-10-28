#include <iostream>

using namespace std;

template <class T>
class nodo{
    public:
        T valor;
        nodo<T>*next;
        nodo(T v, nodo<T>*nnullptr);
};

template<class T>
nodo<T>::nodo(T V, nodo<T>*n){
    valor=V;
    next=n;
}

int main(){

    nodo<int>*head=NULL;

    for(int i=1;i<=10;i++)
        head=new nodo<int>(i,head);
    cout<<"head->";

    for(nodo<int>*p=head;p;p=p->next)
        cout<<p->valor<<"->";
    cout<<"NULL"<<endl;






}