#include "Span.hpp"

int main()
{
	std::cout << "\033[33mTest from subject\033[0m" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp.longestSpan() << std::endl;

	std::cout << "\033[33mTest Span(10000)\033[0m" << std::endl;
	Span sp2 = Span(10000);
	sp2.addNumber(1, 1000);
	sp2.addNumber(10000, 100);
	sp2.addNumber(45, 5000);
	sp2.addNumber(980, 1000);
	sp2.addNumber(350, 1000);
	sp2.addNumber(9500, 1000);
	std::cout << "Shortest: " << sp2.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp2.longestSpan() << std::endl;

	std::cout << "\033[33mTest Span(2147483647)\033[0m" << std::endl;
	Span sp3 = Span(2147483647);
	sp3.addNumber(1, 1000);
	sp3.addNumber(1001200, 100);
	sp3.addNumber(45, 5000);
	sp3.addNumber(980, 100000);
	sp3.addNumber(350, 1000);
	sp3.addNumber(2147483647, 1000);
	std::cout << "Shortest: " << sp3.shortestSpan() << std::endl;
	std::cout << "Longest: " << sp3.longestSpan() << std::endl;

	std::cout << "\033[33mTest errors\033[0m" << std::endl;

	try
	{
		Span sp4 = Span(100);
		sp4.addNumber(1);
		std::cout << "Shortest: " << sp4.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp4.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{}
	std::cout << "\033[33mTest errors\033[0m" << std::endl;
	try
	{
		Span sp5 = Span(1);
		sp5.addNumber(1);
		sp5.addNumber(1);
		std::cout << "Shortest: " << sp5.shortestSpan() << std::endl;
		std::cout << "Longest: " << sp5.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{}
	return 0;
}