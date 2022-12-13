/* Desing the classes using following :
                Account
                
                					inherits from
                
                Saving account
Write a function of accept and display for n object.
*/

#include<iostream>
using namespace std;

class Account
{
	int acc_no,;
	float acc_balance;
	char acc_name[50];
	
	public :
		void accept()
		{
			cout <<"Enter account no";
			cin>>acc_no;
			
			cout<<"Enter account holder name";
			cin.getline(name,50);
			
			cout<<"Enter account balance";
			cin>>bal;
		}
		void display()
		{
			cout<<"Accouont no" << acc_no<<endl
				<<"Account Holder Name : "<<acc_name<<endl
				<<"Account Balance : " <<acc_balance<<endl;
				
		}
};

class saving_account:public account
{
	float intrest_rate;
	public:
		void accept()
		{
			account::accept();
			cout<<"enter intrest rate";
			cin>>intrest_rate;
			
				
		}
		void display()
		{
			account::display();
			cout<<"Saving account intrest rate"
		}
};

int main()
{
	SavingAccount sa[100];
	int n;
	cout<<"enter no od account";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		sa[i].accept()
		
	}
}
