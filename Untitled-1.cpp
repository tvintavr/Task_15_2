#include <iostream>
#include <vector>
#include <cassert>
#include <limits.h>


int main() {
    std::vector<int> a = {1,2,3,4,5,6,7,8,9};

    std::cout<<"Введите число: ";
    int max;
    std::cin>>max;

    int first=0;
    int last=0;

    bool found=false;

    std::cout<<a.size();
    std::cout<<a[0];
    std::cout<<a[8];

    

    for (int i=0;i<a.size()-1 && !found;i++) {
        for (int j=i+1;j<a.size() && !found;j++) {
            int sum;
            sum=a[i]+a[j];
            if (sum==max) {
                first=a[i];
                last=a[j];
                found=true;
            }
        }
    }
    std::cout<<std::endl<<"sum: "<<max<<" first: "<<first<<" last: "<<last;
}