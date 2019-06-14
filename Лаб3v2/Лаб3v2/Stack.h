#pragma once
#ifndef STACK_H
#define STACK_H

#include <vector>
using namespace std;
template <class T>
class Stack
{
private:
	vector<T> v;
public:
	Stack() {};
	~Stack() {};
	bool empty()
	{
		return v.empty(); // если размер стека равен 0, то он пуст
	}

	size_t size()
	{
		return v.size(); // возвращает количество элементов стека
	}

	T top()
	{
		if (v.empty())
		{
			// проверяем на пустоту, так как не имеем право обращаться к верхнему элементу при пустом стеке
			throw - 1; // генерируем исключение типа int
		}

		// если с пустотой проблем нет, просто возвращаем верхний элемент
		return v.back();
	}

	void push(const T& item)
	{
		v.push_back(item); // добавляем в стек новый элемент
	}

	void pop()
	{
		if (v.empty())
		{
			// проверяем на пустоту, нельзя снимать из пустого стека
			throw - 1; // генерируем исключение типа int
		}

		// если с пустотой проблем нет, просто снимаем верхний элемент
		v.pop_back();
	}

	void show()
	{
		if (v.empty())
		{
			// проверяем на пустоту, нельзя снимать из пустого стека
			throw - 1; // генерируем исключение типа int
		}

		for (int i = 0; i < v.size(); i++)
			cout << v[i] << ' ';
		cout << endl;
	}
};
#endif STACK_H

