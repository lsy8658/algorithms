// 두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    double a, b;
    cin >> a >> b;
    cout << fixed << a / b;

    return 0;
}

// 정수처럼 계산하면 → 정수 결과만 나옴

// 실수처럼 계산해야 → 실수 결과가 나옴

/*
    fixed
    → 소수점 아래 기준으로 출력하겠다는 선언

    setprecision(9)
    → 소수점 아래 9자리까지 보여줘라는 뜻

    cout << fixed << setprecision(9) << a / b;

    👉 “실수 결과를 소수 9자리까지 정확하게 출력해라”
    

    #include <iomanip>
    → 출력 형식(포맷)을 다루는 도구 상자

    setprecision, fixed 같은 출력 조절 함수들이 들어 있음

    없으면 setprecision을 쓸 수가 없음

    👉 <iostream> = “출력하기”
    👉 <iomanip> = “어떻게 출력할지 꾸미기”
*/