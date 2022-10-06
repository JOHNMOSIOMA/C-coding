#include<iostream>
using namespace std;

int main()
{
int i, sum=0;
for(i=1;i<=10;i=i++){
    cout <<i++<<"";
    sum=sum+i;
   } 
cout<<"sum of first 10 numbers"<<sum;
    return 0;
}