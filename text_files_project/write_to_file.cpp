#include <fstream>
#include <iostream>

using namespace std; 

ofstream outFile; 
float a = 4.343f, b = 45.3242f ;

int main(){
    outFile.open("test2.txt");
    if (outFile.fail()){
        cout << "File does not exist" << endl;
    } else { 
        outFile << "a = " << a << endl;
        outFile << "b = " << b << endl;
        outFile << "a + b = " << a+b << endl;
        outFile << "a - b= " << a-b << endl;
        outFile.close();
        cout << "File write has worked" << endl; 
    }
    return(0);
}