#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers = {4,345,46,23,12};
float average; 

int main(){
    average = 0.0f;
    for(int i=0; i<numbers.size(); i++)
        average += numbers[i];
    average /= numbers.size();

    cout << "Average is: " << average << endl ; 

    for(auto x : numbers)
    average /= numbers.size();

    cout << "Average is: " << average << endl; 

    return(0);
}