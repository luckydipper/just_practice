#include <iostream>

//reference는 cpp에서 포인터가 야기하는 많은 문제점들을 보완하고자 나왔다.
//reference는 제약이 조금 있다. refernce를 쓸 수 있다면 reference 쓰고, 그럴 수 없다면 pointer를 써야한다.

namespace inable_reference
{
    int constant_reference()
    {
        int not_ref_const4 = 4;
        int &ref = not_ref_const4; //상수를 참조할 수는 없음. lvalue : 왼쪽에 오는 변수가 와야한다.
        return 0;
    }
    int array_referenc()
    {
        //There shall be no references to references, no arrays of references, and no pointers to references
        //주소값이 존재한다라는 의미는 해당 원소가 메모리 상에서 존재한다 라는 의미와 같다.
        //하지만 레퍼런스는 특별한 경우가 아닌 이상 메모리 상에서 공간을 차지 하지 않는다.

        //하지만 배열들의 reference, reference to array는 가능하다.
        int arr[][10] = 
                    {
                        {0,1,2,3,4,5,6,7,8,9},
                        {10,11,12,13,14,15,16,17,18,19}
                    };
        
        //reference to array
        int (*prt_2_arr)[10] = arr; //int (*prt_2_arr)[2][10] = arr; -> error
        int (&ref_2_arr)[2][10] = arr;
        
        std::cout << *(prt_2_arr[1] + 6) << std::endl;
        return 0;
    }
}



namespace ptr
{// 포인터에 타입이 있는 이유는 무엇인가? 어차피 32bit에선 4byte 64bit에선 8byte의 공간을 차지하고 있는데 말이다.
// ex 왼쪽 코드의 마지막 줄에서, int 형, 즉 4byte를 넣었는데, p는 64bit에서 8byte야. 얼마나 읽어야할지 정해줘야 해.
// 왜냐면 p엔 a의 시작 주소만 들어가 있어
//int a;       int a;
//pointer *p;  int *p;
//p = &a;      p = &a;
//*p = 4;      *p = 4;

    int change2five(int* num)
    {
        *num = 5;
        int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
        std::cout << "arr + 1 : " << arr + 1 << " arr[1] + 1 : " << arr[1] + 1 << std::endl;
        int (*arr_ptr)[3] = arr;
        return 1;
    }

    int change2two_by_reference(int &ref)
    {
        ref = 2;
        return 0;
    }
}

namespace reference
{//포인터 말고, c++에서 변수를 가르키는 또 다른 방법 참조자
//참조자를 사용하게 되면 불필요한 & 와 * 가 필요 없기 때문에 코드를 훨씬 간결하게 나타낼 수 있다.
    //포인터와 달리, 생성과 동시에 formating 해줘야한다.
    //레퍼런스가 한 번 별명이 되면 절대로 다른 이의 별명이 될 수 없다.
    //메모리 상에 존재하지 않을 수 도 있다. 왜냐, another_a 가 쓰이는 자리는 모두 a 로 바꿔치기
    int refere()
    {
        int a = 3;
        int* a_ptr = &a;
        int& another_a = a;
        //a의 또 다른 이름을 지정할 때 이용함.
        int*& another_a_ptr = a_ptr; // &a는 안되는데?
        std::cout << "reference(참조자) " << another_a << std::endl;
    }

}

namespace array
{
    int check_array_pointer()
    {
        int arr[3] = {1,2,3};
        int *arr_ptr = arr;
        std::cout << "size of arr is " << sizeof(arr) << std::endl; 
        std::cout << "size of arr pointer is " << sizeof(arr_ptr) << std::endl; 


        int arrs[10] = {100, 98, 97, 95, 89, 76, 92, 96, 100, 99};
        int* parr = arrs;
        int sum = 0;

        while (parr - arrs <= 9) {
            std::cout << arrs << parr << std::endl;
            sum += (*parr);
            parr++;
        }
        std::cout << "the average of them is " << sum / 10 << std::endl;

        return 0;
    }
}



int main()
{
    std::cout << "--- main start ---" << std::endl;


    int first_num = 8;
    std::cout << "The fist number is " << first_num << std::endl;
    ptr::change2five(&first_num);
    std::cout << "Changed value is " << first_num << std::endl;
    ptr::change2two_by_reference(first_num);
    std::cout << "Changed value is " << first_num << std::endl;
    reference::refere();



    array::check_array_pointer();

    inable_reference::array_referenc();
    std::cout << "--- main end ---" << std::endl;
}
