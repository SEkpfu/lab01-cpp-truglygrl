#define _USE_MATH_DEFINES 
#include <iostream> 
//#include <cmath> 
#include <vector> 
using namespace std; 
 
//4 
  
//double f(double x) { 
// if (x >= -2.5 && x <= 2.5) { 
//  return 0.5 * pow(x, 4); 
// } 
// else if (x > 2.5) { 
//  return sqrt(2 * x + 1); 
// } 
// else { 
//  return (sin(M_PI * abs(x)) / (x - 3)); 
// } 
//} 
 
//5 
 
//bool isGood(double x, double y) { 
// if (x > 0 && x < 10 && y>0 && y < 10) { 
//  if (y<(10-x)) { 
//   return true; 
//  } 
//  else if (x > -5 && x < 0 && y>0 && y < 10) { 
//   return true; 
//  } 
//  else if (x > -10 && x < 10 && y<0 && y>-5) { 
//   if (x * x + y * y<+100 ) { 
//    return true; 
//   } 
//   else { 
//    return false; 
//   } 
//  } 
//  else { 
//   return false; 
//  } 
// } 
//} 
 
int main() { 
  
 //1 
 
 /*double a, b,d,c,d1; 
 cin >> a >> b >> d>>c>>d1; 
 double p1 = (a + b + d1) / 2; 
 double s1 = sqrt(p1*(p1 - a) * (p1 - b) * (p1 - d1)); 
 double p2 = (d + c + d1) / 2; 
 double s2 = sqrt(p2*(p2 - c) * (p2 - d) * (p2 - d1)); 
 cout << s1 + s2;*/ 
 
 //2 
 /*int a, b, c,z; 
 int k = 0; 
 cin >> a >> b >> c; 
 k = a + b + c; 
 (k % 2) ? cout << k << a * b * c :cout<< max(b, c);*/ 
 
 
 
 //3 
 /*int x; cin >> x; 
 double x2=x*x; 
 double x4=x2*x2; 
 double x7=x4*x2*x; 
 double x11=x7*x4; 
 cout<<x11-x7+x2-2;*/ 
 
 //4 
 /*double x; cin >> x; 
 cout << f(x) << endl;*/ 
 
 //5 
 /*int n; cin >> n; 
 while (n != 0) { 
  double x, y; 
  cin  >> x >> y ; 
  if (isGood(x, y)) { 
   cout << "YES" << endl; 
  } 
  else { 
   cout << "NO" << endl; 
  } 
  n--; 
 }*/ 
 
 
 //6 
 /*int n; cin >> n; 
 double s,k; 
 s = 0; 
 k = 1; 
 for (int i = 1; i < n; i++) { 
  s += sin(i); 
  k += 1 / s; 
 } 
 cout << k;*/ 
 
 //7 
 
 /*int n; 
 cin >> n; 
 int kol100 = 0, kol7 = 0, kol11 = 0; 
 double sum = 0; 
 vector<int> arr(n); 
 for (int i = 0; i < n; i++) { 
  cin >> arr[i]; 
  int x = arr[i]; 
  while (x > 999) { 
   x /= 10; 
  } 
  if (x == 100) { 
   sum += arr[i]; 
   kol100++; 
  } 
 } 
 for (int i = 0; i < n; i++) { 
  if (arr[i] %100==11) { 
   kol11++; 
  } 
 } 
 for (int i = 0; i < n; i++) { 
  if (arr[i]%7==0) { 
   kol7++; 
  } 
 } 
 cout << sum/kol100 << endl; 
 cout << kol7 << endl; 
 cout << kol11 << endl;*/ 
}