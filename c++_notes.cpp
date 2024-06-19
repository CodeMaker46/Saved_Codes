
Formula : a*b = lcm(a,b) * gcd(a,b)
Formula to make pairs : (n*(n-1) )/2

Always use map for hashing instead of unordered_map as it may gives TLE

INBUILT FUNCTIONS TO BE USED FOR EFFICIENT CODE :-
  
1.  upper_bound(v.begin(),v.end(),U);
    Returns an iterator pointing to the first element that is greater than U.
    If no such element is found, returns last

2.  lower_bound(v.begin(),v.end(),L); gives you the pointer of the value greater than or equal to L
    lower_bound(v.begin(),v.end(),L) - v.begin(); gives you the index of the value greater than or equal to L

3.  sort(v.begin(),v.end(),greater<ll>()); sorts the array in descending order

4.  v.insert(v.begin(), x); to insert 'x' at the front of a vector 

5.  isalpha('x'); checks x is char or not 

INT_MAX:INT_MAX is typically 2147483647.
INT_MAX is for int (usually 32-bit signed integer).

INT_MIN : -2^31
INT_MAX : 2^31 - 1

LLONG_MAX: LLONG_MAX is typically 9223372036854775807.
LLONG_MAX is for long long (usually 64-bit signed integer).

SLIDING WINDOW OR TWO POINTER CONCEPT
ll i=0,j=0;
while(j<n)
{
    while(condition not true) i++;
}

QUESTION 3097 LEETCODE LINK : https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-ii/description/

PREFIX OR KE LIYE USE BITMASK ARRAY OF 64/32 BIT AND THEN INC THE SET BIT COUNT AND WHILE SHRINKING THE WINDOW 
DECREASE THE SET BIT COUNT IF WHILE DEC IT BECOME ZERO THEN DEC THE VAL ELSE IF IT WAS ZERO WHILE INC THEN INC 
THE VAL ACCORING TO THE BITS 