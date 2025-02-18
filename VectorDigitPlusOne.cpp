# include <iostream>
# include <vector>
using namespace std;

class Solution
{
    public:
    vector<int>PlusOne(vector<int>&Vector)
    {
        int iSize = Vector.size();

        for(int i = iSize-1; i >= 0; i--)
        {
            if(Vector[i] < 9)
            {
                Vector[i] += 1;
                return Vector;
            }
            Vector[i] = 0;
        }
        Vector.insert(Vector.begin(),1);
        return Vector;
    }

};


int main()
{
    int iCount = 0, reverseNum;
    cout << "Enter the number of elements you want to store: " << endl;
    cin >> iCount;

    vector <int> vect(iCount);
    cout << "Enter the elements: " << endl;
    for(int i = 0; i < iCount; i++)
    {
        cin >> vect[i];
    }
    Solution obj;

    vector<int>iRet = obj.PlusOne(vect);

    cout << "Answer when added one: " << endl;
    for(int i : iRet)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}