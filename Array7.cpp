//Program 7
#include<iostream>
using namespace std;
main()
{
	float a[5],b[5],c[5];
	int i,dou;
	for(i=0;i<5;i++)
	{
		cout<<"Enter 2 Float Values:"<<endl;
		cin>>a[i]>>b[i];
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		dou=c[i]*2;
		cout<<"Sum of Index "<<i<<" = "<<c[i]<<" and Double of it "<<dou<<endl;
		
	}
	system("pause");
}
