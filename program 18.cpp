#include<iostream>
using namespace std;
const float pi=3.14;
class overload{
	private:
		int a,h,l,r,w,h1;
	public:
		void getdata(int a)
		{
			cout<<"Volume of a cube : "<<a*a*a;
		}
		// volume of cylinder = pi*r*r*h;
		// ||    ||  recatngular = l*w*h1;
		void getdata(int r,int h)
		{
			cout<<"\n Volme of a cylinder : "<<pi*r*r*h;
		}
		void getdata(int l,int w,int h1)
		{
			cout<<"\n Volume of a Rectangular  : "<<l*w*h1;
		}
};
int main()
{
	overload  o1;
	o1.getdata(5);
	o1.getdata(3,4);
	o1.getdata(3,4,5);
	return 0;
}
