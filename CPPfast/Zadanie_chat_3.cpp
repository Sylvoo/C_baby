#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;


int example(vector<int> A)
{
    sort(A.begin(), A.end());
    int max_len = 0;
    int ile = 1;
    int now = 0;
    int before = 0;
    
    for (int i = 1; i < A.size(); i++)
    {
        now = A[i];
        before = A[i-1];
        
        if (now != before && ile > max_len)
        {
            max_len = ile;
            ile = 1;
        }
        if (now == before) ile += 1;
    }
    return max(max_len, ile);
}



int main()
{

    cout << example({1, 1, 2, 2, 2, 3, 3});
    return 0;
}