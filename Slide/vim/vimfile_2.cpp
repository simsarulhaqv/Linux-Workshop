//Stack using array

#include <iostream>

using namespace std;

struct Stack
{
	int A[100];
	int size; //Size of the array
	int s; //Maximum size for the array

	Stack() //Constructor of the struct
	{
		size=0;
		s=0;
	}
	Stack(int as) //Constructor of the struct
	{
		s=as;
		size=0;
	}

	/*This line has an error. Remove the A from it*/
	int pushA(int a) //Function to push into Stack
	{
		if(size==s)
		{
			cout<<"OVERFLOW\n";
			return 0;
		}
		A[size]=a;
		size++;
		return 1;
	}

	int pop() //Function to pop out of the stack
	{
		if(size==0) EXTRA /*Remove extra word from here*/
		{
			//cout<<"EMPTY\n";
			return 0;
		}
		size--;
		cout << A[size] <<'\n';
		return 1;
	}

	int peek() //Function to print the top element of the stack
	{
		if(size==0)
		{
			//cout<<"EMPTY\n";
			return -1;
		}
		else UNNECESSARY TEXT /*delete both the words*/
			return A[size-1];
	}

	int show() //Function to show the contents of the stack
	{
		if(size==0)
			return 0;
		for(int i=size-1;i>=0;i--)
			cout<<A[i]<<' ';
		cout<<'\n';
		return 1;
	}
};


int main()
{
	int s;
	cin>>s;

	Stack S(s);

	int a,n;
	THIS IS AN EXTRA LINE /*Delete the extra line*/
	while(1)
	{
		cin >> a;
		//Options
		//1 -> Push
		//2 -> Pop
		//3 -> Peek
		//4 -> Display the Stack
		//0 -> Exit
		switch(a)
		{
			case 0:
				return 0;

			case 1:
				cin >> n;
				S.push(n);
				break;

			case 2:
				if(!S.pop())
					cout<<"EMPTY\n";
				break;

			case 3:
			{	int p = S.peek();
				if(p!=-1)
					cout << p << '\n';
				else
					cout << "EMPTY\n";
			}
			break;

			case 4:
				if(!S.show())
					cout << "EMPTY\n";
				break;

			default:
				cout<<"Wrong Choice\n";
		}
	}
}
