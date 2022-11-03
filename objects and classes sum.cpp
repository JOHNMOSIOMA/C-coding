// class of addition
#include <iostream>
using namespace std;
class addition{
public:
int a;
int b;
int c;
int sum(){
    return(a+b+c);
}
int product(){
    return (a*b*c);
}
};
int main() {
  addition add1;
  int s,p,r,Add,multi;
  s = add1.a=22;
  p = add1.b=30;
  r = add1.c=50;
  Add=add1.sum();
  multi=add1.product();
  
    cout << "sum is:"<<Add<<endl;
    cout<< "product is:"<<multi<<endl;
    return 0;
}