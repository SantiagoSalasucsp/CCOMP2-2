#include <iostream>
	
using namespace std;
	
void suma(int(*p)[3][2]){
	
	    int *c=**(p+2);
	    int *a=**p;
	    int *b=**(p+1);
	    int *f=c;
	    int *k=b;
	    while(!(a==k) && !(b==f)){
	        *c=*a+*b;
	
	        c++;
	        a++;
	        b++;
	    }
	
	}
	
	
	void multi(int(*p)[3][3]){
	
	    int *a=**p;
	    int *b=*(*(p+1));
	    int *c=*(*(p+2));
	
	    cout<<*a<<*b<<*c<<endl;
	
	    int fi1=0;
	    int co1=0;
	    int condi=0;
	    int condi1=0;
	    
	    while(condi1<3){
	      while(condi<3){
	          
	          int fi=fi1;
	          int co=co1;
	          
	          int x=0;
	          
	              fi=0;
	              co=0;
	          while(x<3){
	              int*A=a+fi;
	              
	              int*B=(b+co*3);
	              *c+=(*A) * (*B);
	              x++;
	              fi++;
	              co++;
	  
	          }
	          c++;
	  
	          //cout<<"el contenido de C es: "<<*c<<endl;
	          condi++;
	          co1++;
	          b++;
	  
	  
	      }
	      condi=0;
	      condi1++;
          cout<<condi1<<endl;
	      fi1++;
	      co1=0;
	      a++;
	      b=*(*(p+1));
	    }


        for(int *q=**(p);q<**(p+3);q++){
	    cout<<*q<<" ";
	    }
	
	
	}
	
	
int main(){
	    
	//int A[3][3][2]={1,2,3,4,5,6,1,2,3,4,5,6};
	int B[3][3][3]={1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,0,0,0,0,0,0,0,0,0};
	    
	//suma(A);
	
	/*for(int *p=**(A+2);p<**(A+3);p++){
	    cout<<*p<<" ";
	}*/
	
	cout<<endl;
	multi(B);

    

	
	
}