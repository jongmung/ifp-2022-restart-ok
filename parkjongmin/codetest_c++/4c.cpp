//첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C,
//셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    cout << (A+B)%C << endl;
    cout << ((A%C) + (B%C))%C << endl;
    cout << (A*B)%C << endl;
    cout << ((A%C) * (B%C))%C << endl;
    return 0;
}
//(세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.
//첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력한다.
#include <iostream>
using namespace std;
int main(){
    int A, B;
    cin >> A >> B;
    cout << A * (B % 10) << "\n"; // 385%10을 하면 10을 나눠준 값의 나머지라 5가 반환
    cout << A * ((B % 100) / 10) << "\n"; // 385%100을 하면 85가 나오고 85%10을 하면 8이 반환
    cout << A * (B / 100) << "\n"; // 385%100을 하면 3이 나옴
    cout << A * B;
 
    return 0;
}
//고양이 출력
#include <iostream>
using namespace std;
int main(){
    cout << "\\    /\\" << endl;
    cout << " )  ( ')" << endl;
    cout << "(  /  )" << endl;
    cout << " \\(__)|" << endl;
    return 0;
}
//첫째 줄에 다음 세 가지 중 하나를 출력한다.
// A가 B보다 큰 경우에는 '>'를 출력한다.
// A가 B보다 작은 경우에는 '<'를 출력한다.
// A와 B가 같은 경우에는 '=='를 출력한다.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if (a>b){          // if조건문 기본 틀
        cout<< ">";    // if (조건) {
    }                  //     처리
    else if (a<b){     // }
        cout<< "<";
    }
    else{
        cout << "==" << endl;
    }
    return 0;
}
//시험 점수를 입력받아 90 ~ 100점은 A, 80 ~ 89점은 B,
//70 ~ 79점은 C, 60 ~ 69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    if ( 90 <= a && a <= 100) {  //조건이 잘 파악뒤 앤드 연산자를 사용
        cout<<"A";
    }
    else if (80 <= a && a <90){
        cout<<"B";
    }
    else if (70 <= a && a <80){
        cout<<"C";
    }
    else if (60 <= a && a <70){
        cout<<"D";
    }
    else {
        cout<<"F";
    }
    return 0;
}
//연도가 주어졌을 때, 윤년이면 1, 아니면 0을 출력하는 프로그램을 작성하시오.
//윤년은 연도가 4의 배수이면서, 100의 배수가 아닐 때 또는 400의 배수일 때이다.
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    if ( (a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0) ){
        cout<<"1";
    }
    else {
        cout<<"0";
    }
    return 0;
}
//점의 좌표를 입력받아 그 점이 어느 사분면에 속하는지 알아내는 프로그램을 작성하시오.
//단, x좌표와 y좌표는 모두 양수나 음수라고 가정한다.
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if (a>0 && b>0){
        cout<<"1";
    }
    else if (a<0 && b>0){
        cout<<"2";
    }
    else if (a<0 && b<0){
        cout<<"3";
    }
    else if (a>0 && b<0){
        cout<<"4";
    }
    return 0;
}
//2884
//첫째 줄에 두 정수 H와 M이 주어진다. (0 ≤ H ≤ 23, 0 ≤ M ≤ 59)
//그리고 이것은 현재 상근이가 설정한 놓은 알람 시간 H시 M분을 의미한다.
//입력 시간은 24시간 표현을 사용한다.
//24시간 표현에서 하루의 시작은 0:0(자정)이고,
//끝은 23:59(다음날 자정 1분 전)이다. 시간을 나타낼 때,
//불필요한 0은 사용하지 않는다.
//45분 일찍 알람 설정하기
#include <iostream>
using namespace std;
int main(){
    int h,m;
    cin>>h>>m;
    if (m<45){    //분이 45분보다 작으면
        m += 15;  //분에 15를 더해주고
        h--;      //시간에 1시간을 빼준다
    }
    else{
        m -= 45;   //분이 45분이상이면 45분을 빼준다
    }
    if (h<0){      //시간이 0밑으로 내려가면
        h=23;      //23으로 바꿔준다
    }
    cout<<h<<" "<<m;
    return 0;
}
//2480
//같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다. 
//같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다. 
//모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다. 
 #include <iostream>
 using namespace std;
 int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a==b){
        if (b==c){
        cout<<10000+a*1000;
        }
        else {
            cout<<1000+a*100;
        }
    }
    else if(b==c){
        if (a==b){
        cout<<10000+a*1000;
        }
        else {
            cout<<1000+b*100;
        }
    }
    else if(a==c){
        if (a==b){
        cout<<10000+a*1000;
        }
        else {
            cout<<1000+a*100;
        }
    }
    else if(a != b && b != c || a != c){
        if (a>b && a>c) {
            cout<<a*100;
        }
        else if (a<b && a>c){
            cout<<b*100;
        }
        else if (a>b && a<c){
            cout<<c*100;
        }
        else if (a<b && a<c){
            if (b<c) {
                cout<<c*100;
            }
            else{
                cout<<b*100;
            }
        }
    }
    return 0;
 }