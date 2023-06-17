#include<bits/stdc++.h>
using namespace std;

int Length(char a[]){
    if(a[0]=='\0'){
    return 0;
    }
    int smallLength = Length(a+1);
    return 1+ smallLength;
}

int main(){
    char a[100];
    cin>>a;

    int l = Length(a);
    cout<<l<<endl;
    return 0;
}