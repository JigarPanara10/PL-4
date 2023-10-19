#include<iostream>
using namespace std;
class demo
{
	private :
		static int count;
		
	public:
		
		static int increment()
		{
			count++;
		}
		
};
int demo :: count=0;

int main()
{
	demo d;
	int call=d.increment();
	
	cout<<"count ::"<<call;
	
	
	return 0;
}


