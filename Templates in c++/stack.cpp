#include<iostream>
using namespace std;
template<class T>
class stack
{
	T a[10];
	int top;
	public:
		stack();
		void push(T p);   // just the mem fun declaration
		void pop();
		void display();
};
template<class T>
stack<T> :: stack()
{
	top=-1;
}

template<class T>
void stack<T>::push(T p)
{
	top++;
	a[top]=p;
	cout<<"\nElement pushed : "<<p;
}

template<class T>
void stack<T>::pop()
{
	T q = a[top];
	cout<<"\nElement popped : "<<q;
	top--;
}

template<class T>
void stack<T>::display()
{
	cout<<"\nStack elements are as follows : ";
	for(int j=0;j<=top;j++)
	{
		cout<<a[j]<<" ";
	}
	
}
int main()
{
	stack <int> s1;
	s1.push(10);
	s1.push(20);
	
	s1.display(); 
	s1.pop();
	s1.display(); 
	
	cout<<"\n\n-------------------------";
	
	stack <float> s2;
	s2.push(1.1);
	s2.push(1.2);
	
	s2.display(); 
	s2.pop();
	s2.display(); 
	
	cout<<"\n\n-------------------------";
	
	stack <char> s3;
	s3.push('a');
	s3.push('b');
	
	s3.display(); 
	s3.pop();
	s3.display();
	
	return 0;
}
