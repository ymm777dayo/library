template <typename T>
bool prime_check(T n){
  if(n==1||n==0)return false;
  for(T i = 2; i <= sqrt(n); i++){
    if(n%i==0)return false;
  }
  return true;
}

//O(√N)になる
