string reverseWord(string str){
    
  //Your code here
  int n = str.length();
  for(int i = 0 ; i <  n/2 ; i  ++)
  {
      swap(str[i] , str[n-i-1]);
  }
  return str;
}
