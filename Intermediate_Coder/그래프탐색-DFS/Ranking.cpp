#include "Ranking.h"

/// <summary>
/// 문제
/// KOI 본선 대회에 N명의 학생이 참가했다. 이 학생들을 각각 1부터 N​까지 정수로 표현하자. 
/// 대회가 끝나고 성적을 발표하는데, 이 대회는 전체 학생의 등수를 발표하는 대신,
/// 두 학생 A, B가 대회 본부에 찾아가면 본부는 두 학생 중 어느 학생이 더 잘 했는지를 알려준다.
/// 둘 이상의 학생이 동점인 경우는 없다.
/// 
/// 자신의 전체에서 등수가 궁금한 학생들은 둘 씩 짝을 지어서 대회 본부에 총 M번 질문을 했다.
/// 여러분은 등수를 알고 싶은 학생 X와 대회 본부의 질문에 대한 답들로부터,
/// 이 학생 X의 등수 범위를 찾아서 출력한다.
/// 물론 이 학생의 등수는 1등, 즉 전체에서 제일 잘한 경우부터
/// N등, 즉 전체에서 제일 못한 경우 사이겠지만, 질문에 대한 답으로 알 수 있는 최대한 정확한 답을 출력한다.
///
/// 입력 형식
/// 첫 번째 줄에 세 정수 N, M, X 가 공백을 사이에 두고 주어진다
/// (2 ≤ N ≤ 105, 1 ≤ M ≤ min(N(N - 1) / 2, 5×105), 1 ≤ X ≤ N).
/// 다음 M 줄에는 각각 두 정수 A, B가 주어지는데,
/// 이 뜻은 학생 A가 학생 B보다 더 잘했다는 뜻이다.
/// 같은 A, B가 둘 이상의 줄에 주어지는 경우는 없고,
/// 입력된 값이 정확함이 보장된다.
/// 
/// 출력 형식
/// 두 정수 U, V ( 1 ≤ U ≤ V ≤ N) 를 출력한다.
/// 이는 학생 X의 가능한 가장 높은 등수가 U, 가능한 가장 낮은 등수가 V임을 나타낸다.
/// 만약 학생 X의 가능한 등수가 정확하게 하나라면, U = V이다.
/// 
/// [부분문제의 제약 조건]
/// * 부분문제 1: 전체 점수 100점 중 12점에 해당하며 N ≤ 10 .
/// * 부분문제 2 : 전체 점수 100점 중 11점에 해당하며 N ≤ 1, 000, M = N(N - 1) / 2 .
/// * 부분문제 3 : 전체 점수 100점 중 34점에 해당하며 N ≤ 1, 000 .
/// * 부분문제 4 : 전체 점수 100점 중 43점에 해당하며 원래의 제약조건 이외에 아무 제약조건이 없다.
///
/// 입력 예	/// 입력 예	/// 입력 예
/// 5 4 1	/// 5 3 1	/// 5 5 1
/// 1 2		/// 2 3		/// 1 3
/// 2 3		/// 3 4		/// 2 3
/// 3 4		/// 4 5		/// 3 4
/// 4 5					/// 3 5
///						/// 4 5
///
/// 출력 예	/// 출력 예	/// 출력 예
/// 1 1		/// 1 5		/// 1 2
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2750&sca=3090
/// </summary>
void Ranking::Code()
{
	int n, m, x;
	std::cin >> n >> m >> x;

	vector<Student> students;
	for (int i = 0; i <= n; i++)
	{
		students.push_back(Student());
	}

	for (int i = 0, a, b; i < m; i++)
	{
		std::cin >> a >> b;

		students[a].worseFriends.push_back(b);
		students[b].betterFriends.push_back(a);
	}

	CheckStudentRanking(students, n, x);

	int bestRanking{ 1 + students[x].upCount }, worstRanking{ n - students[x].downCount };
	std::cout << bestRanking << ' ' << worstRanking;
}

/// <summary>
/// 학생들의 앞 순번 랭킹 정보로 앞, 뒤 랭크의 학생 수를 체크한다.
/// </summary>
/// <param name="students">학생 정보 리스트</param>
/// <param name="n">학생의 수</param>
/// <param name="x">확인할 학생의 번호</param>
void Ranking::CheckStudentRanking(vector<Student>& students, int n, int x)
{
	CheckBetterStudents(students, x);
	ResetCheckedStudents(students, n);
	CheckWorseStudents(students, x);
}

/// <summary>
/// 기준 학생보다 잘 한 학생을 확인하여 순위를 체크한다.
/// </summary>
/// <param name="students">학생 정보 리스트</param>
/// <param name="x">확인할 학생의 번호</param>
void Ranking::CheckBetterStudents(vector<Student>& students, int x)
{
	stack<int> s;
	s.push(x);

	while (!s.empty())
	{
		int curStudent{ s.top() };
		s.pop();

		for (int nextStudent : students[curStudent].betterFriends)
		{
			if (!students[nextStudent].isChecked)
			{
				students[x].upCount++;
				students[nextStudent].isChecked = true;
				s.push(nextStudent);
			}
		}
	}
}

/// <summary>
/// 기준 학생보다 못 한 학생을 확인하여 순위를 체크한다.
/// </summary>
/// <param name="students">학생 정보 리스트</param>
/// <param name="x">확인할 학생의 번호</param>
void Ranking::CheckWorseStudents(vector<Student>& students, int x)
{
	stack<int> s;
	s.push(x);

	while (!s.empty())
	{
		int curStudent{ s.top() };
		s.pop();

		for (int nextStudent : students[curStudent].worseFriends)
		{
			if (!students[nextStudent].isChecked)
			{
				students[x].downCount++;
				students[nextStudent].isChecked = true;
				s.push(nextStudent);
			}
		}
	}
}

/// <summary>
/// 각 학생의 확인 여부를 초기화한다.
/// </summary>
/// <param name="students">학생 정보 리스트</param>
/// <param name="n">학생의 수</param>
void Ranking::ResetCheckedStudents(vector<Student>& students, int n)
{
	for (int i = 1; i <= n; i++)
	{
		students[i].isChecked = false;
	}
}