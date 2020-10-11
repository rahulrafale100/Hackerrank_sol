//created by Rahul Kumar Maurya
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int c=0;
    for(int i=0;i<n-1;i++){
        if(a[i]%2!=0){
            a[i]=a[i]+1;
            a[i+1]+=1;
            c+=2;
        }
    }
    if(a[n-1]%2==0)
    cout<<c;
    else
    cout<<"NO";
}
