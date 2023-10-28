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
    nodo<T>*head=NULL;
    public:
        void add(T valor);
        void del(T valor);
        bool find(T valor, nodo<T>*&pos);
        void print();
        ~LE();
};


template<class T>
bool find(T valor, nodo<T>*&pos){
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
        if(!pos)
            head=new nodo<T>(valor, head);
        else
            pos->next=new nodo<T>(valor,pos->next)
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










int main(){

    int arr[]={200,230,500,800};
    int arr2[]={150,225,487,530,920,1000};

    LE<int>H1;
    for(int x=0;x<6;x++){
        H1.add(arr[1]);
    }
    






}