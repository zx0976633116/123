#include <iostream>
#include <cstdlib>

using namespace std;


void hanoi(int, int, int, int);

int main(void)
{
	int j;
	
	cout<<"�п�J�L�l�ƶq:";
	cin>>j;
	
	hanoi(j,1, 2, 3);
	
	return 0;
}

void hanoi(int n, int p1, int p2, int p3)
{
	if (n==1)
	   cout<<"�L�l�q "<<p1<<" ����"<<p3<<endl;
	else
	{
		hanoi(n-1, p1, p3, p2);
		cout<<"�q�L�l "<<p1<<" ����"<<p3<<endl;
		hanoi(n-1, p2, p1, p3); 
		}    
}
