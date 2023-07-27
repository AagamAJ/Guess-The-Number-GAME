#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main()
{
int num,guess,count=1;
srand(time(0));
num=rand()%100 + 1;                                  //Generates random number between 1 and 100

cout<<"Guess the number between 1 to 100 \n";

do
{
    cin>>guess;
    if(guess>num)
    {
        cout<<"Lower Number please! \n";
    }
    else if(guess<num)
    {
        cout<<"Higher Number please! \n";
    }
    else
    {
        cout<<"You guessed it in "<<count<<" attempts \n";
    }
    count++;
} while (guess!=num);
    return 0;
}
