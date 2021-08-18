#include "STLSort4.h"

/// <summary>
/// 문제
/// STL(Standard Template Library-표준 템플릿 라이브러리)는 알고리즘(Algorithm), 컨테이너(container), 
/// 함수객체(functions), 반복자(iterator)로 구성된 C++을 위한 라이브러리(Library) 이다. 
/// STL에는 많은 유용한 내용들이 있지만 여기서는 <algorithm> 헤더에 포함된 sort함수를 집중하여 다루어 본다.
/// 
/// [ std::sort ]
/// 0. 함수 원형은 두 가지 포맷이 있다.
///    (1) void sort (RandomAccessIterator first, RandomAccessIterator last);​
///        sort(구간의 시작 포인터, 구간의 끝 포인터);                    // last는 마지막 유효포인터 + 1 임에 유의한다.
///    (2) void sort (RandomAccessIterator first, RandomAccessIterator last, Compare comp);
///        ​sort(구간의 시작 포인터, 구간의 끝 포인터, 정렬기준함수[객체]);​ // 따라서 구간범위는[first, last) 이다.
/// 1. <algorithm> 헤더를 include 하여 사용한다.
/// 2. O(N logN) 의 실행속도를 보장한다. 
///    : stl-sort 를 intro-sort(introspective sort : 자기성찰적인 정렬^^)라고 하는데 그 이유는 다음 3가지 정렬을 포함하고 있기 때문이다.
///    (1) GCC의 경우 원소의 수가 16이하인 경우 삽입정렬을 이용한다.(<bits/stl_algo.h> 에서 _S_threshold = 16)
///        (VC++ 은 32 이하 : <algorithm> 에서 _ISORT_MAX로 확인가능하다.)
///    (2) 그 외의 경우 퀵정렬을 이용하여 정렬하는데 
///    (3) 재귀의 깊이가 logN을 넘어가는 경우 힙정렬(logN을 보증하는 정렬)을 이용한다.
/// 3. 사용법을 잘 익힌다면 정수, 문자, 실수, 문자열, 객체 등의 배열을 원하는 방법으로 정렬시킬 수 있다.
/// 
/// [정수 배열을 정렬하기]
/// std::sort 함수를 이용하여 정수 배열을 정렬하는 여러가지 방법을 살펴보자.
/// 
/// #include <cstdio>
/// #include <algorithm>   // sort 함수를 사용하기 위하여
/// #include <functional>  // greater 클래스를 사용하기 위하여
/// using namespace std;
///  
/// bool comp(int a, int b){return a > b;}
///  
/// struct Comparator{
///     bool operator()(const int&a, const int&b){
///         return a > b;
///     }
/// }compareObject;
///  
/// int main(){
///     int A[10] = {7, 2, 3, 8, 1, 10, 4, 6, 5, 9};
///  
///     // 원하는 영역을 오름차순 정렬하기
///     sort(A, A+5);          // (1, 2, 3, 7, 8), 10, 4, 6, 5, 9
///     for(int i=0;i<10 ; ++i) printf("%d ", A[i]); puts("");
///  
///     // 함수를 이용하여 원하는 영역을 내림차순 정렬하기
///     sort(A+5, A+10, comp); // 1, 2, 3, 7, 8, (10, 9, 6, 5, 4)
///     for(int i=0;i<10 ; ++i) printf("%d ", A[i]); puts("");
///  
///     sort(A, A+10);         // 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
///     for(int i=0;i<10 ; ++i) printf("%d ", A[i]); puts("");
///  
/// //    // *** 아래 4가지 유형은 시간을 두고 천천히 익혀보자. ***
/// //    // 클래스 greater 이용
/// //    sort(A, A+10, greater<int>()); // 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
/// //    for(int i=0;i<10; ++i) printf("%d ", A[i]);
/// //    puts("");
/// //
/// //    // lambda 이용
/// //    sort(A, A+10, [&](int a, int b){return a<b;}); // 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
/// //    for(int i=0;i<10; ++i) printf("%d ", A[i]);
/// //    puts("");
/// //
/// //    // 사용자정의 함수객체클래스생성자 사용
/// //    sort(A, A+10, Comparator());    // 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
/// //    for(int i=0;i<10; ++i) printf("%d ", A[i]);
/// //    puts("");
/// //
/// //    // 사용자정의 함수객체 사용
/// //    sort(A, A+10, compareObject);   // 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
/// //    for(int i=0;i<10; ++i) printf("%d ", A[i]);
/// //    puts("");
///  
///     return 0;
/// }
/// 
/// [객체 배열을 정렬하기]
/// std::sort 함수를 이용하여 객제 배열을 정렬하는 여러가지 방법을 살펴보자.
/// 
/// #include <cstdio>
/// #include <cstring>     // for strcmp
/// #include <algorithm>   // for sort
/// using namespace std;
///  
/// struct Data{
///     int grade;
///     char name[30];
///  
/// // 1. 클래스내 연산자 오버로딩 하기
///     bool operator<(const Data&r) const{
///         if(grade != r.grade){           // 학년의 내림차순을 1순위로 정렬
///             return grade > r.grade;
///         }
///         return strcmp(name, r.name) < 0;// 이름의 오름차순을 2순위로
///     }
///     void output(){
///         printf("{%d \"%s\"} ", grade, name);
///     }
/// };
///  
/// //// 2. 클래스밖 전역함수에 의한 연산자 오버로딩 하기
/// //bool operator<(const Data&a, const Data&b){
/// //    if(a.grade != b.grade){            // 학년의 내림차순을 1순위로
/// //        return a.grade > b.grade;
/// //    }
/// //    return strcmp(a.name, b.name) < 0; // 이름의 오름차순을 2순위로 정렬
/// //}
///  
/// bool comp(const Data&a, const Data&b){
///     if(a.grade != b.grade){            // 학년의 오름차순을 1순위로
///         return a.grade < b.grade;
///     }
///     return strcmp(a.name, b.name) < 0; // 이름의 오름차순을 2순위로 정렬
/// }
///  
/// struct Comparator{
///     bool operator()(const Data&a, const Data&b){
///         if(a.grade != b.grade){            // 학년의 오름차순을 1순위로
///             return a.grade < b.grade;
///         }
///         return strcmp(a.name, b.name) > 0; // 이름의 내림차순을 2순위로 정렬
///     }
/// }compObject;
///  
/// int main(){
///     Data arr[] = {{3, "Nana"}, {6, "Titus"}, {3, "Amy"}, {6, "Dewey"}, {5, "Olivia"}};
///     /// 1, 2 연산자 오버로딩 사용하기
///     sort(arr, arr+5);
///     // {6, "Dewey"} {6, "Titus"} {5, "Olivia"} {3, "Amy"} {3, "Nana"}
///     for(int i=0;i<5;++i) arr[i].output(); puts("");
///  
///     // 3. 비교함수 사용하기
///     sort(arr, arr+5, comp);
///     //{3, "Amy"} {3, "Nana"} {5, "Olivia"} {6, "Dewey"} {6, "Titus"}
///     for(int i=0;i<5;++i) arr[i].output(); puts("");
///  
///  
/// //    // *** 아래 유형이 이해하기 힘들다면 시간을 두고 천천히 연구해보자. ***
/// //    // 4. 람다함수 사용하기
/// //    sort(arr, arr+5, [&](const Data&a, const Data&b){
/// //         if(a.grade != b.grade) return a.grade > b.grade;// 학년의 내림차순을 1순위로
/// //         return strcmp(a.name, b.name) > 0;              // 이름의 내림차순을 2순위로 정렬
/// //         });
/// //    // {6, "Titus"} {6, "Dewey"} {5, "Olivia"} {3, "Nana"} {3, "Amy"}
/// //    for(int i=0;i<5;++i) arr[i].output(); puts("");
/// //
/// //    // 5. 함수객체 사용하기
/// //    sort(arr, arr+5, Comparator());
/// //    sort(arr, arr+5, compObject);
/// //    //{3, "Nana"} {3, "Amy"} {5, "Olivia"} {6, "Titus"} {6, "Dewey"}
/// //    for(int i=0;i<5;++i) arr[i].output(); puts("");
///  
///     return 0;
/// }
/// 
/// [문제]
/// N명의 학생정보를 입력받아 정렬 규칙에 맞게 정렬한 후 Q개의 질의에 답하는 프로그램을 작성하시오.
/// 학생정보는 1 ~10만 이하의 정수 ID, 10자이하의 영문대문자 이름, 100만 이하의 정수 선호도로 이루어진다.
/// i번째 학생의 ID는 i이다. (1≤ i ≤​ N)
/// 정렬 규칙은 선호도의 내림차순을 1순위로 이름의 오름차순을 2순위로 ID의 오름차순을 3순위로 한다.
/// ID는 유일하며 이름과 선호도는 같은 값이 있을 수 있다.
/// 질의는 정렬 후 K번째 학생의 ID를 구하는 것이다.
///
/// 입력 형식
/// 첫 행에 N과 Q가 공백을 구분하여 주어진다. ( 5 ≤​ N, Q ≤​ 100,000)
/// 다음 N개의 행에 학생의 정보 이름과 선호도 Pi가 주어진다. (0 ≤​ Pi ≤​ 1, 000, 000)
/// ID는 입력순서대로 1 ~N까지이다.
/// 마지막 행에 Q개의 질의가 공백을 구분하여 주어진다.
/// 
/// 출력 형식
/// Q개의 질의에 대하여 해당하는 학생의 ID를 공백으로 구분하여 출력한다.
///
/// 입력 예
/// 5 5
/// NANA 7
/// TITUS 9
/// TITUS 3
/// AMY 3
/// OLIVIA 8
/// 1 2 3 4 5
///
/// 출력 예
/// 2 5 1 4 3
/// 
/// Hint!
/// * string, pair, turple, vector 등과 관련한 내용은 다른 문제에서 다룬다.
///
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2860&sca=30
/// </summary>
void STLSort4::Code()
{
	int n, q;
	std::cin >> n >> q;

	Student* arr = new Student[n];
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	Sort(arr, n);

	int num;
	for (int i = 0; i < q; i++)
	{
		std::cin >> num;
		std::cout << arr[num - 1].id << ' ';
	}

	delete[] arr;
}

int STLSort4::Student::ID = 1;

/// <summary>
/// 주어진 학생 배열을 정렬한다.
/// 1순위: 선호도 내림차순
/// 2순위: 이름 오름차순
/// 3순위: ID 오름차순
/// </summary>
/// <param name="arr">배열</param>
/// <param name="n">배열의 길이</param>
void STLSort4::Sort(Student arr[], int n)
{
	std::sort(arr, arr + n, Compare);
}