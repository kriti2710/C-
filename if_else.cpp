# include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter the value of n: ";
  cin>>n;
  if (n>=18) {
    cout<<"You can vote"<<endl;
    cout<<"You can Drive"<<endl;
  }
  else {
    cout<<"You can not vote"<<endl;
  }
}
