#include<iostream>
const int N=5, M=5;
void print(int M[][N],int m,int n);

int main(void){

  //declarar las matrices
  int A[M][N]={{0}};
  int AT[N][M]={{0}};
  int ii, jj;

  for(ii=0;ii<M;++ii){
    for(jj=0;jj<N;++jj){
      A[ii][jj]=ii*N+jj;
    }
  }

  std::cout<<"#Original Matrix: \n";
  print(A,M,N);
  
  //procesarla:transponerla

  for(ii=0;ii<M;++ii){
    for(jj=0;jj<N;++jj){
      AT[jj][ii]=ii*N+jj;
    }
  }
  
  
  //imprimirla

   std::cout<<"#Transposed  Matrix: \n";
   print(A,M,N)
   return 0;
  //Solamente funciona para arreglos cuadrados
}

void print(int M[][N],int m,int n){
  for(ii=0;ii<m;++ii){
    for(jj=0;jj<n;++jj){
      std::cout<<A[ii][jj]<<" ";
    }
    std::cout<<"\n";
  }

  
}
