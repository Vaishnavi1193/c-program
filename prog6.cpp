#include<iostream>
using namespace std;
class employee
{
  public:
    employee()
    {
       cout<<"construct invoked"<<endl;
	}
	~employee()
	{
	   cout<<"destructor invoked"<<endl;
	}
};
int main(void)
{
	employee e1;
	employee e2;
	return 0;
}
