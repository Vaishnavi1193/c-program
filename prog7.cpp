#include<iostream>
using namespace std;
class employee{
   public:
   	int id;
   	string name;
   	float salary;
   	employee(int id,string name,float salary)
   	{
   		this->id=id;
   		this->name;
   		this->salary=salary;
	   }
	   void display()
	   {
	   	 cout<<id<<" "<<name<<""<<salary<<endl;
       }
};
int main(void) {
	employee e1=employee(101,"sonoo",890000);
    employee e2=employee(102,"nakul",59000);
    e1.display();
    e2.display();
    return 0;
}


	

