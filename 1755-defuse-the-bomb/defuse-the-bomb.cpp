class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n= code.size();
        vector<int> ans;
        if(k>0){
          int c= 0;
         for(int i=0;i<n;i++){
          int j=i+1;
          for(int a=1;a<=k;a++){
            if(j>n-1){
                j=0;
                }
            c+=code[j];
            j++;
          }
          ans.push_back(c);
          c=0;
         }
         return ans;
        }
if(k<0){
          int d= 0;
          int e=0;
      for(int q=0;q<n;q++){
          if(q==0){
            e=n-1;
          }
          else{ e =q-1;}
          for(int a=1;a<=-k;a++){
            if(e<0){e=n-1;}
            d+=code[e];
            e--;
          }
          ans.push_back(d);
          d=0;
         }
         return ans;
}
if(k==0){
    for(int b=0;b<n;b++){
        ans.push_back(0);
    }
    return ans;
}
return ans;
    }
};