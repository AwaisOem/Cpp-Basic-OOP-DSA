#include<bits/stdc++.h>
// int my (std::string n )
// {std::cout<<n<<std::endl;
// return 2;}
// long power (int n , int p)
// {
//     long pow =  1;
//     for (int i = 1; i <= p; i++)
//         pow*=n;

//     return pow;
// }
inline auto ReturnValue(int v)->int { return v;}
auto PrintVal(int n)->void
{
   std::cout<<n<<std::endl;
}
////function as parameter

// auto forEach(const std::vector<int> & v , int(*func)(int))->void
// {
//     for (int i : v)
//         std::cout<<func(i)<<std::endl;
// }

auto forEach(const std::vector<int> & v ,const std::function <int(int)>& func)->void
{
    for (int i : v)
        std::cout<<func(i)<<std::endl;
}
auto main()->int
{
    // //function pointers


    // typedef int(*functionPointerForIntAndStringParameter)(std::string); // turning name of any data type with typedef
    // functionPointerForIntAndStringParameter a= my;
    // std::cout<<a("AWAIS")<<std::endl;

    // long(*pow)(int ,int);
    // pow= power;
    // std::cout<<pow(2,3); 
    // std::vector<int> vec   = {0,1,2,3,4,5,6};
    // forEach(vec ,ReturnValue);

    // // lambda functions OR disposible quick functions

    // std::vector<int> vec1   = {0,1,2,3,4,5,6};
    // int as = 4;
    // auto d  = [](int value){return value;};
    // auto d2  = [&](int value){return as;};
    // auto d3  = [=](int value)mutable{as=5;return as;};
    // forEach(vec1 ,d);

    // //Example : use in API where we know sometimes in future it will use to run that function so we define that eailier;

    // let numbers = arr.filter((e)=>{return e==3;})
    std::vector<int> vec1   = {0,1,2,3,4,5,6};
    auto numbers = std::find_if(vec1.begin(), vec1.end(),[](int v){return v==5;});
    std::cout<<*numbers<<std::endl;






    return 0;   
}