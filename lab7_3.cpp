#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter your age: ";
	cin>> a; // a = age
	if ( a <= 20)
	{
		cout<<"Enter your height: ";
		cin>> b; // b = height
		if ( b < 160 )
		{
			cout<< "Your status = UNFRIEND";
		}
		else if ( b < 175 )
		{
			cout<< "Your status = FRIEND";
		}
		else 
		{
			
				cout<<"Enter your property: ";
				cin>> c; // c = your property
				if ( c > 69000000 )
				{
					cout<<"Your status = MARRIED";
				}
				else
				{
					cout<<"Your status = ONE-NIGHT-STAND";
				}
		}
	}
		else
		{
			if ( a < 30 )
			{
				
				cout<<"Enter your property: ";
				cin>> c; // c = your property
				if ( c > 10000000 )
				{
					cout<<"Your status = BEST FRIEND";
				}
				else
				{
					cout<< "Your status = UNFRIEND";
				}
			}
			else 
			{
				cout<< "Your status = UNFRIEND";
			}
		}
	
	
}
