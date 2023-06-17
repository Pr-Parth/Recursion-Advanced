#include<bits/stdc++.h>
using namespace std;

void printarray(char a[]){
    if(a[0]=='\0'){
        return;
    }
    cout<<a[0];
    printarray(a+1);
}

void revprint(char a[]){
    if(a[0]=='\0'){
        return;
    }
    revprint(a+1);
    cout<<a[0];
    
}

int main(){
    int n;
    cout<<"Enter the length of the character array: ";
    cin>>n;

    char a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    cout<<"Your character array is: ";

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl;

    
    cout<<"Your String is: ";
    printarray(a);

    cout<<endl;

    cout<<"Your Reverse String is: ";
    revprint(a);
    return 0;
}