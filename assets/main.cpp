#include <iostream>
#include <time.h>

using namespace std;

int inp(string text){
    cout << text;
    int a = 0;
    cin >> a;
    cout << endl;
    return a;
}


int main(){
    srand(time(NULL));

    int n = rand() % 100 +1;
    int guess = 0;

    guess = inp("Guess a number between 1 and a 100: ");

    while(true){
         if (guess > n){
             cout << "\n Too high!\n";
             guess = inp("Guess again: ");
         } else if (guess < n){
             cout << "\n Too low!\n";
             guess = inp("Guess again: ");
         } else{
             cout << "\n\n You guessed correctly! :)";
             break;
         }

    }
}