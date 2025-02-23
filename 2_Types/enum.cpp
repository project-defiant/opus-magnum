#include <iostream>

using namespace std;


namespace railways {
  enum class Tresult {
    Failure = 0,
    Success = 1,
  };

  std::ostream& operator<<(std::ostream& os, Tresult result)
  {
    switch (result){
      case Tresult::Failure: return os << "Failure";
      case Tresult::Success: return os << "Success";
      default: return os << "Unknown outcome";
    }
  }
}


int main(int argc, char* argv[])
{
  

  railways::Tresult res;
  
  if (argc > 1)
  {
    res = railways::Tresult::Failure;
  } else
  {
    res = railways::Tresult::Success;
  }
  


  cout << "The result of the program is " << res << endl;

  return 0;
}
