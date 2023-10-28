#include <iostream>

using namespace std;

template<class T>
struct nodo{
    T valor;
    nodo<T>*next;
    nodo(T v, nodo<T>*n=nullptr){
        valor = v;
        next=n;
    }
};



template<class T>
struct cola
{
    nodo<T>*head=nullptr;
    nodo<T>*tael=nullptr;

    void push(T valor);

    void print();


};

template <class T>
void cola<T>::push(T valor){
    if(! head){
        head=new nodo<T>(valor,head);
        tael=head;
        }
    else
        tael=new nodo<T>(valor, tael);
}


template<class T>
void print(){
    cout<<"tael->";
    for(nodo<T>*tmp=tael;tmp;tmp=tmp->next)
        cout<<tmp->valor<<"->";
    cout<<"Head";
}