 #include <iostream>


 void printBinary(int num){
    while(num > 0){
        int remain = num % 2;
        num/=2;
        std::cout<<remain<<" ";
    }
    std::cout<<std::endl;
 }
 int main(){
    int n = 5;
    printBinary(n);
    int res = n ^ (1<<1);

    printBinary(res);
    std::cout<<res<<" ";
 }