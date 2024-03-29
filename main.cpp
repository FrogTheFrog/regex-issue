#include <regex>
#include <iostream>
#include <locale>
#include <chrono>

int main() 
{
   std::setlocale(LC_ALL, ".UTF-8");
   std::cout << "setlocale info: " << setlocale(LC_ALL, NULL) << std::endl;

   std::cout << "Before regex" << std::endl;

   const auto now{std::chrono::steady_clock::now()};
   std::regex rgx{"[a-z][a-z][a-z]"};

   std::cout << "After regex. Took " << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - now).count() << "ms" << std::endl;
   
   return 0;
}
