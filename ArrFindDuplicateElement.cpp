# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

class VectorX
{

    public:
    void Accept(vector<int>&Arr, int iSize);
    int FindDuplicate(vector<int>&Arr);

};

void VectorX :: Accept(vector<int>&Arr, int iSize)
{
    
        int num;
        cout << "Enter elements: " << endl;
        for (int i = 0; i < iSize; i++) {
            cin >> num;
            Arr.push_back(num);
        }
    
    
}

int VectorX :: FindDuplicate(vector<int> &Arr)
{
    sort(Arr.begin(), Arr.end());

    for(int i = 0; i < Arr.size(); i++)
    {
        if (Arr[i] == Arr[i+1])
        {
            return Arr[i];
        }
        
    }
    return -1;
}

int main()
{
    int iLength = 0, iRet = 0;
    vector <int> vect;

    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iLength;

    VectorX obj;

    obj.Accept(vect,iLength);
    iRet = obj.FindDuplicate(vect);

    if (iRet == -1)
    {
        cout << "There is no duplicate element" << endl;
    }
    else
    {
        cout << "Duplicate element is: " << iRet << endl;
    }
    
    return 0;

}