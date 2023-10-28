#include <iostream>
using namespace std;

template<class T>
struct nodo{
    T valor;
    nodo<T>* next;
    nodo(T v, nodo<T>* n){
        valor = v;
        next = n;
    }
};

template<class T>
struct cola{
    nodo<T>* head=nullptr;
    nodo<T>* tmp=nullptr;
    nodo<T>* tail=nullptr;

    void push(T valor);

    void print();

    bool pop(T &val);

    bool empty();

    ~cola();



};

template<class T>
void cola<T>::push(T valor){
    tail=new nodo<T>(valor,NULL);
    if(!head){
        head=tail;
        tmp=tail;
    }
    tmp->next=tail;
    tmp=tail;
    
}


template<class T>
void cola<T>::print(){
    cout << "head->";
    for (nodo<T>* p = head; p; p = p->next)
        cout << p->valor << "->";
    cout << "tail";
}

template<class T>
bool cola<T>::pop(T &val){

    bool sehizo=0;
    if(head){
        nodo<T>*tmp2=head;
        head=head->next;
        val=tmp2->valor;
        delete tmp2;
        sehizo=1;

    }
    return sehizo;
}


template<class T>
bool cola<T>::empty(){
    return head;
}

template<class T>
cola<T>::~cola(){
    nodo<T>*n=tail;
    nodo<T>* tmp;
    while(n){
        tmp=n;
        n=n->next;
        delete tmp;
    }
}






int main(){
    cola<int>*x=new cola<int>();
    int v=0;
    x->push(1);
    x->push(2);
    x->push(3);
    x->push(5);
    x->print();
    x->pop(v);
    cout<<endl;
    x->print();
    delete x;
    x=nullptr;
    x->print();
}