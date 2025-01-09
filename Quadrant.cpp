# include <iostream>
using namespace std;

class Quadrant
{
    public:
        void Check(int x, int y);
};

void Quadrant :: Check(int x, int y)
{
    if ((x > 0) && (y > 0))
    {
        cout << "1st Quadrant" << endl;
    }
    else if ((x < 0) && (y > 0))
    {
       cout << "2nd Quadrant" << endl;
    }
    else if ((x < 0) && (y < 0))
    {
       cout << "3rd Quadrant" << endl;
    }
    else if ((x > 0) && (y < 0))
    {
       cout << "4th Quadrant" << endl;
    }
    else if ((y == 0))
    {
       cout << "X axis" << endl;
    }
    else if ((x == 0))
    {
       cout << "Y axis" << endl;
    }
    else if ((x == 0) && (y == 0))
    {
       cout << "Origin" << endl;
    }
}

int main()
{
    int x = 0, y = 0;

    cout << "Enter the x co-ordinate: " << endl;
    cin >> x;

    cout << "Enter the y co-ordinate: " << endl;
    cin >> y;

    Quadrant obj= Quadrant();

    obj.Check(x, y);

    return 0;
}