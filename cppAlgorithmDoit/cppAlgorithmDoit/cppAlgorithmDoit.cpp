// cppAlgorithmDoit.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//int main()
//{
//	int testcase;
//	cin >> testcase;
//
//	int answer = 0;
//	int A[100001] = { 0 };
//
//	for (int i = 1; i < 10001; i++)
//	{
//		A[i] = rand() * 100;
//	}
//
//	for (int t = 1; t < testcase + 1; t++)
//	{
//		int start, end;
//		cin >> start >> end;
//
//		for (int i = start; i <= end; i++)
//		{
//			answer += A[i];
//		}
//		cout << testcase << " " << answer;
//	}
//}


//----------------------------------------------------------------
#include <vector>

//int main()
//{
//	double score[1000];
//	score[0] = 0;
//	int subjectNum;
//	cout << "과목 개수를 입력하시오";
//	cin >> subjectNum;
//	cout << "각 과목 별 점수를 입력하시오 ";
//	int topScore = score[0];
//
//	for (int i = 0; i < subjectNum; i++)
//	{
//		cin >> score[i];
//		if (topScore < score[i])
//		{
//			topScore = score[i];
//		}
//	}
//	 
//	double sum = 0;
//	for (int i = 0; i < subjectNum; i++)
//	{
//		sum += (score[i] / (topScore * 100))*10000;
//		
//	}
//
//	cout << sum / subjectNum << endl;
//
//
//}

//--------------------------------------------------------
int main()
{
	cout << "데이터의 개수[배열개수], 질의 개수를 입력하세요";
	int query[2] ;
	int a = 5;
	for (int i = 0; i < 2; i++)
	{
		cin >> query[i];
	}
	int data[100000];

	int S[100000] = { 0 };
	
	cout << "구간 합을 구할 대상 배열을 입력하세요. ";

	for (int i = 0; i < query[0]; i++)
	{
		cin >> data[i];

		if (i > 0)
		{
			S[i] = data[i] + S[i-1];
		}
		else
		{
			S[0] = data[0];
		}
		
	}

	int IJ[2];// 0 1 2 3 4 5 6 7 8

	int result;

	
	for (int i = 0; i < query[1]; i++)
	{
		cout << " i부터 j까지 값을 넣으시오 ";
		cin >> IJ[0] >>IJ[1];
		if (IJ[0] == 0)
		{
			result = S[IJ[1]];
		}
		else
		{
			result = S[IJ[1]] - S[IJ[0] - 1];
		}
		
		cout << "결과: " << result << endl;
	}
}