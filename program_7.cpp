
#include<iostream>
using namespace std;
class add
{
	int a,b;
	friend void getdata(add &n);
	public :		
	void putdata()
	{
		cout<<"Sum of A + B is ::"<<a+b;
	}
};
void getdata(add &n)
{
	cout<<"Enter A ::";
	cin>>n.a;
	cout<<"Enter B ::";
	cin>>n.b;
}
int main()
{
	cout<<"I am shyam panchasara "<<endl;
	cout<<"En_no    220130318006 "<<endl;
	cout<<"---------------------"<<endl;
	add n;
	getdata(n);
	n.putdata();
	return 0;
}

