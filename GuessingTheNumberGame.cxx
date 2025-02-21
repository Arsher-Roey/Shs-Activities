#include <iostream.h>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    // Providing a seed value
    srand((unsigned)time(NULL));

    // Get a random number
    int airandom = 1 + (rand() % 5);

    int playernumber;
    bool draw = false;

    do
    {
        cout << "Input your number: " << endl;
        cin >> playernumber;

        cout << endl;
        
        draw = false;

        if (playernumber > airandom)
        {
           draw = true;
           cout << "The number is lower than your answer!" << endl;
           cout << "AWWW :<< TRY AGAIN!" << endl;
        }
        else if (playernumber < airandom)
        {
            draw = true;
            cout<< "The number is higher than your answer!" << endl;
            cout << "AWWW :<< TRY AGAIN!" << endl;
        }
        else if (playernumber == airandom) {
        cout << "OMG! YOU GUESSED IT RIGHT!" << endl;
        }
        } while (draw);

            getch();
            return 0;
        }