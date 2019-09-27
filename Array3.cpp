//Program 3
#include<iostream>
using namespace std;
main()
{
	int a[10];
	int sum,pro;
	cout<<"Enter 10 ints:"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	sum=a[1]+a[3]+a[5]+a[7]+a[9];
	pro=a[0]*a[2]*a[4]*a[6]*a[8];
	cout<<"Sum is "<<sum<<endl;
	cout<<"Product is "<<pro<<endl;
	for(int j=0;j<10;j++)
	{
		cout<<a[j]<<endl;
	}
	system("pause");
}
