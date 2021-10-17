/*
    Given a matrix, print its spiral traversal;
*/

#include<iostream>
using namespace std;

class solution{
    public:
        int** make_mat(int r,int c);

        void disp_mat(int** mat,int r,int c);

        void spiral_trav(int** mat,int r,int c);
};

void solution::spiral_trav(int** mat,int r,int c){
    int rs=0,re=r-1,cs=0,ce=c-1;
    while(rs<=re && cs<=ce){

        for(int i=cs;i<=ce;++i){
            cout<<mat[rs][i]<<" ";
        }
        rs++;
        for(int i=rs;i<=re;++i){
            cout<<mat[i][ce]<<" ";
        }
        ce--;
        if(rs<=re){
            for(int i=ce;i>=cs;i--){
                cout<<mat[re][i]<<" ";
            }
            re--;
        }
        if(cs<=ce){
            for(int i=re;i>=rs;i--){
                cout<<mat[i][cs]<<" ";
            }
            cs++;
        }
    }
    return ;
}

void solution::disp_mat(int** mat,int r,int c){
    cout<<"Elements of matrix are:\n";
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int** solution::make_mat(int r,int c){
    int** mat=new int* [r]; 
    cout<<"Enter elements: ";
    for(int i=0;i<r;++i){
        mat[i]=new int[c];
        for(int j=0;j<c;++j){
            cin>>mat[i][j];
        }
    }
    return mat;
}

int main(){
    int r,c;
    cout<<"Enter number of rows and columns: ";
    cin>>r>>c;
    solution sl;

    int** mat=sl.make_mat(r,c);

    sl.spiral_trav(mat,r,c);

    return 0;
}