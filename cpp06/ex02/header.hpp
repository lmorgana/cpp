#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>

class Base
{
public:
	virtual ~Base() {};
};

class A : public Base
{
public:
	~A() {};
};

class B : public Base
{
public:
	~B() {};
};

class C : public Base
{
public:
	~C() {};
};

#endif
