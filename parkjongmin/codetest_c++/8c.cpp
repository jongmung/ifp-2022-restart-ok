//15596_정수 N개의 합
//정수 n개가 주어졌을 때, n개의 합을 구하는 함수를 작성하시오.
//a: 합을 구해야 하는 정수 n개가 저장되어 있는 배열 (0 ≤ a[i] ≤ 1,000,000, 1 ≤ n ≤ 3,000,000)
//리턴값: a에 포함되어 있는 정수 n개의 합
#include <iostream>
#include <vector>
using namespace std;
long long sum(vector<int> &a) {
    long long ans =0;
    for (int i=0; i< a.size(); i++){
        ans += a[i];
    }
    return ans;
}

//함수의 기본      출력타입  함수이름  (입력 값)
// 입력 값             int func (int x) {
// 식                    int result;
// 출력 값               reuslt =2*x+3;
//      반환되는 값이랑 return result;  }
//      출력타입 동일해야함      출력(반환) 값

//4673_셀프 넘버
//생성자가 없는 숫자를 셀프 넘버라고 한다
//10000보다 작거나 같은 셀프 넘버를 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
//양의 정수 n이 주어졌을 때, 이 수를 시작해서
//n, d(n), d(d(n)), d(d(d(n))), ...과 같은 무한 수열을 만들 수 있다. 
//d(n)을 n과 n의 각 자리수를 더하는 함수라고 정의하자.
//예를 들어, d(75) = 75+7+5 = 87이다.
#include <iostream>
using namespace std;
int d (int number){               // 함수 d
    int sum = number;             //sum 변수를 하나 생성하고 number로 초기화
    while(number !=0){            //셀프 넘버를 찾기위한 반복문
        sum = sum + (number%10);  // 첫 재 자리수
        number = number / 10;     // 10을 나누어 첫 째 자리를 없앤다.
    }
    return sum;
}                             //밑에서 숫자가 입력되면 d 함수로 숫자를 넣어 return되는
                              //수는 해당 number를 생성자로 하는 수로 구성한다

int main() {
    bool check[10001]{false};
    for (int i=1;i<10001;i++){
        int n=d(i);
        if (n<10001){   // 10000이 넘는 수는 필요 없다
            check[n] = true;
        }
    }
    for (int i=1; i<10001;i++){
        if(!check[i]){
            cout<<i<<'\n';
        }
    }
    return 0;
}

//1065_한수
//어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다.
//N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.
#include <iostream>
using namespace std;
int box(int num){
    int cnt = 0;    //한수 카운팅
    
    if(num<100){    // 100밑으로는 수 자체가 수열이다
        return num; // num을 return
    } else{
        cnt = 99;   //100이상의 수는 한수의 최소 개수 99이므로 초기화

        for (int i=100; i<=num;i++){
            int bak=i/100;          //백의 자릿수 = i / 100
            int ten=(i/10)%10;      //십의 자릿수 = (i / 10) % 10
            int one=i%10;           //일의 자릿수 = i % 10

            if((bak-ten)==(ten-one)){ // 각 자릿수가 수열을 이루면
                cnt++;
            }
        }
    }
    return cnt;
}
    
int main(){
    int N;
    cin>>N;
    int result = box(N);
    cout<<result;
    return 0;
}
