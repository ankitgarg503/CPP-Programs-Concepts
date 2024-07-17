#include<iostream>
using namespace std;


void print_message(const char* message) {
  std::cout << message << std::endl;
}

int main() {
  void (*print_function)(const char*) = print_message;
  print_function("Hello, world!");
  return 0;
}