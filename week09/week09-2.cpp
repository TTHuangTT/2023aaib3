class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) / 2; //這個方法是錯!
        if(low%2==1 || high%2==1) ans++; //頭尾有奇數,就要+1
        return ans; //先不要送出, 我們在Tetcase 測資,多試幾個
    }
};