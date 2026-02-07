/*
    이석원은 조규현과 백승환에게 상대편 마린(류재명)의 위치를 계산하라는 명령을 내렸다. 
    조규현과 백승환은 각각 자신의 터렛 위치에서 현재 적까지의 거리를 계산했다.

    조규현의 좌표 $(x_1, y_1)$와 
    백승환의 좌표 $(x_2, y_2)$가 주어지고, 
    
    조규현이 계산한 류재명과의 거리 $r_1$과 
    백승환이 계산한 류재명과의 거리 $r_2$가 주어졌을 때, 
    류재명이 있을 수 있는 좌표의 수를 출력하는 프로그램을 작성하시오.

    (쉽게 말해: 원 두 개가 안 만남 / 한 점 / 두 점 / 완전히 겹침 중 어디인지 판단)

    sqrt() : 루트

    pow(a,2) : a²

    abs() : 절댓값

    if / else if / else : 조건 분기

    피타고라스 a제곱 + b제곱 = c제곱
    빗변의 제곱은 나머지 두 변의 제곱의 합과 같다.

    빗변을 구하려면
👉 **양변에 루트 씌우는 게 “정해진 절차”**임.

    가로 길이 = x2 - x1

    세로 길이 = y2 - y1

    빗변 = 두 점 사이 거리 d

    ❌ “왜 루트?”
    ⭕ “피타고라스라서 그냥 그렇게 생김”

    “제곱으로 되어 있어서, 실제 거리로 바꾸려면 루트를 씌워야 하니까”

    ✔️ d는 실수로 나올 수 있어서 double
    ✔️ 두 점 사이의 ‘진짜 거리’를 구하려고 √(루트)를 씌운 것

    교점 1개: d = |r1 − r2| (작은 원이 안에서 접함), d = r1 + r2 (밖에서 접함)

    교점 2개: |r1 − r2| < d < r1 + r2

    교점 0개: d < |r1 − r2| (작은 원이 완전히 안에 있음), 
    d > r1 + r2 (서로 멀어서 안 닿음)

    교점 ∞개: d = 0, r1 = r2
    */
/*
    (설명)
    → 두 원이 만나는 점의 개수를 묻는 문제다.
    → 각 사람 기준 거리 = 반지름, 좌표 = 원 중심

    조규현의 좌표 → (x1, y1) 계산한 거리 → r1

    백승환의 좌표 → (x2, y2) 계산한 거리 → r2
*/
#include <iostream> //<iomanip>
#include <cmath>
using namespace std;

#include <iostream> 
#include <cmath> 
using namespace std; 
int main () {
  int T;
  cin >> T;
  while(T--) {
    int x1,y1,r1,x2,y2,r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    
    if (d == 0 && r1 == r2) {
     cout << -1 << "\n";
    } else if (d < abs(r1 - r2) || r1 + r2 < d) {
      cout << 0 << "\n";
    } else if (d == r1 + r2 || d == abs(r1 - r2)) {
      cout << 1 << "\n";
    } else if (abs(r1 - r2) < d && d < abs(r1 + r2)) {
      cout << 2 << "\n";
    }
  }
}
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    /*
        pow → 함수, 느림, double

        * → 연산자, 빠름, 정확
        
        오버플로우 방지 때문에 long long을 쓴다
    */
    int T;
    cin >> T;
    while(T--) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        long long dx = x1 - x2;
        long long dy = y1 - y2;
        long long dist2 = dx*dx + dy*dy; // 거리의 제곱
        long long sum = r1 + r2;
        long long diff = abs(r1 - r2);

        long long sum2 = sum * sum;
        long long diff2 = diff * diff;

        if (dist2 == 0 && r1 == r2) { // 교점이 무한
            cout << "-1" << "\n";
        } else if (dist2 > sum2 || dist2 < diff2) { // 교점이 0개
            cout << "0" << "\n";
        } else if (dist2 == sum2 || dist2 == diff2) { // 교점이 1개
            cout << "1" << "\n";
        } else if (diff < dist2 && dist2 < sum) { // 교점이 2개
            cout << "2" << "\n";
        }
    }
}

/*

    int T;
    cin >> T;
    while(T--) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        if (d == 0 && r1 == r2) { // 교점이 무한
            cout << "-1" << "\n";
        } else if (r1 + r2 < d || d < abs(r1 - r2)) { // 교점이 0개
            cout << "0" << "\n";
        } else if (abs(r1 - r2) == d || r1 + r2 == d) { // 교점이 1개
            cout << "1" << "\n";
        } else if (abs(r1 - r2) < d && d < r1 + r2) { // 교점이 2개
            cout << "2" << "\n";
        }
    }

*/
/*
    왜 T를 주냐면
    문제 상황을 사람 말로 바꾸면 이거야

    “이런 상황이 여러 번 주어질 건데,
    각 상황마다 결과를 하나씩 출력해라.”

    그래서 컴퓨터한테 먼저 이렇게 말하는 거임:

    “야, 총 몇 번 계산해야 하는지 먼저 알려줄게 → T번이야”

    예시가 이렇다고 가정해보자
    3
    0 0 13 40 0 37
    0 0 3 0 7 4
    1 1 1 1 1 5


    이게 무슨 뜻이냐면

    3 → 테스트케이스가 3개

    그 아래 줄 한 줄 = 문제 하나

    즉,
    1️⃣ 첫 줄 → 투 터렛 문제 1번
    2️⃣ 둘째 줄 → 투 터렛 문제 2번
    3️⃣ 셋째 줄 → 투 터렛 문제 3번
*/