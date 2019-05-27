#include "Pimpl.h"
#include <string>
#include <iostream>

namespace Pimpl
{
	//=========== forward class implementation
	class Bar::Foo
	{
		int a = 5;
		std::string s = "Mika";
	public:
		explicit Foo() {}
		~Foo() = default;
		void Print() const
		{
			std::cout << s << ' ' << a << std::endl;
		}

	};

	//======= Pimpl implementation
	Bar::Bar() : foo{ std::make_unique<Foo>() }{}
	Bar::~Bar() = default;
	void Bar::Print() const
	{
		foo->Print();
	}
}
