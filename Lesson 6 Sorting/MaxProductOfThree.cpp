#include <algorithm>
int solution(vector<int> &A)
{
  sort(A.begin(), A.end());
  int firstTwo = A[0] * A[1];
  int lastTwoWihtoutLast = A[A.size() - 3] * A[A.size() - 2];
  return max(firstTwo, lastTwoWihtoutLast) * A.back();
}
