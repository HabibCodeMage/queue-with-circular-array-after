#pragma once
class circularray
{
private:
	int no_of_elements;
	int values[5];
	int totalsize;
	int f, r;
public:
	circularray() :no_of_elements(0),values{{},{},{},{},{}},totalsize(5),f(0),r(0)
	{}
	bool empty()
	{
		return no_of_elements == 0;
	}
	int size()
	{
		return totalsize;
	}
	void enque(int value)throw(const char*)
	{
		if (no_of_elements == totalsize)
			throw"queue is full";
		values[r] = value;
		r = (r + 1) % totalsize;
		++no_of_elements;
	}
	void deque()  throw(const char*)
	{
		if (empty())
			throw"queue is empty";
		else
		{
			f = (f+ 1) % totalsize;
			--no_of_elements;
		}
	}
	const int&  front() throw(const char*)
	{
		if (empty())
	     	throw"queue is empty";
		return values[f];
	}
};

