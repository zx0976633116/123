#include <iostream>
#include <cstdlib>

using namespace std;


void hanoi(int, int, int, int);

int main(void)
{
	int j;
	
	cout<<"請輸入盤子數量:";
	cin>>j;
	
	hanoi(j,1, 2, 3);
	
	return 0;
}

void hanoi(int n, int p1, int p2, int p3)
{
	if (n==1)
	   cout<<"盤子從 "<<p1<<" 移到"<<p3<<endl;
	else
	{
		hanoi(n-1, p1, p3, p2);
		cout<<"從盤子 "<<p1<<" 移到"<<p3<<endl;
		hanoi(n-1, p2, p1, p3); 
		}    
}

請輸入盤子數量:5
盤子從 1 移到3
從盤子 1 移到2
盤子從 3 移到2
從盤子 1 移到3
盤子從 2 移到1
從盤子 2 移到3
盤子從 1 移到3
從盤子 1 移到2
盤子從 3 移到2
從盤子 3 移到1
盤子從 2 移到1
從盤子 3 移到2
盤子從 1 移到3
從盤子 1 移到2
盤子從 3 移到2
從盤子 1 移到3
盤子從 2 移到1
從盤子 2 移到3
盤子從 1 移到3
從盤子 2 移到1
盤子從 3 移到2
從盤子 3 移到1
盤子從 2 移到1
從盤子 2 移到3
盤子從 1 移到3
從盤子 1 移到2
盤子從 3 移到2
從盤子 1 移到3
盤子從 2 移到1
從盤子 2 移到3
盤子從 1 移到3
