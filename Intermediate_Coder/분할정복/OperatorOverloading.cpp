#include "OperatorOverloading.h"

/// <summary>
/// 문제
/// 다음 단계인 구조체 정렬로 넘어가기 전에, C++ 문법 중 다소 난해해서 생략했던 부분 하나를 소개하고 넘어가려고 한다.
/// 
/// 아래 코드를 따라 치고 실행시켜보자.
/// 여러분들이 혹여나 당황할까 해서 미리 말하는데, 아래 코드는 컴파일되지 않는게 정상이다.
/// /// 에러가 나는 코드 ///
/// 
/// #include <cstdio>
/// using namespace std;
/// 
/// struct Student
/// {
///     char name[20];
///     int age;
///     double height;
/// };
/// int main()
/// {
///     Student s1 = { "멋쟁이" , 17 , 178.5 };
///     Student s2 = { "이쁜이" , 18 , 165.9 };
/// 
///     if (s1 < s2) printf("%s wins!\n", s2.name);
///     else      printf("%s wins!\n", s1.name);
/// 
///     return 0;
/// }
/// ​이 코드는 왜 컴파일되지 않을까?
/// 인자한 쌤이 main()함수 내부 코드를 한국말로 "해석"해 볼 테니, 한번 따라 읽어보고, 조금만 생각을 해 보자.
/// 
/// ............
/// 두 학생이 있다(s1, s2))
/// 한 학생(s1)은 이름이 “멋쟁이” 이고, 17살이며 키가 178.5이다.
/// 다른 학생(s2)는 이름이 “이쁜이”이고 18살이며, 키는 165.9이다.
/// 이 두 학생을 비교해서, s1이 s2보다 작으면(? ) 이쁜이가 이겼다고 출력하고,
/// 그렇지 않으면 멋쟁이가 이겼다고 출력하는 프로그램이다.
/// ............
/// 
/// 위 붉은 색으로 표시된 문장이 벌써부터 조금 어색하다.
/// 
/// 만약 s1과 s2이 정수형 변수(int형 변수)라면, 정수 s1과 정수 s2의 크기를 비교하는 것은 참 거짓이 명확하게 나누어진다.
/// 따라서 s1이 s2보다 작다는 문장이 문제가 되지 않는다.
/// 
/// 그러나 s1, s2는 Student형 변수이고, 이 Student형이라는 자료형은 내가 “방금 전에” struct 구문을 이용하여 만든 자료형이다.원래 있던 자료형이 아니다!
/// (지금 밑줄 친 문장이 이해가 되지 않는 학생은 지금 당장 이 문제를 닫고, 구조체의 기본을 다시 공부하도록 하라!)
/// 
/// 따라서 컴퓨터 입장에서는, 두 학생의 크기를 비교하라고 하면 당황스러울 수 밖에 없고, 컴파일 에러를 표시할 수 밖에 없는 것이다.
/// 위 코드를 보고 당황스런 표정을 짓고 있을 불쌍한 컴퓨터를 위해 우리가 할 수 있는 일은 Student형 자료형을 정의할 때, 작다(< )의 정의를 같이 
/// 정의해 주는 것이다.
/// 이를 연산자 오버로딩(Operator Overloading)이라고 한다.연산자 오버로딩은 문법적으로 난해한 부분이 있으므로,
/// 위의 에러가 나는 코드를 수정하는 과정을 3단계로 나누어 설명하도록 하겠다.
/// 반드시 3가지 방식을 다 작성해보고, 각각을 이해한 후에 넘어갈 수 있도록 한다.
/// 
/// 1단계.우선 일반 함수로 작성
/// #include <cstdio>
/// using namespace std;
/// 
/// struct Student
/// {
///     char name[20];
///     int age;
///     double height;
/// };
/// bool smaller(Student left, Student right)
/// {
///     return left.age < right.age;
/// }
/// int main()
/// {
///     Student s1 = { "멋쟁이" , 17 , 178.5 };
///     Student s2 = { "이쁜이" , 18 , 165.9 };
/// 
///     if (smaller(s1, s2)) printf("%s wins!\n", s2.name);
///     else           printf("%s wins!\n", s1.name);
/// 
///     return 0;
/// }
/// 
/// smaller 함수는 두 학생 left와 right를 받아서, left의 나이가 right보다 작으면 참을, 아니면 거짓을 리턴하는 함수이다.
/// 예시에서 s1의 나이가 s2의 나이보다 작으므로, smaller함수의 정의에 따라 참이 리턴되게 되고, if문 안으로 들어가게 되어 s2의 이름이 출력된다.
/// 
/// 2단계.struct내 함수(메소드)로 작성
/// #include <cstdio>
/// using namespace std;
/// 
/// struct Student
/// {
///     char name[20];
///     int age;
///     double height;
///     bool smaller(Student right)
///     {
///         return age < right.age;
///     }
/// };
/// 
/// int main()
/// {
///     Student s1 = { "멋쟁이" , 17 , 178.5 };
///     Student s2 = { "이쁜이" , 18 , 165.9 };
/// 
///     if (s1.smaller(s2)) printf("%s wins!\n", s2.name);
///     else            printf("%s wins!\n", s1.name);
/// 
///     return 0;
/// }
/// 
/// 1단계와의 차이점은, smaller 함수의 정의방식과 정의된 위치이다.
/// 
/// 1단계에서는 smaller가 일반적인 함수였다면, 2단계에서는 구조체 내에 선언된 함수다(이렇게 구조체 내에 선언된 함수를 메소드라고 한다.)
/// 20번 줄에서 호출된 s1.smaller(s2) 함수는 이제 s1를 주체로 하여 선언된 함수가 된다.
/// 따라서 함수 내에 있는 age < right.age 문장에서, age는 자기 자신(s1)의 나이를 말하며, right.age는 매개변수로 받은 s2의 나이를 받게 된다.
/// 
/// 3단계.연산자 오버로딩으로 작성
/// #include <cstdio>
/// using namespace std;
/// 
/// struct Student
/// {
///     char name[20];
///     int age;
///     double height;
///     bool operator<(Student right)
///     {
///         return age < right.age;
///     }
/// };
/// 
/// int main()
/// {
///     Student s1 = { "멋쟁이" , 17 , 178.5 };
///     Student s2 = { "이쁜이" , 18 , 165.9 };
/// 
///     if (s1 < s2)  printf("%s wins!\n", s2.name);
///     else      printf("%s wins!\n", s1.name);
/// 
///     return 0;
/// }
/// 
/// 2단계와의 차이점은 딱 두 가지다. if문에 있는 함수호출 부분이 s1.smaller(s2)에서 s1<s2로 바뀐 것과, struct 구문 내의 함수(메소드)이름이 
/// operator<로 바뀐 것이다.
/// 
/// 3단계의 operator<라는 이름의 함수(메소드)와 2단계의 smaller라는 이름의 함수는 역할이 똑같으나 호출 방식이 조금 다른 것 뿐이라는 것을 
/// 인지할 필요가 있다.
/// smaller를 호출하기 위해서는 s1.smaller(s2) 처럼 (호출하는 주체).(함수이름)으로 호출할 수 있었지만, operator<를 호출할 때는, 
/// s1.operator<(s2)가 아니라, s1<s2라고 써야 제대로 호출이 된다는 것이다.
/// 결과적으로 어떻게 되었는가? Student형 변수끼리의 대소비교가 가능해진 것이다(s1<s2 라는 문장이 에러를 표시하지 않는다!)
/// 
/// < 말고, <=나 >, 또는 +, -, *를 쓰고 싶다면 operator<=() , operator+()같은 식으로 정의해준 후에 쓰면 된다. 
/// 
/// 이제 거저 먹기 식 연습문제를 풀어보고, 다음 문제로 넘어갈 수 있도록 하자.
/// 
/// 연습문제
/// 
/// 두 직사각형의 가로의 길이와 세로의 길이를 각각 입력 받아, 
/// 앞에 입력 받은 직사각형의 넓이가 더 작다면 a is smaller를, 
/// 그렇지 않다면(넓이가 같은 경우를 포함하여) b is smaller를 출력하는 프로그램을 작성하라.
/// 
/// 아래 힌트란에 미완성된 코드가 있다. ctrl+c ctrl+v를 하지 못하게 하기 위해서 일부러 그림 파일로 만들었다.
/// 우선 미완성된 부분을 빼고 다 따라 쳐보자. 따라 치는 자체가 큰 연습이 된다.
/// 붉은색 네모 부분을 채워서 완전한 코드를 작성하여 제출한다.
/// 
/// 아래 코드를 수정하지 않고 문제를 풀어도 100점을 맞는 데는 지장이 없으나, 여러분들 본인의 연습을 위해 아래 코드를 이용하여 풀도록 한다.
///
/// 입력 형식
/// 첫 줄에 첫 번째 직사각형의 너비와 높이가 공백을 사이에 두고 주어진다.
/// 둘째 줄에 두 번째 직사각형의 너비와 높이가 공백을 사이에 두고 주어진다.
/// 너비와 높이는 100 이하의 양의 정수이다.
/// 
/// 출력 형식
/// 첫 번째 직사각형의 넓이가 더 작으면 a is smaller를 출력, 아니면 b is smaller를 출력한다.
///
/// 입력 예
/// 1 5
/// 3 2
///
/// 출력 예
/// a is smaller
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=4000&sca=30
/// </summary>
void OperatorOverloading::Code()
{
	Rectangle a, b;

	std::cin >> a >> b;

	if (a < b)
	{
		std::cout << "a is smaller";
	}
	else
	{
		std::cout << "b is smaller";
	}
}

/// <summary>
/// 비교 연산 오버로딩, 넓이 비교
/// </summary>
/// <param name="other">다른 직사각형 정보</param>
/// <returns>기준 값이 작은지 여부</returns>
bool OperatorOverloading::Rectangle::operator <(const Rectangle& other)
{
	return (width * height) < (other.width * other.height);
}