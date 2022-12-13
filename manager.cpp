/* Desing a base class person(name,addres,phone no).Derive a class employe(eno,e-name)from person.
Derive a class manager(designation,department,basic-salary)from employee,
Write a menu driven program to
i) Accept all details of n menagers
ii) Display  manager having highest saraly
*/
#include<iostream>
using namespace std;

class person
{
	char name[50],address[100],phoneno[20];
	public :
		void accept_person()
		{
			cout <<"Enter the first name : ";
			cin >> name;
			
			cout << "Enter the address : ";
			
			cin.ignore();
			cin.getline(address,100);
			cout <<"Enter the phone no : ";
			
			cin >> phoneno;
		}
		
	void dispaly_person()
	{
		cout <<"First Name : "<<name <<endl
				<<"Address : "<<address<<endl
				<<"Phone number : "<<phoneno << endl;
	}
	
	
};
class employee :public person
{
	int eno;
	char ename[50];
	public :
		void accept_employee()
		{
			cout <<"Enter the employee no : ";
			cin >> eno;
			
			cout << "Enter last name : ";
			cin>>ename;
		}
		
		void display_employee()
		{
			cout <<"Employee No : "<<eno <<endl
			      <<"Last Name : " <<ename <<endl;
		}
};

class manager : public employee
{
	char desgn[50],department[50];
	float salary;
	public:
		
		void accept_manager()
		{
			cout <<"Enter designation  : ";
			cin>>desgn;
			
			cout <<"Enter departmant : ";
			cin>>department;
			cout<<"Enter salary : ";
			cin>>salary;
			
		}
		void display_manager()
		{
			cout <<"Designation : "<<desgn<<endl
			     <<"Department : "<<department<<endl
			     <<"salary : "<<salary<<endl<<endl;
		}
		float get_salary(){
			return salary;
		}
};

int main()

manager m[600];
	int ch,n;
	
	do{
		cout<<"1.Accept"<<endl
		    <<"2.manager with highest salary"<<endl
		    <<"3.exit"<< endl;
		    <<"Enter your choice(1-3)" << endl;
		    
		    cin>> ch;
		    
		    switch (ch)
		    {
		    	case 1:
		    		cout<<"Enter no .of managers";
		    		cin>>n;
		    		for(int i=0;i<n;i++)
		    		{
		    			m[i].accept_manager();
					}
					break;
					
				case 2:
					float max=-99999;
					for(int i=0;i<n;i++)
					{
						if(m[i].get_salary() > max)
						max=m[i].get_salary();
					}
					for(int i=0;i<n;i++)
					{
						if(m[i].get_salary() == max)
						m[i].display_manager();
						
					}
					break;
			}
			
			
	} while(ch!=3);
	
{
	manager m;   //Total memory allow person,manager,employee
	
	m.accept_person();
	m.accept_employee();
	m.accept_manager();
	
	m.dispaly_person();
	m.display_employee();
	m.display_manager();
	
	
	return 0;
	
}
