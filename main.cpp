#include<iostream>

void ways(int num,char s,char h,char d){
    if(num == 0){
        return;
    }
    ways(num-1,s,d,h);
    std::cout<<s<<" --> "<<d<<'\n';
    ways(num-1,h,s,d);
}

int main(){
    int num;
    std::cout<<"Enter the number of discs : ";
    if(!(std::cin>>num)){
        std::cout<<"Invalid input.\n";
        return 0;
    }
    if(num<1){
        std::cout<<"Invalid input.\n";
        return 0;
    }
    ways(num,'A','B','C');
    return 0;
}