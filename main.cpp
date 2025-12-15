#include <iostream>
#include <cmath>
using namespace std;

// Replit link: https://replit.com/@NoahBaba/ComparePizzas

int main() {
  std::cout << "Hello World!\n";
  cout << "Summer break...\n";

  float result1;
  float result2;
  float precio1;
  float precio2;
  //float reResult1;
  //float reResult2;
  

  cout<< "The 1st pizza's shape? (circle or square): ";
  string shape1;
  cin >> shape1;
  cout << "The 1st pizza's size? (in inches): ";
  float size1;
  cin >> size1;

  cout<< "The 2nd pizza's shape? (Circle or Square): ";
  string shape2;
  cin >> shape2;
  cout << "The 2nd pizza's size? (in inches): ";
  float size2;
  cin >> size2;
  if(shape1=="Circle"||"circle"){
    result1 = (2*3.14*(size1/2))/pow(size1,2);
  }
  else{
    result1=(pow(size1,2)/pow(size1, 2));
  }
  if(shape2=="Circle"||"circle"){
    result2 =((2*3.14*(size2/2))/pow(size2, 2));
  }
  else{
    result2= (pow(size2,2)/pow(size2, 2));
  }

  //cout << "What's the price of the 1st pizza?: ";
  //cin >> precio1;
  //cout << "What's the price of the 2nd pizza?: ";
  //cin >> precio2;

  //reResult1=result1/precio1;
  //reResult2=result2/precio2;
  
  if(result1 > result2){
    cout << "The 1st pizza is the best option.";
  }
  else if(result1<result2){
    cout << "The 2nd pizza is the best option.";
  }
  else if(result1==result2){
    cout << "The pizzas are equal. Your choice.";
  }
  //else if(cir1>cir2){
   // cout << "The 1st pizza is the best option.";
  //}
  //else if(cir2>cir1){
    //cout << "The 2nd pizza is the best option";
  //}
  //else if(cir1==cir2){
    //cout <<  "The pizzas are equal. Your choice.";
  //}
  //else if(ar1>cir2){
    //cout << "Pizza 1 is the best option";
  //}
  //else if(cir2>ar1){
    //cout << "Pizza 2 is the best option";
  //}
  //else if(cir1>ar2){
    //cout << "Pizza 1 is the best option";
  //}
  //else if(ar2>cir1){
   // cout <<  "Pizza 2 is the best option";
  //}

  
  // Take out value from function, stroe it in global scope, and compare the 2 measurements.

}
