#include <iostream>

using std::cout;
using std::endl;
using std::cin;



bool ask_up_down(unsigned int *top, unsigned int *bottom, unsigned int our_guess)
{
    char usr_guess;
    cout << "Is your number bigger than " << our_guess << "?" << endl;
    cout << "uppper is u" << endl << "down is d" << endl << "correct is c" << endl;
    cin >> usr_guess;
    switch (usr_guess)
    {
    case 'u':
        *bottom = our_guess;
        return false;
        break;
    case 'd':
        *top = our_guess;
        return false;
        break;
    case 'y':
        *top = our_guess;
        *bottom = our_guess;
        return true;
        break;
    default:
        cout << "error";
        return false;
        break;
    }
    
}

namespace switchs
{
    int binary_search()
    {
        
        unsigned int upper_guess = 100;
        unsigned int lowwer_guess = 0;

        cout << "I'll expect what you guess" << endl;
        cout << "Think one number between 1~100" << endl;

        bool result = false;
        bool* result_ptr = &result;

        do
        {
            unsigned int our_guess = (int) (upper_guess + lowwer_guess)/2;
            *result_ptr = ask_up_down(&upper_guess, &lowwer_guess, our_guess);
        }
        while(result != true);
    }
}


int main()
{
    cout << "--- main start ---" << endl;
    switchs::binary_search();
    cout << "--- main over ---" << endl;
}