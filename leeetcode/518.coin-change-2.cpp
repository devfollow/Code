/*
 * @lc app=leetcode id=518 lang=cpp
 *
 * [518] Coin Change 2
 */

// @lc code=start
class Solution
{
public:
    int change(int amount, vector<int> &coins)
    {
        int size = coins.size();
        int dp[size + 1][amount + 1];

        for (int i = 0; i < size + 1; i++)
        {
            dp[i][0] = 1;
        }

        for (int i = 0; i < amount + 1; i++)
        {
            dp[0][i] = 1;
        }

        for (int i = 1; i < size + 1; i++)
        {
            for (int j = 1; j < amount + 1; j++)
            {
                if (j - coins[i - 1] < 0)
                    dp[i][j] = dp[i - 1][j];
                else
                {
                        dp[i][j]=max[dp[i-1][j],1+dp[i][j-coins[i-1]]]);
                }
            }
        }
        return dp[size][amount];
    }
};
// @lc code=end
