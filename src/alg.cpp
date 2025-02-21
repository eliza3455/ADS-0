// Copyright 2021 NNTU-CS
// Алгоритм Евклида
int gcd(int a, int b){
   while (b != 0) {
      int temp = b;
      b = a % b;
      a = temp;
    }
    return a;
}
  
