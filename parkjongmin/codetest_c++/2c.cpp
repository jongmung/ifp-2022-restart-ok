//두 줄에 걸쳐 "강한친구 대한육군"을 한 줄에 한 번씩 출력한다.
#include <iostream>
using namespace std;
int main(){
    cout << "강한친구 대한육군\n" << "강한친구 대한육군" << endl;
    return 0;   }

//첫째 줄에 A+B를 출력한다.
#include <iostream>
using namespace std;  // std 를 미리 지정 해준다
int main(){
    int a,b;
    cin >> a >> b;   // cin >> 입력받을 변수 cout << 출력
    cout << a+b << endl;  // 마지막엔 endl; 아니면 '\n';
    return 0;   }

//첫째 줄에 A-B를 출력한다.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    cout << a-b << endl;
    return 0;
}

//첫째 줄에 A*B를 출력한다.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    cout << a*b << endl;
    return 0;
}

//첫째 줄에 A/B를 출력한다.(소수점 9자리수 이상 받아야 정답인정)
#include <iostream>
using namespace std;
int main(){
    double a,b;  //double형 선언
    cin >> a >> b;
    
    cout << fixed;  //소수점 고정_ 소수점 아래부터 유효숫자를 세겠다는 명령어
    cout.precision(9); //cout.precision(숫자)_유효숫자 표기 명령어_소수점 상관없이 전체 자리 숫자를 고정
    cout<<a/b<<endl;
    return 0;
}

//첫째 줄에 A+B, 둘째 줄에 A-B, 셋째 줄에 A*B, 넷째 줄에 A/B, 다섯째 줄에 A%B를 출력한다.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    cout << a+b << '\n' << a-b << '\n' << a*b << '\n' << a/b << '\n' << a%b << endl;
    return 0;
}