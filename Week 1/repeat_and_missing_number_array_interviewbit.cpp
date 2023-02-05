vector<int> Solution::repeatedNumber(const vector<int> &A) 
{
    long long int sum = 0 , sumsq = 0;
    long long int n = A.size();
    for(int i = 0 ; i < n ; i ++)
    {
        sum += (long long int)A[i];
        sumsq += (long long int)A[i]*A[i];
    }
    
    sum -= (n*(n+1))/2;
    sumsq -= (n*(n+1)*(2*n + 1))/6;
    
    long long int dif = sum;
    long long int sumi = sumsq/sum;
    return {(dif + sumi)/2,(sumi - dif)/2};
}
