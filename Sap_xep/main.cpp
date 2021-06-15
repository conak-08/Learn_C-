#include <iostream>

using namespace std;

void Nhap(int A[], int n){
  for(int i = 0; i < n; i++){
    cin >> A[i];
  }
}

void Xuat(int A[], int n){
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      int T;
      if (A[i] > A[j]){
        T = A[j];
        A[j] = A[i];
        A[i] = T;
      }
    }
  }

  for(int i = 0; i < n; i++){
    cout << A[i] << " ";
  }
  cout << endl;
}


int main(){
  int n;
  cout << "Nhap n: "; cin >> n;
  int A[n];
  Nhap(A, n);
  Xuat(A, n);
}