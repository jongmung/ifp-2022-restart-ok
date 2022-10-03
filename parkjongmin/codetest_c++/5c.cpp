//2739_구구단
//N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오.
//출력 형식에 맞춰서 출력하면 된다.
#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for (int i = 1; i < 10; i++){
            cout << a <<" * "<< i << " = " << a*i << endl;
    }
    return 0;
}
//for문 작성방법
//for(초기화; 조건식; 증감식){
//    반복할 처리 내용
//}
//초기화는 처음 1번만 실행
//초기화에는 반복문에서 사용할 변수를 선언하는데 사용
//조건식이 true일 경우 처리를 반복해서 사용

//10950_ A+B-3
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a;
    for(int i = 0; i < a; i++){
        cin>>b>>c;
        cout << b+c << endl;
    }
    return 0;
}

//8593_합
//n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;
int main(){
    int n;
    int m = 0;
    cin>>n;
    for (int i = 0; i < n+1 ;i++){
        m += i;
    }
    cout << m;
    return 0;
}

//25304_영수증
//첫째 줄에는 영수증에 적힌 총 금액 x가 주어진다.
//둘째 줄에는 영수증에 적힌 구매한 물건의 종류의 수 n이 주어진다.
//이후 n개의 줄에는 각 물건의 가격 a와 개수 b가 공백을 사이에 두고 주어진다.
#include <iostream>
using namespace std;
int main(){
    int x,n,a,b;
    int h=0;
    cin>>x>>n;
    for (int i = 0; i < n;i++){
        cin>>a>>b;
        h += a*b;
    }
    if (h==x){
        cout<<"Yes";
    }
    else {
        cout<<"No";
    }
    return 0;
}

//15552_빠른 A+B
//각 테스트케이스마다 A+B를 한 줄에 하나씩 순서대로 출력한다.
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);	// C, C++ 동기화 해제
    cin.tie(NULL);	// 입력과 출력을 분리, cin.tie(nullptr), cin.tie(0) 으로 대체가능
    int n,a,b;
    cin>>n;
    for (int i = 0; i<n;i++){
        cin>>a>>b;
        cout<<a+b<<"\n"; // endl 대신 \n 을 쓰기
    }
    return 0;
}