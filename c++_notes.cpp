// **************************************************************************************** FORMULAS *****************************************************************************************
Formula : a*b = lcm(a,b) * gcd(a,b)
Formula to make pairs : (n*(n-1) )/2

// **************************************************************************************** INBUILTS *****************************************************************************************

INBUILT FUNCTIONS TO BE USED FOR EFFICIENT CODE :-
  
1.  upper_bound(v.begin(),v.end(),U);
    Returns an iterator pointing to the first element that is greater than U.
    If no such element is found, returns last

2.  lower_bound(v.begin(),v.end(),L); gives you the pointer of the value greater than or equal to L
    lower_bound(v.begin(),v.end(),L) - v.begin(); gives you the index of first occurence of the value greater than or equal to L

3.  sort(v.begin(),v.end(),greater<ll>()); sorts the array in descending order

4.  v.insert(v.begin(), x); to insert 'x' at the front of a vector 

5.  isalpha('x'); checks x is among them or not 
    Uppercase Letters: 'A' to 'Z' (ASCII values 65 to 90)
    Lowercase Letters: 'a' to 'z' (ASCII values 97 to 122)  

6. (string1).append(string2) 
  
    The append method is used to append a string to the existing string object.
    The append method is generally more efficient than the + operator because 
    it modifies the existing string object in place, avoiding the creation of a temporary object. 
    This reduces memory allocations and can be faster, especially when appending multiple times in a loop.
  
7. Prefix sum from left = partial_sum(vec.begin(), vec.end(), leftPrefixSum.begin());

8. Prefix sum from right = partial_sum(vec.rbegin(), vec.rend(), rightPrefixSum.rbegin());
  
INT_MAX:INT_MAX is typically 2147483647.
INT_MAX is for int (usually 32-bit signed integer).

INT_MIN : -2^31
INT_MAX : 2^31 - 1

LLONG_MAX: LLONG_MAX is typically 9223372036854775807.
LLONG_MAX is for long long (usually 64-bit signed integer).

// **************************************************************************************** CONCEPT 1 ****************************************************************************************

SLIDING WINDOW OR TWO POINTER CONCEPT
ll i=0,j=0;
while(j<n)
{
    while(condition not true) i++;
    j++;
}

// **************************************************************************************** CONCEPT 2 ****************************************************************************************

QUESTION 3097 LEETCODE LINK : https://leetcode.com/problems/shortest-subarray-with-or-at-least-k-ii/description/

PREFIX OR KE LIYE USE BITMASK ARRAY OF 64/32 BIT AND THEN INC THE SET BIT COUNT AND WHILE SHRINKING THE WINDOW 
DECREASE THE SET BIT COUNT IF WHILE DEC IT BECOME ZERO THEN DEC THE VAL ELSE IF IT WAS ZERO WHILE INC THEN INC 
THE VAL ACCORING TO THE BITS 

// **************************************************************************************** CONCEPT 3 ****************************************************************************************
+ AUR ^ EK HI TARIKE SE KAM KRTE HAI JAB INKO AS A OPERAND USE KRTE WAQT JO RESULT AAYEGA WO ODD HOGA YA EVEN 
FOR EXAMPLE :-
  ODD + ODD = EVEN
  ODD ^ ODD = EVEN // last bit set and set hence result unset
  ODD + EVEN = ODD
  ODD ^ EVEN = ODD // last bit set and unset hence result set

// **************************************************************************************** CONCEPT 4 ****************************************************************************************
CODEFORCES ROUND 714 B AND SEQUENCES LINK : https://codeforces.com/contest/1513/problem/B

NOTE THAT THE AND OF ALL NUMBERS IN THE GIVEN ARRAY WILL BE LESS THAN OR EQUAL TO THE MINIMUM ELMENT OF ARRAY 
  ( a & b ) <= min( a,b );

// **************************************************************************************** CONCEPT 5 ****************************************************************************************
    FOR MIRROR INDEXES IN MATRIX of nXn : 
    // 0 degree
    v[row][col]
    // 90 degree
    v[n-1-col][row]
    // 180 degree
    v[n-1-row][n-1-col]
    // 270 degree
    v[col][n-1-row]

// **************************************************************************************** CONCEPT 6 ****************************************************************************************
    CodeForces Round 959 ka ques C Hugry Games is a good ques of prefix sum & dp , ques link - https://codeforces.com/contest/1994/problem/C
      
// **************************************************************************************** CONCEPT 7 ****************************************************************************************
    CodeForces Round 963 ka ques D. Med-imize is a good ques of binary search & dp , ques link - https://codeforces.com/contest/1993/problem/D
      
// **************************************************************************************** CONCEPT 8 ****************************************************************************************
  
Modulo inverse :

Modulo inverse of N under Modulo P exists iff (coprime) GCD(N,P) = 1

Two ways to find the modulo inverse 

1. using Fermat's Little thoerem

Fermat’s little theorem states that if p is a prime number, then for any integer a, 
the number a^p - a is an integer multiple of p. 

or you can say  => a^p ≡ a (mod p).

Special Case: If a is not divisible by p, Fermat’s little theorem 
is equivalent to the statement that a^(p-1) - 1 is an integer multiple of p. 


or you can say => 
a^(p-1) ≡ 1 (mod p) 
OR 
a^(p-1) % p = 1 

Here a is not divisible by p. 

TC : log(p)


2. using Extended Euclidean theorem
