// Лаб3v2.cpp: определяет точку входа для консольного приложения.
////Вариант 6: создать шаблон для класса Stack, реализованный с помощью класса std::vector

#include "stdafx.h"
#include "Stack.h"
#include "Windows.h"
#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Работа со стеком типа int." << endl;
	try
	{
		Stack<int> mystack; // создаем стек

							  // добавляем 5 элементов
		mystack.push(34);
		mystack.push(21);
		mystack.push(11);
		mystack.push(49);
		mystack.push(55);
		cout << "Стек типа int: ";
		mystack.show();
		// вынимаем 3 элемента
		mystack.pop();
		mystack.pop();
		mystack.pop();

		// из 5 элементов сняли 3 следовательно осталось 2
		cout << "Стек типа int после удаления элементов: ";
		mystack.show();
		cout << "В стеке " << mystack.size() << " элемента(ов)." << endl;
	}
	catch (int a)
	{
		cout << "Стек пуст!" << endl;
	}

	cout << endl;
	cout << "Проверка работы исключений на примере стека типа int." << endl;
	try
	{
		Stack<int> mystack2; // создаем стек

							   // добавляем 3 элемента
		mystack2.push(4);
		mystack2.push(8);
		mystack2.push(11);

		// вынимаем 5 элементов
		mystack2.pop();
		mystack2.pop();
		mystack2.pop();
		mystack2.pop(); // на этом шаге сгенерируется исключение так как стек уже пуст
		mystack2.pop();
	}
	catch (int a)
	{
		cout << "Стек пуст!" << endl;
	}
	///////////////////////
	cout << endl;
	cout << "Стек типа string." << endl;
	try
	{

		Stack<string> mystack3;
		mystack3.push("первый");
		mystack3.push("второй");
		mystack3.push("третий");
		mystack3.push("четвертый");
		mystack3.push("пятый");

		cout << "Cтек типа string: " << endl;
		while (!mystack3.empty())
		{
			string top = mystack3.top();
			for (int i = 0; i < top.size(); ++i)
			{
				cout << top[i];
			}
			cout << ' ';
			mystack3.pop();
		}
		cout << endl;


		// генерируем исключение
		// mystack.pop();
		// mystack.pop();

	}
	catch (int a)
	{
		cout << "Стек пуст!" << endl;
	}
	////////////////////////
	cout << endl;
	
	cout << "Стек типа double." << endl;
	try
	{

		Stack<double> mystack4;
		mystack4.push(5.74);
		mystack4.push(6.36);
		mystack4.push(7.24);
		mystack4.push(8.12);
		mystack4.push(9.99);

		cout << "Стек содержит: " << endl;
		while (!mystack4.empty())
		{
			cout << mystack4.top() << " ";
			mystack4.pop();
		}
		cout << endl;

		// генерируем исключение
		//  mystack.pop();
		//  mystack.pop();
	}
	catch (int a)
	{
		cout << "Стек пуст!" << endl;
		system("pause");
	}
	system("pause");
	return 0;
}

