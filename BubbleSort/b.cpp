#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int a[1000];
	int n, i = 0, j = 0, temp = 0;
	cin>>n;
	
	for(i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	
	for(i = 0; i < n - 1; i++)
	{
		for(j = 0; j < n - i - 1; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
	
	cout<<"sorted array will be:"<< endl;
	
	for(i = 0; i < n; i++)
    {
     	cout<<a[i]<<" ";
	}
	
	return 0;
}
