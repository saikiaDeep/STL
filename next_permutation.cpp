// next_permutation in STL is a built-in function which as the name suggests returns the next lexicographically 
// greater permutation of the 
// elements in the container passed to it as an argument.

// Does it accept any parameters?

// Yes, next_permutation() accepts two iterators (begin and end) of a container(example, an array or vector ) as parameters 
// and modifies the container to store the next lexicographically greater permutation of elements within the range [begin, end)

// Does it return anything?

// Yes, it returns true if a next lexicographically greater permutation is possible, otherwise, it returns false. 




//ARRAY
// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;

// int main() {
//     int arr[] = {1,3,2};
    
//     next_permutation(arr,arr+3);//using in-built function of C++
    
//     cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
//     return 0;
// }


//VECTOR
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<char> vec = {'a','b','c','d'};
    
    next_permutation(vec.begin(), vec.end());
    
    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]<<" "<<vec[3];
    
    return 0;
}