#include <bits/stdc++.h>
#define co cout
#define e endl;
#define print(v) for(auto &it : v) { co << it << " "; } co << e;
using namespace std;

void makeLPS(vector<int>&lps,int m,string &pattern)
{
	int length = 0;

    int i = 1;

    while (i < m)
    {
        if (pattern[i] == pattern[length]) // Compare current character with lps-length character
        {
            length++;
            lps[i] = length;
            i++;
        }
        else
        {
            if (length > 0)
            {
                length = lps[length - 1]; // Fall back to the previous longest prefix
            }
            else
            {
                lps[i] = 0; // No proper prefix suffix match
                i++;
            }
        }
    }
}



int main()
{
    string txt, pattern;
    cin >> txt >> pattern;
    int n = txt.size(), m = pattern.size();

    // Naive approach : O(n*m)

    // 1. KMP (Knuth-Morris-Pratt) Algo : return

    // logic : LPS[i] : len of longest proper prefix == proper suffix ending at i;

    // for AAA : LPS : 2 (AA) and (AA one A is in common

    vector<int>lps(m,0);

    makeLPS(lps,m,pattern);

    print(lps);

    int i = 0,j = 0;

    vector<int>foundAt;

    while(i<n)
    {
    	if(txt[i]==pattern[j])
    	{
    		i++,j++;
    		if(j==m)
    		{
    			foundAt.push_back(i-j);
    		}
    	}
    	else
    	{
    		if(j!=0)
    		{
    			j = lps[j-1];
    		}
    		else
    		{
    			i++;
    		}
    	}
    }

    print(foundAt);

    // TC : O(N+M)



    return 0;
}
