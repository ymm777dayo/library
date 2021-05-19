template<typename T>
T ADD(t a, T b){
  T res;
  return __builtin_add_overflow(a, b, &res) ? numeric_limits<T>::max() : res;
}

template<typename T>
T MUL(t a, T b){
  T res;
  return __builtin_mul_overflow(a, b, &res) ? numeric_limits<T>::max() : res;
}

//オーバーフローしたら最大値を返す加法・乗法
