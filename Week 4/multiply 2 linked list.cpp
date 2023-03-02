long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here
  long long n1 = 0;
  long long n2 = 0;
  long long mod = 1e9 + 7;
  
    while(l1!=NULL)
    {
        n1 = n1*10+l1->data;
        l1 = l1->next;
        n1%=mod;
    }
    while(l2!=NULL)
    {
        n2 = n2*10+l2->data;
        l2 = l2->next;
        n2%=mod;
    }
    return (n1*n2)%(mod);
  
  
}
