#include<iostream>
using namespace std;
int factorial(int i){
    if (i==0 || i==1)
    {
        return 1;
    }
    return i*factorial(i-1);
    

}
int main(){
    int n;
    cout<<"enter a no.:";
    cin>>n;
    int fact=factorial(n);
    cout<<fact;
    return 0;
}