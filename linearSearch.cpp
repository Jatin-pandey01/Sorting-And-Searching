#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        return true;
    }
    return false;
}
int main(){
    int arr[10]={5,7,-2,10,22,-21,0,5,25,1},key;
    cout<<"Enter search element : ";
    cin>>key;
    bool ans = linearSearch(arr,10,key);
    if(ans)
    cout<<"Yes,key is present"<<endl;
    else
    cout<<"Sorry,key isn't present"<<endl;
    return 0;
}