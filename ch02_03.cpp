#include <iostream>
#include <cstdlib>

using namespace std;
 
int main()
{
	
	short int number1=0300;
	
	int number2=0x33f;
	
	long int number3=-123456789;
	
	unsigned long int number4=978654321;
	
	
	
	
	cout<<"�u���="<<number1<<"�Ҧ��줸��"<<sizeof(number1)<<endl;
	cout<<"���="<<number2<<"�Ҧ��줸��"<<sizeof(number2)<<endl;
	cout<<"�����="<<number3<<"�Ҧ��줸��"<<sizeof(number3)<<endl; 
    cout<<"�L�������="<<number4<<"�Ҧ��줸��"<<sizeof(number4)<<endl; 
	
	return 0;
}	

