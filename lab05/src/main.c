int main(){
int n = 7;
int result;
for (int i = 2; i < n; i++){
if ( n % i == 0)
result = 0;
break;
if ( n % i == 1)
result = 1;
}

return 0;
}
