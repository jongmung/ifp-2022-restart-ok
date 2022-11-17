//10818_최소, 최대
//N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
#include <iostream>
#include <algorithm> // sort() 함수를 사용하기 위해서는 algorithm를 include 
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];  // 배열 입력 받아 넣기
    }
    sort(arr, arr+n); // 오름차순 정렬 sort(배열의 시작주소, 배열의 마지막주소);
    cout<<arr[0]<<' '<<arr[n-1];
    return 0;
}

//2562_최댓값
//9개의 서로 다른 자연수가 주어질 때,
//이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
//첫째 줄에 최댓값을 출력하고, 둘째 줄에 최댓값이 몇 번째 수인지를 출력한다.
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int a = 0;
    int b,c; // 최댓값을 저장할 곳과 몇 번째인지 위치를 가질 곳 지정
    for (int i = 1;i<=9;i++){
        cin>>b;
        if (b>a){
            a = b;
            c = i;
        }
    }
    cout<<a<<'\n';
    cout<<c<<'\n';
    return 0;
}

//2577_숫자의 개수
//첫째 줄에는 A × B × C의 결과에 0 이 몇 번 쓰였는지 출력한다.
//마찬가지로 둘째 줄부터 열 번째 줄까지 A × B × C의 결과에
//1부터 9까지의 숫자가 각각 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력한다.
#include <iostream>
using namespace std;
int main() {
    /*
    0으로 초기화를 해준다
    그렇지 않으면 쓰레기 값이 들어간다
    {},{0,},{0} 방식이 있다
    */
    int count[10] ={};
    int a,b,c;
    cin>>a>>b>>c;
    int res=a*b*c;
    //to_string(val) 숫자(int,float,long 등)를 문자열로 변환해주는 함수이다
    string s = to_string(res);
    /*
	 숫자 0은 문자로는 아스키 값 48에 해당하므로,
	 인덱스 숫자 0을 얻기 위해서는 48을 빼주어야 한다. 
	 마찬가지로 문자 '1'을 숫자 1로 얻고자 한다면 48을 빼주어야 49 - 48 = 1로
	 숫자 1을 얻을 수 있다.
	 아스키 값이 기억이 안난다면, '0' 이렇게 문자로 빼주어도 된다.
	*/
    for (char ch : s) {		// 문자열의 문자들을 하나씩 꺼내온다. (foreach문 활용)
		// 문자를 숫자로 변환한 값의 인덱스를 1 증가시킨다.
		count[ch - '0']++;
	}
    // 0 부터 9까지 count 배열을 출력한다. (foreach문 사용)
	for (int v : count) {
		cout << v << "\n";
	}
	return 0;
}
//다른 방법
#include <iostream>
using namespace std;
int main(void) {
 
	/*
	  0으로 초기화를 해야한다. 
	  아니면 garbage value, 즉 쓰레기 값이 들어있게 된다.
	  이 때 0으로 초기화 하는 방법은 {} 괄호만 쳐주거나,
	  {0,}, {0} 방식이 있다.
	 */
	int count[10] = {};
	int a, b, c;
	cin >> a >> b >> c;
	int res = a * b * c;
	// 곱한 값이 0이 될 때 까지 반복
	while(res != 0) {
		count[res % 10]++;	// res에서 나머지 10을 통해 자릿수를 얻어 인덱스로 활용
		res /= 10;			//  매 회 자릿수를 줄이기 위해 10을 나눈다.
	}                       // 1426/10=142, 142/10=14
 
	// 0 부터 9까지 count 배열을 출력한다. (foreach문 사용)
	for (int v : count) {
		cout << v << "\n";
	}
	return 0;
}

//3052_나머지
//10개수를 입력 받은 뒤,42로 나누었을 때, 서로 다른 나머지가 몇 개 있는지 출력한다.
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
	/*
	  0으로 초기화를 해주어야 한다.
	  bool 배열을 활용 할 경우 bool count[42] = {false} 이런식으로
	  초기화 해줄 수 있다.
	 */
	int count[42] = {};	
	int v;
	for(int i = 0; i < 10; i++) {
		cin >> v;
		// 입력 받은 수를 42로 나눈 나머지 인덱스의 값을 증가시킨다.
		count[v % 42]++;	
	}
	int result = 0;
	/*
	  배열을 순회하면서 적어도 한 번 이상 나온 경우에는
	  result 값을 증가시킨다. (서로 다른 수를 세기 위함)
	 */
	for(int v : count) {
		if(v > 0) {		
			result++;
		}
	}
	cout << result;
	return 0;
}

//1546_평균
//세준이는 기말고사를 망쳤다. 세준이는 점수를 조작해서 집에 가져가기로 했다.
//일단 세준이는 자기 점수 중에 최댓값을 골랐다. 이 값을 M이라고 한다.
//그리고 나서 모든 점수를 점수/M*100으로 고쳤다.
//첫째 줄에 새로운 평균을 출력한다. 
//실제 정답과 출력값의 절대오차 또는 상대오차가 10-2 이하이면 정답이다.
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    double sum=0;
    cin>>n;
    double arr[n];
    for (int i=0;i<n;i++){
         cin>>arr[i];
    }
    sort(arr, arr+n);
    m = arr[n-1];
    for (int i=0;i<n;i++){
        arr[i]=(arr[i]/m)*100;
        sum += arr[i];
    }
    cout<<sum/n;
    return 0;
}

//8958_OX퀴즈
//"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
//string 라이브러리를 사용하기위해 포함
#include <iostream>
#include <string>
using namespace std;
int OX(string& s) {	
	int cumulative = 0; // 0의 연속 개수를 의미하는 변수
	int sum = 0;
	for(char &v : s) { // s의 string 문자열에서 각 문자들을
                       // 하나씩 v로 빼와주는 것
		/*
		 * O 문자일 경우 누적합을 1 증가시킨 뒤 
		 * 해당 값에 대해 누적합
		 */
		if(v == 'O') {   // 빼온 v로 'O'의 값과 같은 지 비교
			cumulative++;
			sum += cumulative;
		}
		else {
			cumulative = 0;
		}
	}
	return sum;
}
int main(int argc, const char * argv[]) {
 
	int T;
	cin >> T;  // 총 몇 번을 할 것인가
 
	for(int i = 0; i < T; i++) {
		string s;
		cin >> s;   // ox값을 받는 부분
 
		cout << OX(s) << "\n";
	}
 
	return 0;
}

//4344_평균은 넘겠지
//첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
//각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을
//반올림하여 소수점 셋째 자리까지 출력한다.
#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int n; // 케이스 수와 학생 수
    cin>>n;
    for(int i=0;i<n;i++){
        double sum = 0;
        int stu = 0;
        double good = 0; // 평균이상학생
        cin>>stu;
        double arr[stu];
        for(int j=0;j<stu;j++){
            cin >> arr[j];
            sum += arr[j];
        }
        for(int k=0;k<stu;k++) {
            if(arr[k]>sum/stu){
                good++;
            }
        }
        double result = (good/stu)*100;
        cout<<fixed;  // 소수점 자리 수정
        cout.precision(3); //소수점 3번째 자리까지 출력    
        cout<<result<<"%\n";
    }
    return 0;
}