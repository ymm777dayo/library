template <typename T>
T gcd(T a, T b){
  if(a<b)return gcd(b, a);
  T r;
  while((r=a%b)){
    a = b;
    b = r;
  }
  return b;
}

template <typename T>
T lcm(T a, T b){
  return (a / gcd(a, b)) * b;
}

//拡張euclidの定理
