int solution(vector<int> &A) {
    float smallestSlice = INT32_MAX;
    int smallestIndex = 0;
    for (int i = 0; i < A.size () -2; i++)
    {
      float temp = (float) (A [i] + A [i+1])/2;
      float temp1 = (float) (A [i] + A [i+1] + A [i+2])/3;
      if (smallestSlice > temp || smallestSlice > temp1)
      {
      smallestSlice = min (temp, temp1);
      smallestIndex  = i;
      }
    }
      if ((A [A.size ()- 2] + A [A.size () -1]) /2 < smallestSlice)
      {
        smallestIndex = A.size ()- 2;
      }
    return smallestIndex;
}
