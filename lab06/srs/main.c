int main()
{
#define S 3
     int matrix[S][S] = {
        {1,3,5},
        {3,2,1},
        {2,2,2},
 };
     int multiMatrix[S][S] = {};
     for (int i = 0; i < S; i++) {
          for (int j = 0; j < S; j++) {
              for (int k = 0; k < S; k++) {
 multiMatrix[i][j] += (matrix[i][k]* matrix[k][j]);
          }
      }
  }
return 0;
}
