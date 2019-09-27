//Program 5
#include<iostream>
using namespace std;
main()
{
	int a[5],b[5],pro,dou,i;
	cout<<"Enter 5 Ints:"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter 5 Ints:"<<endl;
		for(i=0;i<5;i++)
	{
		cin>>b[i];
	}
		for(i=0;i<5;i++)
	{
		pro=a[i]*b[i];
		dou=pro*2;
		cout<<"Product of Index = "<<i<<"  "<<pro<<" and double "<<dou<<endl;
		
	}
	system("pause");
}
