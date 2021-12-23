#include <math.h>
int main(){
int n = 11;
int result;
for (int i = 2; i < sqrt(n); i++){
if ( n % i == 0)
result = 0;
break;
if ( n % i == 1)
result = 1;
}

return 0;
}
