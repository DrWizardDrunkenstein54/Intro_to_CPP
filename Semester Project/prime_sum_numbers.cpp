#include <iostream>
#include <vector>
using namespace std;

bool prime(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    // Using concept of prime number
    // can be represented in form of
    // (6n + 1) or(6n - 1) hence
    // we have to go for every multiple of 6 and
    // prime number would always be 1 less or 1 more than
    // the multiple of 6.
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

int S(int num)
{
    int temp_sum = 5;
    for (int i = 6; i <= num; i++)
    {
        if (i % 2 == 0)
            temp_sum += i/2 - 1;
        else
        {
            if (prime(i))
            {
                if (prime(i - 2))
                    temp_sum += i/2;
                else
                    temp_sum += i/2 - 1;
            }
            else
            {
                if (prime(i - 2))
                    temp_sum += i/2 - 1;
                else
                    temp_sum += i/2 - 2;
            }
        }
    }

    return temp_sum;
}

int main()
{
    vector<int> fib = {2, 3};
    while (fib.size() <= 41) fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);

    int sum = 0;
    for (int num : fib) sum += S(num);

    cout << sum << endl;
    return 0;
}
