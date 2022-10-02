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