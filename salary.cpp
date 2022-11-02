//program for finding salary and bonus 
#include <iostream>
using namespace std;
int main() {
	float salary;
	float netBonusAmount=-1;
	int numberYearsWorked;
	cout<<"Enter the salary\n";
	cin>>salary;
	cout<<"Ente the number of years of service: ";
	cin>>numberYearsWorked;
	if(numberYearsWorked>=6 && numberYearsWorked<=10){
		netBonusAmount=0.08*salary;
	}
	else if(numberYearsWorked>10 ){
		netBonusAmount=0.1*salary;
	}
	else{
		netBonusAmount=0.05*salary;
	}
	if(netBonusAmount>0 && salary>0){
		cout<<"The net bonus amount: "<<netBonusAmount<<"\n\n";
	}else{
		cout<<"Wrong data\n\n";
	}
	system("pause");
	return 0;
}
