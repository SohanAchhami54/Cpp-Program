#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream input_file("example.txt");

  // get the current position of the input file pointer
streampos current_pos = input_file.tellg();
cout << "Current position: " << current_pos <<endl;

  // move the input file pointer 10 bytes forward from the beginning of the file
  input_file.seekg(10, std::ios::beg);

  // get the new position of the input file pointer
streampos new_pos = input_file.tellg();
cout << "New position: " << new_pos <<endl;

  input_file.close();
  return 0;
}









