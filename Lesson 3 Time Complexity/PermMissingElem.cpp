#include <algorithm>
int solution(vector<int> &A) {
    sort (A.begin (), A.end ());
    if (A.empty ()) {
        return 1;
    }
    for (int i=0; i<A.size (); i++) {
        if (A [i]-i!=1) {
            return A [i]-1;
        }
    }
    return A.size ()+1;
}
