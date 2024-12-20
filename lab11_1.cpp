#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    
    cout << "Press Enter 3 times to reveal your future.\n";
    
    for(int i = 1 ; i <= 3 ; i++ )
    {
        cin.get();
    }
    
    string grade[] = {"A" , "B+" , "B" , "C+" , "C" , "D+" , "D" , "F" , "W"}; 
    
    int ran;
    srand(time(0));
    ran = rand() % 9;
    
    cout << "You will get " << grade[ran] << " in this 261102.";
    
    return 0;
}