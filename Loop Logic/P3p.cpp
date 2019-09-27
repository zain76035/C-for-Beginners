#include<iostream>
using namespace std;
main()
{
	int a,b,sum;
	cout<<"Enter two Ints: ";
	cin>>a>>b;
	sum=a+b;
	for(int i=0;i<=10;i++)
	{
		cout<<sum<<endl;
		sum++;
	}
	system("pause");
}
