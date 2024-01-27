#include <iostream>
#include <string>
using namespace std;

class cricketer
{	public :
	string name;
	
	 void cricket(string name, int age)
	 {
	 
	cout<<endl<<"Enter name : ";
	getline(cin, name);
	cout<<"Enter age : ";
	cin>>age;
	
	cout<<endl<<name<<endl<<age<<endl; }
	
	void bowler(int mat, int run, int overs, int eco)
	{
		
		cout<<endl<<"Enter total matches : ";
		cin>>mat;
		cout<<endl<<"Enter runs given : ";
		cin>>run;
		cout<<endl<<"Enter total overs : ";
		cin>>overs;
		eco=run/overs;
		cout<<"\nEconommy is : "<<eco<<endl;
	}
		void batsman(int ma, int ru, int over, int avg)
	{
		
		cout<<endl<<"Enter total matches : ";
		cin>>ma;
		cout<<endl<<"Enter runs scored : ";
		cin>>ru;
		
		avg=ru/ma;
		cout<<"\nAverage is : "<<avg<<endl;
	}
		void all(int m, int rbat, int rbow, int ove, int ec, int av)
	{
		
		cout<<endl<<"Enter total matches : ";
		cin>>m;
		cout<<endl<<"Enter runs scored : ";
		cin>>rbat;
		cout<<endl<<"Enter runs given : ";
		cin>>rbow;
		cout<<endl<<"Enter total overs : ";
		cin>>ove;
		
		ec=rbow/ove;
		av=rbat/m;
		cout<<"\nEconomy is : "<<ec<<endl;	
		cout<<"\nAverage is : "<<av<<endl;
	
	}
	
	
};


int main()
{		string name;
	int age;
int mat, run, overs, eco;
	int ma, ru, over, avg;
		int m, rbat, rbow, ove, ec, av;
	cricketer start;
	start.cricket(name, age);
	int choice;
	cout<<endl<<"Enter role type : "<<endl<<"1) Bowler"<<endl<<"2) Batsman"<<endl<<"3) All Rounder"<<endl;
	cin>>choice;
	
	if(choice==1)
	{
		start.bowler(mat, run, overs, eco);
		}
		else if(choice==2)
	{
		start.batsman(ma, ru, over, avg);
		}	
		else if(choice==3)
	{
		start.all(m, rbat, rbow, ove, ec, av);
		} 

}