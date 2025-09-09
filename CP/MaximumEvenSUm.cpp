#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        long long result = -1;

        for (long long i = 1; i * i <= b; ++i) {
            if (b % i == 0) {
                long long k1 = i;
                long long k2 = b / i;
                
                long long sum1 = a * k1 + b / k1;
                if (sum1 % 2 == 0){
                    result = max(result, sum1);
                }

               
                long long sum2 = a * k2 + b / k2;
                if (sum2 % 2 == 0)
                {
                    result = max(result, sum2);
                }
            }
        }
        
        cout << result << endl;
    }

    return 0;
}
