#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class overlappingRectangles
{
private:

    double leftCorner[2];
    double rightCorner[2];

public:
    overlappingRectangles()
    {

    }

    void getCoordinates()
    {
        string rectangle;
        string bottomLeft;
        string topRight;
        size_t found;

        cout << "Type in the the coordinates of the bottom left corner and the top right"
                " corner: ";
        getline(cin, rectangle);
        found = rectangle.find(" ");

        //cut string into two at the space;
        bottomLeft = rectangle.substr(0, found);
        topRight = rectangle.substr(found + 1, rectangle.length() -1);
        //convert to doubles bottom left corner




        //convert to double top right corner

        return;
    }

};