//11022_A+B-8
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//각 테스트 케이스마다 "Case #x: A + B = C" 형식으로 출력한다.
//x는 테스트 케이스 번호이고 1부터 시작하며, C는 A+B이다.
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);  //더욱 빠르게 코딩 결과 가능
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        cout<<"Case #"<<i+1<<": "<<a<<" + "<<b<<" = "<<a+b<<'\n';
    }
    return 0;
}

//2438_별 찍기-1
//첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n; 
    for (int i=1;i<=n;i++){     // n번만큼 반복
        for (int j=1;j<=i;j++){ // i행에서 i개만큼 별을 출력
            cout<<"*";
        }
        cout<<endl;  // 출력 뒤 줄바꿈  cout<<'\n'; 해주고 위에 
    }                // ios_base::sync_with_stdio(false); 선언 해주면 더 빠름
    return 0;
}

//2439_별 찍기-2
//첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
//하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int k=0;k<n-i;k++){ // 공백은 n-i개 만큼 출력
            cout<<' ';
        }
        for (int k=1;k<=i;k++){  // 별은 i개만큼 출력
            cout<<"*";
        }
        cout<<'\n';
    }
    return 0;
}

//10871_x보다 작은수
//정수 N개로 이루어진 수열 A와 정수 X가 주어진다.
//이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;
int main(){
    int n,x,a;
    cin>>n>>x;
    for (int i=0;i<n;i++){
        cin>>a;
        if (a < x){
            cout<<a<<" ";
        }
    }
    return 0;
}

//10952_A+B-5
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//입력의 마지막에는 0 두 개가 들어온다.
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    while (true){            // 무한루프 while문
        int a,b;             // while (조건식) {
        cin>>a>>b;           //     코드 내용
        if (a==0&&b==0){     //  }
            break;           
        }
        cout<<a+b<<"\n";
    }
    return 0;
}

//10951_A+B-4
//두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
//각 테스트 케이스마다 A+B를 출력한다.
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int a,b;
    while (!(cin >> a >> b).eof()){ //입력 스트림이 더 이상 읽을 것이 없는
        cout<<a+b<<'\n'; //파일의 끝에 도달했을 때를 처리해야해서 eof()사용
    }
    return 0;
}

//1110_더하기 사이클
//먼저 주어진 수가 10보다 작다면 앞에 0을 붙여 두 자리 수로 만들고,
//각 자리의 숫자를 더한다.
//그 다음, 주어진 수의 가장 오른쪽 자리 수와 앞에서 구한 합의 가장 오른쪽 자리 수를
//이어 붙이면 새로운 수를 만들 수 있다.
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int a,N;
    int count = 0;
    cin >> a;
    N = a;                         //while문 - 조건심사후 while 블럭 실행
    do {                           //do-while문 - 블럭 실행후 조건 심사
                                   // 
        N = (N%10) * 10 + ((N/10)+(N%10)) %10; //  N에 대해 반복하므로 연산된 값도 N으로 덮어줌
             // 10의 자리수 + N의 10의 자릿수와 1의 자릿수를 더함
             // = 더한 값의 1의 자릿수가 1의 자릿수가 됨
        count++; //사이클 수 증가
    } while (a != N);
    cout<<count; //사이클 수 출력
    return 0;
}