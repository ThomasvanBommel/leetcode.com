/*
 * Thomas vanBommel
 * 2022-02-22
 */
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

// Calculate the value of title in base 26 where A=1 and Z=26
int calculate(char* title){
  int length = strlen(title);
  int result = 0;
  
  for(int i = 0; i < length; i++)
    result += pow(26, length - i - 1) * (*title++ - 'A' + 1);
    
  return result;
}

int main(int argc, char* argv[]){
  // TODO: More error handling
  
  // Output usage, example, and error information
  if(argc != 2){
    cout << "Usage:   column-number <column-title>" << endl;
    cout << "Example: column-number ABC" << endl;
    cout << "To many or to few arguments, only include a single (1) argument please." << endl;
    return -1;
  }

  // Output result
  cout << calculate(argv[1]) << endl;
  
  return 0;
}
