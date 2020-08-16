#include<iostream>

using namespace std;

class sum
{
	int a,b,t;
	public:
	void put_data(void);
	void get_data(void);
};
void sum::get_data(void){
	cout<<"enter value";
	cin>>a>>b;
}

void sum::put_data(void)
{
    t=a+b;
	cout<<"Sum"<<t;
}

int main()
{
	sum obj;
	obj.get_data();
	obj.put_data();
	return 0;
}