# include <iostream>
# include <cstring>
using namespace std;

void countLetter(char str[], int len)
{
    int count = 0, k = 0;
    char result[100];

    //aaaaabbccddeee
    //a5b2c2d2e3
    for(int i = 0; i < len; i++)
    {
         int count = 1;

        // Count same consecutive characters
        while (i < len - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }

        cout << str[i] << count;
    }
        cout << endl;
      
    }

  

int main()
{
    char Arr[50];
    int len = 0;

    cout << "Enter the string: " << endl;
    cin.getline(Arr,50);

    len = strlen(Arr);

    countLetter(Arr,len);

    return 0;
}