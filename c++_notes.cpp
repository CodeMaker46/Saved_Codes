// Formula : a*b = lcm(a,b) * gcd(a,b)
// Formula to make pairs : (n*(n-1) )/2
// Always use map for hashing instead of unordered_map as it may gives TLE

// upper_bound(v.begin(),v.end(),U)
// Returns an iterator pointing to the first element that is greater than U.
// If no such element is found, returns last

// lower_bound(v.begin(),v.end(),L) gives you the pointer of the value greater than or equal to L
// lower_bound(v.begin(),v.end(),L) - v.begin() gives you the index of the value greater than or equal to L

// sort(v.begin(),v.end(),greater<ll>()); sorts the array in descending order

// vec.insert(vec.begin(), x); to insert 'x' at the front of a vector 

// INT_MAX:INT_MAX is typically 2147483647.
// INT_MAX is for int (usually 32-bit signed integer).

// INT_MIN : -2^31
// INT_MAX : 2^31 - 1

// LLONG_MAX: LLONG_MAX is typically 9223372036854775807.
// LLONG_MAX is for long long (usually 64-bit signed integer).

// SLIDING WINDOW OR TWO POINTER CONCEPT
// ll i=0,j=0;
// while(j<n)
// {
//     while(condition not true) i++;
// }
