int endingCol = n-1;
  int i=0,j=0;
  for (int col = endingCol; col >=0 ; col--)
  {
    for (int row = 0; row < n; row++)
    {
      ans[row][col] = matrix[i++][j];
    }
    j++;
  }