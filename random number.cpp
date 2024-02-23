#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
  int number = rand () % 100 + 1;
  int Guess;
  int time = 0;
  cout << "Welcome to the Guess the Number Game!\n";
  cout << "Try to guess the number between 1 and 100.\n\n";
  do
	{
	  cout << "Enter your guess: ";
	  cin >> Guess;
	  if (Guess > number)
		{
		  cout << "Too high! Try again.\n";
		}
	  else if (Guess < number)
		{
		  cout << "Too low! Try again.\n";
		}
	  else
		{
		  cout << "Congratulations! You guessed the correct number in " <<
			time + 1 << " attempts.\n";
		}
	  time++;

	}
  while (Guess != number);

  return 0;
}
