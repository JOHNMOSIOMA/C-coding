// program of finding area of a circle using function
#include <iostream>
using namespace std;
float circle(int r);//function prototype
int main() {
    int radius;
    float area;
    cout <<"enter the radius"<<endl;
    cin>>radius;
    area=circle(radius);
    cout<<"the area is"<<area<<endl;
    return 0;
}
  float circle(int r){ //function definition
     float area; 
      area=3.142*r*r;
      return area;
}