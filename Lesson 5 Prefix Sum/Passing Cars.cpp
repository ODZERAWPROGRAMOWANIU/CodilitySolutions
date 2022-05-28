int solution(vector<int> &A)
{
  long long result = 0;
  int sumOfE = 0;
  for (auto it : A)
  {
    if (it == 0)
      sumOfE++;
    if (it == 1)
      result += sumOfE;
  }
  if (result > 1000000000)
    return -1;
  return result;
}
