#include "DNACombination.h"

/// <summary>
/// 문제
/// 도훈이는 학교에서 배운 유전자 실험을 이용해서 자신만의 실험을 계획하고 있다
/// (프로그램을 작성해주는 복제인간을 만드는 것이 목표라고 한다).
/// 
/// 도훈이가 갖고 있는 DNA 조각은 n(2 <= n <= 7)개가 있다.
/// 이들 DNA 조각은 복제인간이 가져야 할 중요한 유전자를 담고 있기 때문에,
/// 이 조각들의 정보를 그대로 유지시키면서 가장 짧은 DNA 순열을 새로 만들고 싶다.
/// 
/// DNA 순열을 조합하는 과정은 아래와 같다.
/// 
/// 1) n개의 DNA조각을 임의의 순서로 나열한다.
/// 
/// 2) 인접한 두 DNA조각에서 앞쪽 조각의 오른쪽 끝 부분이
/// 뒤쪽 조각의 왼쪽 끝 부분과 최대한 많이 일치하는 부분을 찾는다.
/// 
/// 3) 모든 인접한 두 DNA에서 중복되는 부분을 제거하고 나머지 부분을
/// 순서대로 모아 새로운 문자열을 만든다.
/// 
/// 4) 새로운 문자열을 만들때 인접한 문자열의 공통부분만 제거할 수 있음에 유의한다.
/// 예를 들어 ABC, D, BCD 를 순서대로 연결하는 경우 ABCD가 아닌 ABCDBCD가 된다.
/// 
/// 예를 들어, ‘GATTA’와 ‘TACA’는 ‘GATTACA’로 조합될 수 있다.
/// 왜냐하면 ‘GATTA’의 오른쪽 두 글자 ‘TA’가 ‘TACA’의 왼쪽 두 글자 ‘TA’와 일치하기 때문이다.
/// 어떤 경우에는 한 조각이 다른 조각의 내용을 모두 포함하고 있을 수도 있고, 어떤 경우에는 단 한 글자도 일치하지 않을 수도 있다.
/// 
/// ‘GATTACA’와 ‘TTACA’는 완벽하게 겹치는 반면에 ‘GATTACA’와 ‘TTA’는 한 글자도 겹치지 않는다.
/// 
/// 아래에 조합의 몇 가지 예가 있다.
/// GATTA + TACA->GATTACA
/// TACA + GATTA->TACAGATTA
/// TACA + ACA->TACA
/// TAC + TACA->TACA
/// ATAC + TACA->ATACA
/// TACA + ACAT->TACAT
///
/// 입력 형식
/// ​첫 줄에 n이 입력되고, 두 번째 줄부터 n개의 줄에 걸쳐 각 DNA 조각이 입력된다.
/// DNA조각의 길이는 1 ~7 이다.
/// 
/// 출력 형식
/// 첫 번째 줄에 n개의 DNA를 모두 조합해서 하나의 DNA 순열로 만들었을 때 최소 길이를 출력한다.
///
/// 입력 예	/// 입력 예
/// 4		/// 3
/// GATTA	/// ABC
/// TAGG	/// BCD
/// ATCGA	/// ABCD
/// CGCAT
///
/// 출력 예	/// 출력 예
/// 13		/// 4
/// 
/// http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=1478&sca=3030
/// </summary>
void DNACombination::Code()
{
	int n;
	std::cin >> n;

	string arr[7];
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::cout << GetMinLengthOfCombination(arr, n);
}

/// <summary>
/// DNA를 조합할 때 최소 길이가 되는 조합의 길이를 반환한다.
/// </summary>
/// <param name="arr">DNA 배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="combination">조합 결과</param>
/// <returns>조합의 길이</returns>
size_t DNACombination::GetMinLengthOfCombination(string arr[7], int n, string combination)
{
	if (n == 0)
	{
		return combination.size();
	}

	size_t minLength{ 999'999'999 };
	string newArr[7];
	for (int i = 0; i < n; i++)
	{
		CopyArrWithoutIdx(arr, newArr, n, i);
		size_t length{ GetMinLengthOfCombination(newArr, n - 1, CombineDNA(combination, arr[i])) };
		if (length < minLength)
		{
			minLength = length;
		}
	}
	return minLength;
}

/// <summary>
/// 배열의 주어진 인덱스를 제외한 값을 새로운 배열에 복사한다.
/// </summary>
/// <param name="arr">배열</param>
/// <param name="copyArr">복사할 배열</param>
/// <param name="n">배열의 길이</param>
/// <param name="idx">제외할 인덱스</param>
void DNACombination::CopyArrWithoutIdx(string arr[7], string copyArr[7], int n, int idx)
{
	for (int i = 0, j = 0; i < n; i++)
	{
		if (i != idx)
		{
			copyArr[j++] = arr[i];
		}
	}
}

/// <summary>
/// 기존 DNA와 새 DNA를 조합한다.
/// </summary>
/// <param name="originDNA">기존 DNA</param>
/// <param name="addDNA">새로 추가된 DNA</param>
/// <returns>조합된 DNA</returns>
string DNACombination::CombineDNA(string originDNA, string addDNA)
{
	size_t originSize{ originDNA.size() };
	size_t addSize{ addDNA.size() };
	size_t restIdx{ 0 };

	for (size_t i = 0; i < originSize; i++)
	{
		bool notCombined{ false };
		for (restIdx = 0; restIdx < addSize && i + restIdx < originSize; restIdx++)
		{
			// 중간에 다른 값이 있으면 포함되지 않는다.
			if (originDNA[i + restIdx] != addDNA[restIdx])
			{
				notCombined = true;
				break;
			}
		}

		// 안에 완전히 넣어지는 경우를 제외한다.
		if (restIdx == addSize && i + restIdx < originSize)
		{
			notCombined = true;
		}

		if (notCombined)
		{
			continue;
		}

		break;
	}

	return originDNA.append(addDNA.substr(restIdx));
}