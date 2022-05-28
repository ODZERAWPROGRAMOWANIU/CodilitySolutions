int solution(vector<int> &A)
{
    int min = A[0];
    int temp = 0;
    int maxProfit = 0;
    if (A.size() == 0)
    {
        return 0;
    }
    else
        for (int i = 1; i < A.size(); i++)
        {
            if (A[i] < min)
            {
                min = A[i];
                temp = 0;
            }
            else
            {
                temp += (A[i] - A[i - 1]);
            }
            if (maxProfit < temp)
            {
                maxProfit = temp;
            }
        }
    return maxProfit;
}
