//Program 4
#include<iostream>
using namespace std;
main()
{
	int a[6],b[6],sum;
	for(int i=0;i<6;i++)
	{
		cout<<"Enter 2 Ints:"<<endl;
		cin>>a[i]>>b[i];
	}
	for(int j=0;j<6;j++)
	{
		sum=a[j]+b[j];
		cout<<"Sum of Index: "<<j<<" is "<<sum<<endl;
	}

	system("pause");
}
