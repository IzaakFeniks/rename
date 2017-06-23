#include <iostream> 


template<typename T>
void print(T y)
{
  std::cout << y << std::endl;
}

int main()
{
  char x = 'x'; 
  print(x);
  double y = 7.8;
  print(y);
  return 0;
}
