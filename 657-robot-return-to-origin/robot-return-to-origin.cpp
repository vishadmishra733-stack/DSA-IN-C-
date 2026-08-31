class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0;
        int y=0;
        for(int i=0;i<moves.size();i++){
         if(moves[i]=='U'){
            y=y+1;
         }
         if(moves[i]=='D'){
            y=y-1;
         }
         if(moves[i]=='R'){
            x=x+1;
         }
         if(moves[i]=='L'){
            x=x-1;
         }


        }
        if(x==0 &&y==0){
         return true;
        }
        return false;
    }
};