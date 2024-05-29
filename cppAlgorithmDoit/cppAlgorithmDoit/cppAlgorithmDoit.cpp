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
// //구간 합 1
//int main()
//{
//	cout << "데이터의 개수[배열개수], 질의 개수를 입력하세요";
//	int query[2] ;
//	int a = 5;
//	for (int i = 0; i < 2; i++)
//	{
//		cin >> query[i];
//	}
//	int data[100000];
//
//	int S[100000] = { 0 };
//	
//	cout << "구간 합을 구할 대상 배열을 입력하세요. ";
//
//	for (int i = 0; i < query[0]; i++)
//	{
//		cin >> data[i];
//
//		if (i > 0)
//		{
//			S[i] = data[i] + S[i-1];
//		}
//		else
//		{
//			S[0] = data[0];
//		}
//		
//	}
//
//	int IJ[2];// 0 1 2 3 4 5 6 7 8
//
//	int result;
//
//	
//	for (int i = 0; i < query[1]; i++)
//	{
//		cout << " i부터 j까지 값을 넣으시오 ";
//		cin >> IJ[0] >>IJ[1];
//		IJ[0] -= 1;
//		IJ[1] -= 1;
//
//		if (IJ[0] == 0)
//		{
//			result = S[IJ[1]];
//		}
//		else
//		{
//			result = S[IJ[1]] - S[IJ[0] - 1];
//		}
//		
//		cout << "결과: " << result << endl;
//	}
//}
//------------------------------------------------
//구간 합 2
//int main()
//{
//	cout << "2차원 배열 크기와 구간 합의 질의 갯수를 입력하세요. ";
//	int N, M;
//	cin >> N >> M;
//	
//	vector<vector<int>>S(N+1,vector<int>(N+1,0));
//	//vector<int>S(10,0); -> 10개의 배열에 0을 모두 대입
//
//	for (int i = 1; i <= N; i++)
//	{
//		cout << "배열 안의 값을 입력해주세요. ";
//		int data;
//		for (int j = 1; j <= N; j++)
//		{
//			
//			cin >> data;
//			S[i][j] = data + S[i][j-1];
//
//		}
//	}
//
//	
//	for (int i = 0; i < M; i++)
//	{
//		int result = 0;
//
//		int x1 =0, y1=0, x2=0, y2=0;
//		cout << "(X1, Y1) (X2, Y2)를 입력 해주세요";
//		cin >> x1 >> y1 >> x2 >> y2;
//
//		for (int j = x1; j <= x2; j++)
//		{
//			result += S[j][y2] - S[j][y1 - 1];
//		}
//
//		cout << "결과 값: " << result << endl;
//	}
//
//	
//}

//-----------------------------------------------

int main()
{
	int n,m;
	cout << "원소 개수와 나눌 수 M을 입력하세요. ";
	cin >>n>> m;

	vector<int>D(n+1, 0); //원본 데이터
	vector<int>S(n+1, 0); //합 데이터
	vector<int>S2(n + 1, 0); //합데이터를 m으로 나눈 변경된 합 데이터
	vector<int>r(m - 1, 0); //나머지 값 개수 별 정리 데이터

	int result = 0; //결과값

	cout << "원소를 입력하세요. ";
	for (int i = 1; i <= n; i++)
	{
		cin >> D[i];
		S[i] = S[i - 1] + D[i];

		if (!(S2[i] = S[i] % m)) //M에 m을 나눈 데이터를 저장
		{
			result++;
		}

		r[S2[i]] += 1; 
	}

	if (S2[0] == 0)
	{
		r[0] -= 1;
	}

	for (int i = 0; i < m - 1; i++)
	{
		if (r[i] > 1)
		{
			int facto = 0, facto2 = 0;
			for (int j = r[i]; j > 0; j--)
			{
				facto *= j;
			}
			for (int j = r[i] - 2; j > 0; j--)
			{
				facto2 *= j;
			}

			result += (facto) / (facto2 * r[i]);
		}
	}

	//m으로 나눈 나머지가 x일때 = 0 ~ m-1
	//nCr = n! / (n-r)! *r

	cout << "결과 값: " << result << endl;


}
