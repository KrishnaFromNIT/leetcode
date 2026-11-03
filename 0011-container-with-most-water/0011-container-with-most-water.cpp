class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0,rp=height.size()-1;
        int fin_vol=0;
        while(lp<rp){
            int hei=min(height[lp],height[rp]);
            int w=rp-lp;
            int vol=w*hei;
            if(height[lp]<height[rp]){
                lp++;
            }else{
                rp--;
            }
            fin_vol=max(vol,fin_vol);
        }
        return fin_vol;
    }
};