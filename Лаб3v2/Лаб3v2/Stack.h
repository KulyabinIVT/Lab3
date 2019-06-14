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
		return v.empty(); // ���� ������ ����� ����� 0, �� �� ����
	}

	size_t size()
	{
		return v.size(); // ���������� ���������� ��������� �����
	}

	T top()
	{
		if (v.empty())
		{
			// ��������� �� �������, ��� ��� �� ����� ����� ���������� � �������� �������� ��� ������ �����
			throw - 1; // ���������� ���������� ���� int
		}

		// ���� � �������� ������� ���, ������ ���������� ������� �������
		return v.back();
	}

	void push(const T& item)
	{
		v.push_back(item); // ��������� � ���� ����� �������
	}

	void pop()
	{
		if (v.empty())
		{
			// ��������� �� �������, ������ ������� �� ������� �����
			throw - 1; // ���������� ���������� ���� int
		}

		// ���� � �������� ������� ���, ������ ������� ������� �������
		v.pop_back();
	}

	void show()
	{
		if (v.empty())
		{
			// ��������� �� �������, ������ ������� �� ������� �����
			throw - 1; // ���������� ���������� ���� int
		}

		for (int i = 0; i < v.size(); i++)
			cout << v[i] << ' ';
		cout << endl;
	}
};
#endif STACK_H

