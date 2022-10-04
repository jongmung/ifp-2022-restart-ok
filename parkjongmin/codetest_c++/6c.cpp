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
