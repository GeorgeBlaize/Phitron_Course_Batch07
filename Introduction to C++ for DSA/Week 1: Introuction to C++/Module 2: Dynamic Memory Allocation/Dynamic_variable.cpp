#include<bits/stdc++.h>
using namespace std;
int* p;
int fun()
{
    
    int x=10;
    p=&x;
    cout<<"Fun -> "<< *p<<endl;
    return ;
}
int main(){
     
    int y=fun();
    int * a= new int;
    cout<<"Main -> " << *p<<endl;

    return 0;
}