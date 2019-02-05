#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

void print(const int& n) { 
    std::cout << n << ' '; 
};
 

int main() {
    int a(10), b(20);
    cout << a - b << endl;
    cout << abs(a - b) << endl;
    
    int N(5);
    vector<int> v;
    v.resize(N);
    for(int i = 0; i < N; i++) {
        v[i] = i * 11;
    }
    for(int i = 0; i < N; i++) {
        cout << v[i] << ' ';
    }
    // for (const auto& aa : v) {  
    //     cout << aa << endl;
    // }
    
    cout << endl;
    
    std::for_each(v.begin(), v.end(), print);
    cout << endl;
    // std::for_each(v.begin(), v.end(), [](int &n){ n++; });
    // cout << endl;
    std::reverse(v.begin(),v.end()); 
    std::for_each(v.begin(), v.end(), print);
    cout << endl;
    return 0;
}
