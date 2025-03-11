/* source for sd42
 * sd42 is a "Hello, World!" program in c++
 *
 */

#include <iostream>


int main() {

    char c = 'a';
    int x = 123;
    int y = 33;



    std::cout << "Hello, World!\n" << "This is anothere string\n";

    std::cout << "column 1 heading\tcolumn 2 heading\n";

    std::cout << "----------------\t----------------\n";

    std::cout << "The character is : " << c << "\n";

    std::cout << "The size of a character is: " << sizeof(char) << " bytes\n";

    std::cout << "The value of x is: " << x << "\n";

    std::cout << "The value of y is: " << y << "\n";

    std::cout << "The size of an int is " << sizeof(int) << "\n";



}
