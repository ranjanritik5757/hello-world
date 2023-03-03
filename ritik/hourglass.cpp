#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==n || (i+j==n+1) || i==j){
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }cout<<endl;
    }
    return 0 ;
}