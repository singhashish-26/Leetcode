#https://leetcode.com/problems/push-dominoes/

class Solution {
public:
    string pushDominoes(string dominoes) {
        int fr=-1,fl=-1,c=0;
        int s=0,e=0;
        while(e<dominoes.size())
        {
            if(dominoes[e]=='.')
            {
                if(fr!=-1)
                    c++;
                e++;
                continue;
            }
            if(fr==-1)
            {
                if(dominoes[e]=='L')
                {
                    while(s!=e && e<dominoes.size())
                    {
                        dominoes[s++]='L';
                    }
                    e++;
                    continue;
                }
                if(dominoes[e]=='R')
                {
                    fr=e;
                    s=e;
                    e++;
                    continue;
                }
            }
            if(fr!=-1 && fl==-1)
            {
                if(dominoes[e]=='L')
                {
                    int x=c/2;
                    while(x--)
                    {
                        dominoes[++s]='R';
                    }
                    s=e;
                    x=c/2;
                    while(x--)
                    {
                        dominoes[--s]='L';
                    }
                    fr=-1;
                    e++;
                    s=e;
                    c=0;
                    continue;
                }
                if(dominoes[e]=='R')
                {
                    while(fr<e)
                    {
                        dominoes[fr++]='R';
                    }
                    s=e;
                    e++;
                    c=0;
                    continue;
                }
            }
        }
        if(fr!=-1)
        {
            while(fr<dominoes.size())
                dominoes[fr++]='R';
        }
        return dominoes;
    }
};
