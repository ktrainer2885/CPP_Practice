#include <iostream>
#include <string>
#include <list>

using namespace std;

class giftsOfChristmas
{
private:
    // Setting string variables with word substitutions and created a linked list
    // to hold the gift strings.
    list<string> gifts;
    string days[12] = {"first","second","third","forth","fifth","sixth","seventh",
    "eighth","ninth","tenth","eleventh", "twelfth"};
    string numbers[12] =  {"one", "two", "three", "four", "five", "six", "seven", "eight",
    "nine", "ten", "eleven", "twelve"};
    string first = "On the ";
    string second = " day of Christmas my true love sent to me: ";

public:

    giftsOfChristmas()
    {
        setGiftList();
        displaySong();
    }

    // Takes string input from cin of the gift and associates it with a number for the song
    // found in the numbers array. Then pushes the String into a list for later use.
    void setGift(int num)
    {
        string base = numbers[num] + " ";
        string tmp;
        getline(cin, tmp);
        base += tmp;
        gifts.push_back(base);
    }

    // Sets the gifts for all twelve days.
    void setGiftList()
    {
        cout << endl << "Please type in the gifts." << endl;
        for(int i = 0; i < 12; i++)
        {
            setGift(i);
        }
    }

    // displays the completed song on the monitor using couts
    void displaySong()
    {
        string song = "";

        cout << endl;
        for(int i = 0; i < 12; i++)
        {
            if( i == 1)
                song = "and " + song;
            song = gifts.front() + " " + song;
            gifts.pop_front();

            cout << first + days[i] +  second;
            cout << song << endl << endl;
        }

    }
};