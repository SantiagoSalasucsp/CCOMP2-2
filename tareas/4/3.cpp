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
    nodo(nodo<T>* n,T v){
        valor = v;
        next = n;
    }
};






template<class T, class O>
class LEC{
    //nodo<T>*head=NULL;
    public:
        O op;
        nodo<T>*head=NULL;
        nodo<T>*fin=NULL;
        void add(T valor);
        void del(T valor);
        bool find(T valor, nodo<T>*&pos);
        void print();
        ~LEC();
};


template<class T, class O>
bool LEC<T,O>::find(T valor, nodo<T>*&pos){
    pos=NULL;
    nodo<T>*p=head;
    for(;p &&p->next!=head && op(p->valor,valor);pos=p,p=p->next){
        if(p->valor==valor)
            return 0;
    }

    if(p && p->valor==valor)
        return true;
    if(op(p->valor,valor)){ 
        pos = p;
        return 0;
    }
    else
        return false;

}




template<class T,class O>
void LEC<T,O>::add(T valor){
    

    


        
            /*
            /*if(head==NULL){
                head=new nodo<T>(NULL,valor);
                head->next=head;
                fin=head;
                cout<<fin->valor<<endl;
                
            }

            if(pos->next==head){
                pos->next=new nodo<T>(head,valor);
                fin=pos;
                //cout<<fin->valor<<endl;
                //cout<<pos->next->valor;
                break;
            }

            if(pos==head){
                nodo<T>*tmp1=head;
                head=new nodo<T>(head,valor);
                fin->next=head;
                break;

            }

            if(pos!=head && pos->next !=head && head){
                pos->next=new nodo<T>(pos->next,valor);
                break;
            }
            */
  nodo<T>*p = head;
  nodo<T>* pos;
  if(head==nullptr)
  {
    head = new nodo<T>(NULL,valor);
    head->next = head;
  }
  if(!find(valor,pos))
  {
      if(!pos)
      {
        if(op(p->valor,valor)){ 
            cout<<"entro1"<<endl;
          head->next = new nodo<T>(head,valor);
        }
        else{
            cout<<"entro"<<endl;
          for(;p->next != head;){ 
            p=p->next;
          }
          head = new nodo<T>(head,valor);
          p->next = head;
        }
      }
     else{
       pos->next=new nodo<T>(pos->next,valor);
     }
    }
  
    

            
        
        

}


template<class T, class O>
void LEC<T,O>::del(T valor){
    
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

template<class T,class O>
void LEC<T,O>::print()
{
  nodo<T>* p = head;
  cout << "Head->";
  if(p)
    {
      for(;p->next != head; p = p->next) {
        cout<<p->valor<<"->";
      }
      cout<<p->valor<<"->";
    }
  cout << "Head" << endl;  
}



template<class T,class O>
LEC<T,O>::~LEC(){

}





int main(){



    LEC<int,des<int>> h1;
    
    h1.add(1);
    h1.print();
    cout<<endl;

    h1.add(2);
    h1.print();
    cout<<endl;

    h1.add(3);
    h1.print();
    cout<<endl;

    h1.add(4);
    h1.print();
    cout<<endl;

    h1.add(5);
    h1.print();
    cout<<endl;

    h1.add(6);
    
    h1.print();
}