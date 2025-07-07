#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<map>
#include<set>

using namespace std;
int main()
{   //////////////////////////////////////////// VECTOR
    vector<int> v = {1, 2, 3};
    v.push_back(4);         // dodaj na koniec
    v.pop_back();           // usuń ostatni element
    v.size();               // liczba elementów
    v.clear();              // usuń wszystko
    v.empty();              // czy pusty?
   // v[i];                   // dostęp do i-tego elementu
    //////////////////////////////////////////// ALGORITHM
    sort(v.begin(), v.end());             // sortuj rosnąco
    reverse(v.begin(), v.end());         // odwróć kolejność
    count(v.begin(), v.end(), 5);        // ile razy występuje 5
    find(v.begin(), v.end(), 10);        // znajdź element 10
    min_element(v.begin(), v.end());     // iterator do najmniejszego elementu
    max_element(v.begin(), v.end());     // iterator do największego
    ///////////////////////////////////////////// STRING
    string s = "ala";
    s += " ma kota";         // konkatenacja
    s.size();                // długość
    s.substr(4);             // "kota"
    s.find("ma");            // indeks 4
    s == "ala ma kota";      // porównanie
    ////////////////////////////////////////////// CMATH
    abs(-5);         // 5
    pow(2, 3);       // 8
    sqrt(9);         // 3
    floor(3.7);      // 3
    ceil(3.2);       // 4
    ////////////////////////////////////////////// LIMITS
    #include <limits>
    int max = numeric_limits<int>::max();  // maksymalna wartość int
    ////////////////////////////////////////////// MAP, SET
    map<string, int> m;
    m["pies"] = 3;

    set<int> s;
    //s.insert(10);
   // s.count(10);  // 1 jeśli istnieje, 0 jeśli nie

    ///// USEFUL NOTE ///// 
    int n, value = 5;
    vector<int>(n, value); // wektor z n elementami o wartosci value
    for (auto n : v) // petla po v i jego n elementach
    v.resize(n); // ustaw rozmiar na "n"
    return 0;
}