#include <exception>
#include <iomanip>
#include <iostream>

#include "main.hpp"

int main()
{

	std::cout << "NUMBERS\n\n" << std::endl;

	int long_number = 1000;
	int short_number = 10;
	int mid_number = 500;

	std::cout << "long_number : " << long_number << "\nmid_number : " << mid_number << "\nshort_number : " << short_number << std::endl;

	swap(long_number, short_number);

	std::cout << "Swap Long number and Short number \n" << "long_number : " << long_number << "\nmid_number : " << mid_number << "\nshort_number : " << short_number << std::endl;

	swap(short_number, mid_number);

	std::cout << "Swap Short number and Mid number \n" << "long_number : " << long_number << "\nmid_number : " << mid_number << "\nshort_number : " << short_number << std::endl;

	std::cout << "Min : " << min(short_number, long_number) << "\nMax : " << max(short_number, long_number) << std::endl;

	std::cout << "\n\nALPHAS\n\n" << std::endl;

	char first_letter = 'a';
	char last_letter = 'z';
	char between_letter = 'm';

	std::cout << "first_letter : " << first_letter << "\nbetween_letter : " << between_letter << "\nlastd_letter : " << last_letter << std::endl;

	swap(first_letter, last_letter);

	std::cout << "Swap First letter and Last letter \n" << "first_letter : " << first_letter << "\nbetween_letter : " << between_letter << "\nlastd_letter : " << last_letter << std::endl;

	swap(last_letter, between_letter);

	std::cout << "Swap Last letter and Between letter \n" << "first_letter : " << first_letter << "\nbetween_letter : " << between_letter << "\nlastd_letter : " << last_letter << std::endl;

	std::cout << "Min : " << min(last_letter, between_letter) << "\nMax : " << max(last_letter, first_letter) << std::endl;

	return (0);
}
