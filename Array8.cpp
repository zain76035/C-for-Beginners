//Program 8
#include<iostream>
#include<string>
using namespace std;
main()
{
	string 
	id[5]={"zain76035","usman360","taimoor96","sabeeh2","hamza23"},
	pass[5]={"zain","usman","taimoor","sabeeh","hamza"},
	email,
	password;	
	cout<<"............Register Yourself............"<<endl<<endl<<endl;	
	for(int i=0;i<5;i++)
	{
		cout<<"Email: ";
		cin>>email;
		cout<<"Password: ";
		cin>>password;
		cout<<endl;
	if(email==id[0] && password==pass[0] || email==id[1] && password==pass[1] || email==id[2] && password==pass[2] || email==id[3] && password==pass[3] || email==id[4] && password==pass[4])
	{
		cout<<"////////Session Created."<<endl<<endl;
	}
	else
	{
		cout<<"\\\\\\\Login failed."<<endl<<endl;
	}	
	}
	

	
	system("pause");
}

