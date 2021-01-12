#include <iostream>
using namespace std;


namespace heesung{
    int mk_arr(int *ptr)
    {
        size_t count = 100;
        unsigned char R_G_B[3];
        for (size_t i = 0; i < count; i++)
        {
            ptr[i] = i+1;
        }
        // I want to know how to make list in list
        return 0;
    }
};

namespace{
    //이름을 지정하지 않은 namesapce는 안에서만 사용이 가능하다. static 느낌이다.
    //해당 파일에서만 접근이 가능하다.
    //정적 변수
    int hello_world()
    {
        cout << "hello world" << endl;
    }
}

int main()
{
    int a;  
    int counts = 100;
    cout << "hello world" << endl;
    cin >> a;
    cout << "What you have give us is " << a << endl;
    
    
    size_t count = 100;
    int opencv_arr[100]; 
    for (size_t i = 0; i < count; i++)
    {
        opencv_arr[i] = i;
        cout << i << endl;
    }
    // I want to know how to make list in list

    heesung::mk_arr(opencv_arr);
    cout << "[" << endl;
    for (int i = 0; i < counts; i++)
    {
        cout << i << ", ";
    }
    cout << "]" << endl;
    
    hello_world();
}
//shift가 alt 단축키이네
//control + shift + p 
//install gcc compiler or g++ compiler
//control + shift + B => build
//control + alt + r => executed
//F5 => Debuging
//includePath, add header file to division compiling