#include <iostream>
using namespace std;

int main()
{
	int num[5];
	int *ptr =num; 
	
	cout<<"Enter any 5 numbers you want"<< endl;
	cin>>num[0]>>num[1]>>num[2]>>num[3]>>num[4];
	
	cout<<"The number entered is: "<< endl;
	for(int i = 0;i < 5; i++)
	{
		cout<< *ptr << endl;
		ptr++;
	} 

}
