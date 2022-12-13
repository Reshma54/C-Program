/* Overriding 
*/

#include<iostream>
using namespace std;
class A
{
	public:
		void foo()
		{
			cout <<"I am in A foo()"<< endl;
		}
};

class B:public A
{
	public:
		void foo()
		{
			A::foo();
			cout<<"I am B foo()"<<endl;
			
		}
};

int main()
{
	B b;
	b.A::foo();  //call A foo  
	b.foo();       //call B foo
	return 0;
}

