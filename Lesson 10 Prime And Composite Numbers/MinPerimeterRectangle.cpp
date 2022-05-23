#include <math.h>
int solution(int N) {
    for (int i=sqrt (N); i>=1; i--) {
        if (N%i==0) {
            return (2*(i+N/i));
            break;
        }
    }
}
