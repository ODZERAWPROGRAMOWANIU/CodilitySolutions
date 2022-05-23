 #include <math.h>
    int solution(int N) {
    int temp=0;
    for (unsigned int i =1; i*i<=unsigned  (N); i++) {
        if (N%i==0) {
            temp++;
        }
    }
    if (N==(int)sqrt (N)*(int) sqrt (N)) {
        return temp*2-1;
    }
    else {
        return temp*2;
    }
}
