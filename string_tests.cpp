#include <iostream> 
#include <string>
#include <cstring> 

using namespace std;

const int LENGTH1 = 25;

char array_str1[LENGTH1] = "This is a test";
char array_str2[] = "This is another test";

string std_str1 = "This is a test string";
string std_str2 = "This is another test string";

int main()
{
    strcat_s(array_str1,LENGTH1, array_str2);
    cout << array_str1 << endl; 
    cout << std_str1 + std_str2 << endl; 
    return(0);
}