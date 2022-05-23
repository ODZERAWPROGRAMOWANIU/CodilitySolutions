#include <algorithm>
int solution(vector<int> &A) {
    sort (A.begin (), A.end ());
    int temp=1;
    for (auto it:A) {
        if (it==temp) {
            temp++;
        }
    }
    return temp;
}
