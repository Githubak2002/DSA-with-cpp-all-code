void nextPermutation(vector<int> &nums)
{
  int tmp = 0, index = -1;
  for (int i = nums.size() - 2; i >= 0; i--)
  {
    if (nums[i] < nums[i + 1])
    {
      index = i;
      // cout<<"index = "<<index<<endl;
      break;
    }
  }

  for (int k = nums.size() - 1; k > index; k--)
  {
    if (nums[index] < nums[k])
    {
      swap(nums[index], nums[k]);
      break;
    }
  }
  sort(nums.begin() + index + 1, nums.end());
}