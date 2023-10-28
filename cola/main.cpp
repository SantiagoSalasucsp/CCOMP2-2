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
struct cola {
    nodo<T>* head = nullptr;
    nodo<T>* tail = nullptr;

    void push(T valor);

    void print();

    bool pop(T &val);

    bool empty();

    ~cola();


};

template <class T>
void cola<T>::push(T valor){
    tail = new nodo<T>(valor, tail);

    if (!head) {
        head = tail;
    }
}

template<class T>
void cola<T>::print(){
    cout << "tail->";
    for (nodo<T>* p = tail; p; p = p->next)
        cout << p->valor << "->";
    cout << "head";
}

template<class T>
bool cola<T>::pop(T &val){
    bool sehizo=0;
    if(head){
        nodo<T>*tmp=head;
        nodo<T>*p=tail;
        for( nodo<T>*p2=tail;p2!=tmp;p2=p2->next){
            p=p2;
        }
        head=p;
        head->next=nullptr;
        val=tmp->valor;
        delete tmp;
        sehizo=1;
        return sehizo;

    }
    else
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
    cola<int>* x = new cola<int>(); 
    int val=0;
    x->push(1);
    x->push(2);
    x->push(3);
    x->pop(val);
    x->print();
    delete x;

    

    return 0;
}
