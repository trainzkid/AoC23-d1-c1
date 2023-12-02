#include <iostream>	// std::cin/cout
#include <string>	// std::string
#include <ctype.h>	// isdigit()
#include <vector>	// std::vector
#include <ranges>	// std::views, std::ranges
#include <algorithm>	// std::ranges::copy

int main() {
	std::string line{};
	int answer{};
	auto digitsOnly = [](const char c) { return isdigit(c); };
	auto digit2numeric = [](const char c) { return c - '0'; };
	const int place = 10;		// 10s place, eg the second place in a base 10 system
	while(std::cin>>line) {
		std::vector<int> digits{};
		std::ranges::copy(line | std::views::filter(digitsOnly) | std::views::transform(digit2numeric),std::back_inserter(digits));
		answer += (digits.front() * place) + digits.back();
	}
	std::cout<<"Answer: "<<answer<<"\n";
}
