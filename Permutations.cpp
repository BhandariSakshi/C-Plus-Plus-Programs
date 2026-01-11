// Problem Statement :
// In a classroom some of the seats are already occupied by students and only a few seats are available in the classroom. The available seats are assumed as r and n number of students are looking for the seat. We need to find in how many different permutations n number of students can sit on r number of chairs.

# include <iostream>
using namespace std;

int Factorial(int iNum)
{
    int iFact = 1;

    for(int i = iNum; i > 0; i--)
    {
        iFact *= i;
    }

    return iFact;
}

int main()
{
    int noSeat = 0, noStudent = 0;

    cout << "Enter the Seats available is classroom: " << endl;
    cin >> noSeat;

    cout << "Enter the students searching for seat in classroom: " << endl;
    cin >> noStudent;

    int iResult = Factorial(noStudent) / Factorial(noStudent-noSeat);
    cout << "Total possible arrangements: " << iResult << endl;

    return 0;
}