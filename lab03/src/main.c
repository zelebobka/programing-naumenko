int main(){
int number = 5461;
int a = 0;
int b = 0;
int c = 0;
int d = 0;
a = number % 10;
b = number / 10 % 10;
c = number / 100 % 10;
d = number / 1000 % 10;
int r = a + b + c + d;

return 0;
}
