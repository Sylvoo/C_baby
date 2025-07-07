#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<limits>
using namespace std;

int example(vector<int>& A)
{
    map<int, int> counter;
    for (int num : A)
    {
        counter[num]++;
    }
    int MaxCount = 0;
    int result = numeric_limits<int>::max(); 

    for (auto& [key, count] : counter)
    {
        if (count > MaxCount || (count == MaxCount && key < result))
        {
            MaxCount = count;
            result = key;
        }
    }
    return result;

}

int main() {
    vector<int> A = {4, 4, 5, 5, 1};
    cout << "Najczęstsza liczba: " << example(A) << endl;
    return 0;
}