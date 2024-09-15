#include <iostream>
int findMax(int a,int b){
    int maxVal;
    if(a>b)
    maxVal=a;
    else
    maxVal=b;
    return maxVal;
}
int findMin(int x,int y){
    int minVal;
    if(x<y)
    minVal=x;
    else
    minVal=y;
    return minVal;
}
int square(int n){
    return n*n;
}
int main(){
    int maxResult=findMax(10,10);
    std::cout<<"Maximum: "<<maxResult<<std::endl;
    int minResult=findMin(5,3);
    std::cout<<"Minimum: "<<minResult<<std::endl;
    int squareResult=square(4);
    std::cout<<"Square: "<<squareResult<<std::endl;
    return 0;
}
