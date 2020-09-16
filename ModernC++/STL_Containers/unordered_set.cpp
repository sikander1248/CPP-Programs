  #include <iostream>
  #include <unordered_set>

  using namespace std;

  int main( )
  {
    unordered_set<int>  s = {12,21,23,32,45,56,12,21};

    for(int ele : s)
        cout << ele <<" ";

  }
