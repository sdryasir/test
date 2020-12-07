#include<iostream>

using namespace std;

class Human{
	public:
		virtual void show() = 0;
};
class Student : public Human{
	public:
		void show()
		{
			cout<<"I am show from Student";
		}
};

int main()
{
	Student s;
	Human *h = &s;
	
	s.show();
	h->show();
}
