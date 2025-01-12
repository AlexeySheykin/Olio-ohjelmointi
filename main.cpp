#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game(int maxnum) {
int randomNumber = rand() % maxnum + 1;
int guess = 0;
int guessCount = 0;

cout << "Arvaa luku 1 ja " << maxnum << " välillä: ";

while (guess != randomNumber) {
cin >> guess;
guessCount++;
if (guess < randomNumber) {
cout << "Luku on suurempi, yritä uudelleen: ";
} else if (guess > randomNumber) {
cout << "Luku on pienempi, yritä uudelleen: ";
} else {
cout << "Oikea vastaus! Arvasit luvun " << randomNumber << " ja teit " << guessCount << " arvausta.\n";
}
}

return guessCount;
}
int main() {
srand(static_cast<unsigned int>(time(0)));
int maxnum;
cout << "Anna korkein etsittävä luku: ";
cin >> maxnum;
int guesses = game(maxnum);
cout << "Peli päättyi, arvasit " << guesses << " kertaa.\n";
return 0;
}
