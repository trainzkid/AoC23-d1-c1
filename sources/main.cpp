#include <iostream>	// std::cin/cout
#include <string>	// std::string
#include <ctype.h>	// isdigit()
#include <vector>	// std::vector

int main() {
	std::string line{};
	int answer{};
	while(std::cin>>line) {
		std::vector<int> digits{};
		for(char c : line) {
			if(isdigit(c))					// https://stackoverflow.com/questions/2340688/how-to-find-out-if-a-character-in-a-string-is-an-integer
				digits.push_back(c-'0');		// https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c
		}
		answer += (digits.front()*10)+digits.back();
	}
	std::cout<<"Answer: "<<answer<<"\n";
}
