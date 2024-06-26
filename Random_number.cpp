#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int rno;
    int guess;
    
    srand(time(0));
    rno = rand()%100 + 1;
    cout<<"Guess the random number!";

    do
    {
        cout<<"\nEnter your guess (between 1 - 100) : ";
        cin>>guess;

        if(guess>rno)
        {
            cout<<"\nYour guess is higher than random number!!!";
        }
        else if(guess<rno)
        {
            cout<<"\nYour guess is lower than random number!!!";
        }
        else
        {
            cout<<"\nCongrats!!! Your guess is right";
        }
    }

    while(guess!=rno);

    return 0;

}