#include <iostream>
using namespace std;
//using template class
template<class T>
class repair
{
	public:
		T expense;
		//virtual function
		virtual void calculate();
};
template<class T> 
//inheriting a class
class phone_repair_screen : public repair<T>{
		T l,b,price;
        public:
		// parameterised constructor
			phone_repair_screen(T x,T y)
			{
				l=x
                b=y;
			}
			void calculate()
			{
				price = 0.1*x + y*100;
				phone_repair_screen<T>expense=price;
				cout<<"Price of repairing the screen is :"<<expense<<endl;
			}
};

template<class T>
class mother_board_repair:public repair<T>{
		T m;
		public:
			mother_board_repair(T a)
			{
				m = a;
			}
			//overloading operator using friend function
			friend void operator++(mother_board_repair);
			void calculate()
			{
				repair<T>expense;
				expense = m*1000.0;
				cout<<"Price of motherboard :"<<expense<<endl;
			}
};
template<class T>
class water_dmg : public mother_board_repair<T>{
    public:
    water_dmg(T a,T a1,T a2){
        l = a1;
        b = a2;
        m = a;
    }
    void calculate(){
        repair<T>expense;
        expense = m*1000 + 0.1*l + 100*b;
        cout<<"the expenses are : "<< expense <<endl;
    }
};
//main method			
int main()
{
	int i;
	//creating base class pointer
	repair<double>*p;
	//creating objects of derived classes
	phone_repair_screen<double>b(15000,4);
	phone_repair_screen<double>c(18230.56f,5.8f);
	mother_board_repair<double>d(5.0);
	p=&b;
	//calling functions
	p->calculate();
	p=&c;
	p->calculate();
	p=&d;
	p->calculate();
	return 0;
}
