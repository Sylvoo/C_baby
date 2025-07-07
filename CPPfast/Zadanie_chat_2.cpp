#include<iostream>
#include<vector>
#include<set>
using namespace std;

int example(vector<int> A)
{
    int now = A[1];
    int before = A[0];
    int i = 0;

    for (int num : A)
    {   
        if(num > now)
        {
            before = now;
            now = num;
            i++;
        }
    }
    if (i >= 1)
    return before;
    else return -1;
}

int example_chat(vector<int> A)
{
    set<int> unique(A.begin(), A.end());
    if (unique.size() < 2) return -1;

    auto i = unique.rbegin(); // najwieksza
    ++i;                      // deuga najwieksza
    return *i;
}

int main()
{
    cout <<" "<< example({4, 4, 4});

    return 0;
}