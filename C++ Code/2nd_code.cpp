#include<iostream>
using namespace std;

int main(){

    int arr[10];

    for(int i=0;i<=9;i++){
        cout<<"Enter element number "<<i+1<<" : ";
        cin>>arr[i];
    }

    for(int i=0;i<=9;i++){
        cout<<arr[i]<<endl;
    }



    return 0;
}