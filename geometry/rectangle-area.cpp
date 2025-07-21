class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1 = abs(ax1 - ax2)*abs(ay1-ay2);
        int area2 = abs(bx1 - bx2)*abs(by1-by2);
        int cx1 = min(ax2,bx2);
        int cx2 = max(ax1,bx1);
        int cy1 = min(ay2,by2);
        int cy2 = max(ay1,by1);
        int area3 = abs(cx1 - cx2)*abs(cy1 - cy2);
        if(cx1 - cx2 < 0){
            area3 = 0;
        }
        if(cy1 - cy2 < 0){
            area3 = 0;
        }
        return area1+area2-area3;
    }
};