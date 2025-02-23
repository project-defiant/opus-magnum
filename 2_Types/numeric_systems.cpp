#include <iostream>
#include <regex>
#include <string>

using namespace std;

/*
 * This program inputs the decimal number and depending on the number system it 
 * prints the value in the actual numeric system.
 */

void convert_to_number_system(int number_system, int value)
{
  switch (number_system) 
  {
    case 8:
      cout << "Converting to 8-based numeric system" << endl;
      cout << "0" << std::oct << value << endl;
      break;
    case 16:
      cout << "Converting to 16-based (Hexadecimal) numeric system" << endl;
      cout << "0x" << std::hex << value << endl;
      break;
    default:
      cout << "Converting to 10-based numeric system" << endl;
      cout << std::dec << value << endl;
  }
}


int main(int argc, char *argv[])
{

  if (argc != 3)
  {
    cout << "Usage " << argv[0] << " [number] [number system]" << endl;
    return 1;
  }
  

  std::cmatch m;
  
  // Ensure the inputs are correct with regex
  std::regex v_pattern("^(\\d+)$");
  bool correct_value = std::regex_match(argv[1], m, v_pattern);
  if (!correct_value)
  {
    cout << "Must provide numeric input [number]" << endl;
    return 1;
  }

  std::regex ns_pattern("8|10|16");
  bool correct_number_system = std::regex_match(argv[2], m, ns_pattern);
  if (!correct_number_system)
  {
    cout << "Must provide either 8, 10 or 16 as a second parameter [number system]." << endl;
    return 1;
  }


  int number_system = atoi(argv[2]);
  int value = atoi(argv[1]);

  std::string number_system_label;
  switch (number_system) {
    case 8: number_system_label = "octal"; break;
    case 16: number_system_label = "hexadecimal"; break;
    default: number_system_label = "decimal"; break;
  }

  cout << "Attempting to covert a value: " << value << " to " << number_system_label << " system" << endl;
  convert_to_number_system(number_system, value);

  return 0;
}
