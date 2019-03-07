#include<iostream>
int result = 0;
int add(int a, int b);
int mul(int a, int b);
int sub(int a, int b);
float division(int a, int b);
using namespace std;
struct sta
{
	int top;
	char *elements;
	int size;
}stack;
class _Stack_
{
	
public:
	_Stack_()
	{
	}
	_Stack_(int size)
	{
		stack.size = size;
		stack.elements = new char[size];
		stack.top = -1;
	}
	bool isEmpty()
	{
		if (stack.top == -1)
			return true;
		return false;
	}
	bool isFull()
	{
		if (stack.top == stack.size - 1)
		{
			return true;
		}
		return false;
	}
	void Push(char x)
	{
		if (stack.top == stack.size - 1)
		{
			cout << "Stack Full";
			return;
		}
		else
		{
			stack.elements[++stack.top] = x;
		}
	}
	char Pop()
	{
		int x = -999;
		if (stack.top == -1)
		{
			cout<<"Stack Empty";
			return x;
		}
		else
		x = stack.elements[stack.top--];
		return x;
	}
	char Peek()
	{
		int x = -999;
		if (stack.top == -1)
		{
			cout<<"Stack Empty";
			return x;
		}
		else
		{
			x = stack.elements[stack.top];
			return x;
		}
	}
	void Display()
	{
		for (int i = 0; i <= stack.top; i++)
		{
			cout << stack.elements[i];
		}
	}
	
	~_Stack_()
	{
		delete (stack.elements);
	}
};
int Precedence(char x)
{
	if (x == '*' || x == '/')
		return  3;
	else if (x == '+' || x == '-')
		return 2;
	else
		return 1;
}

int main()
{
	char *input_string;
	int len;
	cout << "enter the size of the string\n";
	cin >> len;
	if (len > 0)
	{
		int i = 0, flag = 0;
		cout << "length is valid\n";
		input_string = new char[len + 1];
		cout << "Enter the input string";
		cin >> input_string;
		while (input_string[i] != '\0')
		{

			if (!isdigit(input_string[i]) && input_string[i] == '+' && input_string[i] == '-' &&input_string[i] == '*'&&  input_string[i] == '/')
			{
				cout << "reenter string....it should contain only integers\n";
				flag = 1;
				break;
			}
			else
				i++;
		}
		if (flag == 0)
		{
			cout << "string is valid\n" << input_string;
			char result[100];
			_Stack_ s(len); //creating object
			char ch;
			int k = 0;
			//infix to postfix
			for (i = 0; i < strlen(input_string); i++)
			{
				ch = input_string[i];
				if (isdigit(ch) || isalpha(ch))
				{
					result[k++] = ch;
				}
				else if (ch == '(')

					s.Push(ch);
				else if (ch == ')')
				{
					while (s.Peek() != '(')
						result[k++] = s.Pop();
					s.Pop();
				}
				else if (s.isEmpty())
					s.Push(ch);
				else if (Precedence(ch) > Precedence(s.Peek()))
					s.Push(ch);
				else
				{
					while (Precedence(ch) <= Precedence(s.Peek()))
						result[k++] = s.Pop();
					s.Push(ch);
				}
			}
			while (!s.isEmpty())
				result[k++] = s.Pop();
			result[k] = '\0';
			cout << "String - " << result << endl;
			_Stack_ s1(10);   //postfix evaluation
			for (i = 0; i < strlen(result); i++)
			{
				char ch;
				ch = result[i];
				if (isdigit(ch) && !s1.isFull())
				{
					s1.Push(ch - '0');
				}
				else
				{
					int a = s1.Pop();
					int b = s1.Pop();
					switch (ch)
					{
					case '+': s1.Push(add(a, b));
						break;
					case '-': s1.Push(sub(b, a));
						break;
					case '*': s1.Push(mul(b, a));
						break;
					case '/': s1.Push(division(b, a));
						break;
					}
				}
				cout << "Result is " << s1.Pop();
				getchar();
			}
		}
	}
	else
		cout << "invalid...reenter length\n";
}