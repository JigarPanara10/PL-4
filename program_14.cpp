#include<iostream>
using namespace std;
class area{
	int length,breath;
	public:
		area()
		{
			length=20;
			breath=30;
		}
		void display()
		{
			cout<<"Area of reatangle : "<<length*breath<<endl;
		}	
		~area(){
		cout<<"Destructor called";}
};
int main()
{
	cout<<"I am shyam panchasara "<<endl;
	cout<<"En_no    220130318006 "<<endl;
	cout<<"---------------------"<<endl;
	area a1;
	a1.display();
}

