#include <iostream>

using namespace std;

template <class T>
struct asc{

    bool operator()(T x, T y){
        return x<y;
    }


};

template <class T>
struct des{

    bool operator()(T x, T y){

        return x>y;


    }




};




template<class T>
struct nodo{
    T valor;
    nodo<T>* next;
    nodo(T v, nodo<T>* n){
        valor = v;
        next = n;
    }
};






template<class T,class O>
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


template<class T, class O>
bool LE<T,O>::find(T valor, nodo<T>*&pos){
    O op;
    pos=NULL;
    nodo<T>*p=head;
    for(; p && op(p->valor,valor);pos=p,p=p->next);

    if(p && p->valor==valor)
        return true;
    else
        return false;

}




template<class T, class O>
void LE<T,O>::add(T valor){
    nodo<T>*pos;
    if(!find(valor,pos))
        if(!pos)
            head=new nodo<T>(valor, head);
        else
            pos->next=new nodo<T>(valor,pos->next);
}


template<class T, class O>
void LE<T,O>::del(T valor){
    
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

template<class T, class O>
void LE<T,O>::print(){
    cout<<"Head->";
    for(nodo<T>*p=head;p;p=p->next){
        cout<<p->valor<<"->";
    }
    cout<<"NULL";
    
}



template<class T, class O>
LE<T,O>::~LE(){

}





int main(){


    //LE<int> lista;

    LE<int,asc<int>> lista_int;

    LE<char, des<char>> lista_char;


    lista_int.add(6);
    lista_int.add(5);
    lista_int.add(4);
    lista_int.add(3);
    lista_int.add(2);
    lista_int.add(1);

    //lista_int.del(4);


    lista_char.add('a');
    lista_char.add('b');
    lista_char.add('c');
    lista_char.add('d');
    lista_char.add('e');

    //lista_char.del('c');

    lista_int.print();

    cout<<endl;

    lista_char.print();




}