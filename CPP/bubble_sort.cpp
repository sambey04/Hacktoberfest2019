#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int> &v)
{
   int n = v.size();
   for(int i=0; i < n-1; i++){
      for(int j=0; j < n-i-1; j++){
         if(v[j] > v[j+1]){
            //swap;
            int tmp = v[j];
            v[j] = v[j+1];
            v[j+1] = tmp;
         }
      }
   }
}

int main()
{
   vector<int > v{4, 6,3, 65, 2,32, 46, 877,12, 34};
   bubble_sort(v);
   for(int i:v){
      cout << i << ' ';
   }
   cout << '\n';
   return 0;
}