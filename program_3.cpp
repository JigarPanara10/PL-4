#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		float spi;
		void getdata()
		{
			cout<<"Enter Name ::";
			cin>>name;
			cout<<"Enter The SPI ::";
			cin>>spi;	
		}
};
int main()
{
	cout<<"I am shyam panchasara "<<endl;
	cout<<"En_no    220130318006 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Enter The 10 Student SPI to Find Maximum of Them"<<endl;
	student s[10];
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		s[i].getdata();
	}
	float max=s[0].spi;
	string name=s[0].name;
	for(int i=0;i<2;i++)
	{
		if(s[i].spi > max)
		{
			max=s[i].spi;
			name=s[i].name;
		}
	}
	cout<<"Maximum SPI is ::"<<max<<endl;
	cout<<"Name ::"<<name<<endl;
	return 0;
}
