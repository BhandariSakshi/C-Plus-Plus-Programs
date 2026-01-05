# include <iostream>
# include <cstring>

using namespace std;

void moveHash(char str[], int len)
{
    char str1[100], str2[100];
    int i = 0, j = 0, k = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '#')
        {
            str1[j++] = str[i];
        }
        else
        {
            str2[k++] = str[i];
        }

    }

    str1[j] = '\0';
    str2[k] = '\0';

    strcat(str1,str2);

    cout << "String after moving hash front: " << endl;
    cout << str1;
}

int main()
{
    char a[100], len;
   
    cout << "Enter the string:" << endl;
    cin.getline(a,100);
    
    len = strlen(a);

    moveHash(a,len);

    return 0;
}