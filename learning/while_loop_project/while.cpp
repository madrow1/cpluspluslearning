#include <iostream> 
#include <vector>

using namespace std; 

vector<int>  numbers = {34,56,12,35,74}; 

int main(){
    vector<int>::iterator ptr = numbers.begin();

    while (ptr != numbers.end()){
        cout << *ptr <<  " ";
        ptr = next(ptr,1);
    }

    cout << endl;

    int i = 0;
    do{
        cout << numbers[i] << " ";
        i++;
    }while (i < numbers.size());

    return(0);
}