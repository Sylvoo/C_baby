#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());  
    int smallest = 1;          

    for (int num : A) {
        if (num == smallest) {
            ++smallest;      
        } else if (num > smallest) {
            break;            
        }
    }
    return smallest;
}
