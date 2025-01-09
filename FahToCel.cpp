# include <iostream>
# include <cmath>
using namespace std;

class FahToCel
{
    public:
        void Convert(float Start, float End, int Steps);
};

void FahToCel :: Convert(float Start, float End, int Steps)
{
    float cel = 0.0f, i = 0.0f;

    for ( i = Start; i <= End; i+= Steps)
    {
        cel = (5.0/9.0)*(i-32);

        if (cel >= 0)
        {
            cout << i << "\t" << floor(cel) << endl;
        }
        else
        {
            cout << i << "\t" << ceil(cel) << endl;
        }
    }
    
}

int main()
{
    float fStartF = 0.0f, fEndF = 0.0f;
    int Steps = 0;

    cout << "Enter the start fahreheit value: " << endl;
    cin >> fStartF;

    cout << "Enter the last fahrenheit value: " << endl;
    cin >> fEndF;

    cout << "Enter the steps to be taken: " << endl;
    cin >> Steps;

    FahToCel obj = FahToCel();

    obj.Convert(fStartF, fEndF, Steps);

    return 0;
}