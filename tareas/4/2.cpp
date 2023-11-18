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
class LE{
    //nodo<T>*head=NULL;
    public:
        nodo<T>*head=NULL;
        void add(T valor);
        void del(T valor);
        bool find(T valor, nodo<T>*&pos);
        void print();
        ~LE();
};


template<class T>
bool LE<T>::find(T valor, nodo<T>*&pos){
    pos=NULL;
    nodo<T>*p=head;
    for(; p && p->valor<valor;pos=p,p=p->next);

    if(p && p->valor==valor)
        return true;
    else
        return false;

}




template<class T>
void LE<T>::add(T valor){
    nodo<T>*pos;
    if(!find(valor,pos))
        if(!pos){
            head=new nodo<T>(valor, head);
            head->next=head;
        }
        else
            pos->next=new nodo<T>(valor,pos->next);

}


template<class T>
void LE<T>::del(T valor){
    
    nodo<T>*pos,*tmp;
    if(find(valor,pos)){
        if(!pos){
            tmp=head;
            head=head->next;
        }
        else {
            tmp=pos->next;
            pos->next=pos->next->next;
        }
        delete tmp;
    }
}

template<class T>
void LE<T>::print(){
    cout<<"Head->";
    
    nodo<T>*p=NULL;
    while(p!=head){
        p=head;
        cout<<p->valor<<"->";
        p=p->next;
    }
    cout<<"NULL";
    
}



template<class T>
LE<T>::~LE(){

}



int main(){



    LE<int> h1;
    
    h1.add(1);
    h1.add(2);
    h1.add(3);
    h1.print();
}