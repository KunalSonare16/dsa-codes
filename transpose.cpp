#include<iostream>
using namespace std;

int main(){
    
    int N=4, M=3;
    int mat[N][M]={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };
     cout<<"Original Matrix is -\n";
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
   int Transversemat[M][N];
   for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
         Transversemat[j][i] = mat[i][j];
        }
    }
    cout<<"\nTransposed Matrix is -\n";
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cout<<Transversemat[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}