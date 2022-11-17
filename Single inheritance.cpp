#include<iostream>
using namespace std;
//base class
class father {
 public:
void land(){
cout <<"I have land!"<<endl;
}
void car(){
cout<<"I own car"<<endl;
}
};
//derived class
class son:public father{
public:
void house(){
cout <<"I have house"<<endl;
}
};
int main()
{
// create object of son
son son1;
//calling members of the base class
son1.land();
son1.car();
//calling members of derived class
son1.house();

    cout << "son inheritance"<<endl;
    return 0;
}