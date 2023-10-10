#include<bits/stdc++.h>
using namespace std;
string mergeAlternately(string word1, string word2) {
    string w;
    if(word1.length()==word2.length())
    {
        int n=word1.length();
        int x=0;
        int y=0;

        while(n!=0)
        {
            w=w+word1[x];
            w=w+word2[y];
            x++;y++;n--;
        }
    }
    else if(word1.length()>word2.length())
    {
        int n=word2.length();
        int x=0;
        int y=0;

        while(n!=0)
        {
            w=w+word1[x];
            w=w+word2[y];
            x++;y++;n--;
        }
        for(int i=x;i<word1.length();i++)
        {
            w=w+word1[i];
        }
    }
    else
    {
        int n=word1.length();
        int x=0;
        int y=0;

        while(n!=0)
        {
            w=w+word1[x];
            w=w+word2[y];
            x++;y++;n--;
        }
        for(int i=x;i<word2.length();i++)
        {
            w=w+word2[i];
        }
    }
    return w;
}
int main()
{
    string w1="abcxzy";
    string w2="pqr";
    cout<<mergeAlternately(w1,w2);
}