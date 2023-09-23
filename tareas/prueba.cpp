#include <iostream>
using namespace std;

void traspuesta(int (*p)[4],int n) 
{
  for(int i=0;i<n;i++)
  {
    int c = i;
    while(c+1<=n-1)
    {
      int aux = *(*(p+i)+c+1);
      *(*(p+i)+c+1) = *(*(p+c+1)+i);
      *(*(p+c+1)+i) = aux;
      c++;
    }
  }
}


int main() {
    int A[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    traspuesta(A,4);
    
}