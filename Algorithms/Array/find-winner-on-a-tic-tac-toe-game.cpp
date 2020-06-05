#https://leetcode.com/problems/find-winner-on-a-tic-tac-toe-game/

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int r[3]={0};
        int c[3]={0};
        int d=0,ad=0,x,y;
        for(int i=0; i<moves.size(); i++)
        {
            x=moves[i][0];
            y=moves[i][1];
            if(i%2==0)
            {
                r[x]++;
                c[y]++;
                if(x==y)
                    d++;
                if(x==2-y)
                    ad++;
            }
            else
            {
                r[x]--;
                c[y]--;
                if(x==y)
                    d--;
                if(x==2-y)
                    ad--;
            }
            if(r[x]==3 || c[y]==3 || d==3 || ad==3) return "A";
            if(r[x]==-3 || c[y]==-3 || d==-3 || ad==-3) return "B";
        }
        if(moves.size()<9)
            return "Pending";
        else
            return "Draw";
    }
};
