#include <iostream>
int dog_age;

int main() {
  
  
  std::cout << "How old is your dog? \n";
  std::cin >> dog_age; 
  
 int human_years = ((dog_age - 2) * 4) + 21;
  
  std::cout << "Your dog is " << human_years << " years old in human years. \n";
  
  return 0;
  
    
  
}