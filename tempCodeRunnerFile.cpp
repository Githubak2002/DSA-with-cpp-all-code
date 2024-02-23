string addBinary(string a, string b) {
  int c = 0,res = 0;
  string sum = "";
  int l1 = a.length()-1;
  int l2 = b.length()-1;
  int bn1,bn2;

  while (l1>=0 || l2>=0 || c>0)
  {
    bn1 = (l1>=0) ? (a[l1--] - '0') : 0;
    bn2 = (l2>=0) ? (b[l2--] - '0') : 0;
    // cout<<bn1<<" + "<<bn2<<" = ";
    res = bn1+bn2+c;
    if(res == 3){
      sum.push_back('1');
      c = 1;
    }
    else if(res == 2){
      sum.push_back('0');
      c = 1;
    }
    else{
      c= 0;
      sum.push_back(res+'0');
    }
    // cout<<sum<<endl;

  }
  reverse(sum.begin(), sum.end());
  return sum;

}

