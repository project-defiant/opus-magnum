#include <iostream>
#include <limits>
#include <iomanip>
#include <string>

using namespace std;

template <typename T>
void type_information(string desc)
{
	cout << setw(25)
		<< desc << ":"
		<< setw(2) << sizeof(T)
		<< "|"
		<< setw(2)
		<< numeric_limits<T>::digits
		<< (numeric_limits<T>::is_signed ? "|sg|" : "|un|")
		<< "[" << numeric_limits<T>::min()
		<< ", " << numeric_limits<T>::max()
		<< "]" << endl;
}



int main()
{
  // char
	type_information<char>("char");
	type_information<unsigned char>("unsigned char");
	type_information<signed char>("signed char");
	type_information<wchar_t>("wchar_t");
	type_information<char16_t>("char16_t");
	type_information<char32_t>("char32_t");
  // int
	type_information<short int>("short int");
	type_information<signed short int>("signed short int");
	type_information<unsigned short int>("unsigned short int");
	type_information<int>("int");
	type_information<unsigned int>("unsigned int");
	type_information<signed int>("signed int");
	type_information<long int>("long int");
	type_information<signed long int>("signed long int");
	type_information<unsigned long int>("unsigned long int");
	type_information<long long int>("long long int");
	type_information<signed long long int>("signed long long int");
	type_information<unsigned long long int>("unsigned long long int");
	
  // float
	type_information<float>("float");
	type_information<double>("double");
	type_information<long double>("long double");

  return 0;



}
