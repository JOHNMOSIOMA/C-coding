//program of sum of numbers using do while
#include <iostream> 
using namespace std;  
int main()  
{ 
	int num, i=1, sum = 0;  
	do 
	{ 
		sum += i;  
		i++; 
	} 
	while (i <= 10); 
	cout <<"The sum of numbers from 1 to 10 is: " << sum; 
	return 0; 
} 