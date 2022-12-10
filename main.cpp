#include<iostream>
using  namespace std;

class Matrix
{
	size_t size;//размер строки в байтах 

	int* str;//адрес строки в динамической памяти 

	int numstr;//число строк

public:
	size_t get_size()const
	{
		return size;
	}

	size_t get_numstr()const
	{
		return numstr;
	}

	const int* get_str()const
	{
		return str;
	}

	int* get_str()
	{
		return str;
	}





};