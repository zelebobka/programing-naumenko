int main()
{
int ticket = 521323;
int num1 = 0;
int num2 = 0;
int num3 = 0;
int num4 = 0;
int num5 = 0;
int num6 = 0;
num1 = ticket % 10; 
num2 = ticket / 10 % 10;
num3 = ticket / 100 % 10;
num4 = ticket / 1000 % 10;
num5 = ticket / 10000 % 10;
num6 = ticket / 100000 % 10;

unsigned int right = num1 + num2 + num3;
unsigned int left = num4 + num5 + num6;
int result;
if (right == left)
  result = 1;
else
  result = 0;

return 0;
}
