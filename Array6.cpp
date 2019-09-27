//Program 6
#include<iostream>
using namespace std;
main()
{
	char a[10];
	int i;
	cout<<"Enter 10 Characters:"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
		{
			cout<<"..."<<a[i]<<" you Scored"<<endl;
		}
		else
		{
			cout<<"/Consonant"<<endl;
		}
	}
	
	system("pause");
}
