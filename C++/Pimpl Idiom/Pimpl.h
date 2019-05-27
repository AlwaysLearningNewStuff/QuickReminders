#pragma once
#include <memory>

namespace Pimpl
{
	class Bar
	{
	public:

		explicit Bar();
		~Bar();

		void Print() const;

	private:
		class Foo;
		std::unique_ptr<Foo> foo;
	};
}
