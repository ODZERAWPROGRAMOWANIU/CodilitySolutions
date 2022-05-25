int solution(vector<int> &A)
{
    int currentSlice = 0, maxSlice = A[0];
    for (auto it : A)
    {
        currentSlice += it;
        if (it > currentSlice)
        {
            currentSlice = it;
        }
        maxSlice = max(maxSlice, currentSlice);
    }
    return maxSlice;
}
