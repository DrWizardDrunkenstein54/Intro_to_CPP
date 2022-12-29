#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
using ll = long long;

#define MAX_N 1000000

ll max_consecutive_sum(map<ll, bool> lookup, vector<ll> prefix)
{
    ll ans = INT_MIN, nums_used = INT_MIN;
    for (ll size = 1; size < prefix.size() - 1; size++)
    {
        for (ll starting_point = 1; starting_point+size < prefix.size(); starting_point++)
        {
            ll prefix_sum = prefix[starting_point+size] - prefix[starting_point-1];
            if (lookup.count(prefix_sum) && size > nums_used)
            {
                ans = prefix_sum;
                nums_used = size+1;
                cout << size << ": " << prefix_sum << endl;
            }
        }
    }
    
    return ans;
}

int main()
{
    map<ll, bool> prime_hash_table;
    
    vector<bool> is_prime(MAX_N+1, true);
    is_prime[0] = false;
    is_prime[1] = false;
    for (ll i = 4; i < MAX_N + 1; i += 2) is_prime[i] = false;
    vector<ll> primes = {2};
    vector<ll> prefix_primes = {0};
    
    for (ll i = 3; i < MAX_N + 1; i += 2)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (ll j = i * i; j < MAX_N + 1; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    
    
    for (ll i = 0; i < primes.size(); i++)
    {
        prime_hash_table[primes[i]] = true;
        prefix_primes.push_back(prefix_primes[i] + primes[i]);
    }
    
    cout << max_consecutive_sum(prime_hash_table, prefix_primes) << endl;

    return 0;
}
