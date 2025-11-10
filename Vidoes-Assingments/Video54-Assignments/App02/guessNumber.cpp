# include <iostream>
using namespace std;

int main() {
  int guessNumber = 7;
  int guessTries = 3;
  int userGuess;

  cout << "Welcome, you have to guess a guessNumber between 1-10.\n";
  cout << "Note that: You have three tries to find the correct guessNumber.\n";

  while(guessTries--){
    cout << "\nEnter your guessNumber: ";
    cin >> userGuess;
    if(userGuess == guessNumber){ 
      cout << "You win! guessNumber " << guessNumber << " is the correct guessNumber.\n";
      break;
    }
    if(guessTries == 0){
      cout << "You lose, the correct guessNumber is: " << guessNumber;
      break;
    } 
    cout << "Wrong guess try again, " << guessTries << " left.\n";
  }

  return 0;
}