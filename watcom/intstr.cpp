#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <istream>
#include <ostream>

#include <cstdio> // for sprintf

using namespace std;

int main() {
// https://www.systutorials.com/131/convert-string-to-int-and-reverse/

// C way string to int
    string s1 = "100";
    int i1 = atoi(s1.c_str());
    // if (errno == ERANGE) {
    // // or may be std::errno
    // // the number is too big/small
    // // number = LONG_MAX or LONG_MIN
    //     cout << "ERANGE" << endl;
    // } else if (errno == EINVAL) { // or or ...
    // //maybe EINVAL, E2BIG or EDOM (or ERANGE again)
    // //unable to convert to a number
    //     cout << "EINVAL" << endl;
    // }
    cout << i1 + 1 << endl;

// C way int to string
    const char base_string[] = "base_string";
    char out_string [100]; //MAX_BUFFER_SIZE
    int number = 123;
    // sprintf(out_string, "%s%d", base_string, number);
    sprintf(out_string, "%d", number);
    printf("out_string = %s\n", out_string);

// C++ string to int
    // 1st
    // std::string text = "123";
    // int number2;
    // std::istringstream iss (text);
    // iss >> number2;
    // if (!iss.good ()) {
    // //something happened
    // }

    // 2nd
    // std::string str("123");
    // int n = std::stoi(str);
    // std::cout << str << " --> " << n << std::endl;

// C++ int to string
    //1st
    // int i = 123;
    // std::string out_string2;
    // std::stringstream ss;
    // ss << i;
    // out_string2 = ss.str();

    //2nd
    // int n = 123;
    // std::string str = std::to_string(n);
    // std::cout << n << " ==> " << str << std::endl;

    return 0;
}
