#include <iostream>
using namespace std;

int main()
{

    int word_len = word.len();
    string word_type = "";
    if (word_len <= 3)
        word_type = "SHORT";
    else if (word_len <= 7)
        word_type = "MEDIUM";
    else
        word_type = "LONG";
    
    return 0;
}
