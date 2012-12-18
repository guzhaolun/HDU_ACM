#include <iostream>
#include <iomanip>
using namespace std;

class Student;
class Lesson;

class Lesson
{
private:
	int* score;
	int length;
public:
	Lesson(int m)
	{
		this->length=m;
		score=new int[m];
	}
	void SetScore(int score, int index)
	{
		this->score[index]=score;
	}

	int GetScore(int index)
	{
		return this->score[index];
	}

	double Avg()
	{
		double total=0;
		for (int i=0; i<length; i++)
			total+=score[i];
		return total/length;
	}
};

class Student
{
private:
	int* score;
	int length;
public:
	Student(int m)
	{
		this->length=m;
		score=new int[m];
	}
	
	void SetScore(int score, int index)
	{
		this->score[index]=score;
	}

	int GetScore(int index)
	{
		return this->score[index];
	}

	double Avg()
	{
		double total=0;
		for (int i=0; i<length; i++)
		{
			total+=score[i];
		}
		return total/length;
	}

	bool IsBest(Lesson** lessons)
	{
		for (int i=0; i<length; i++)
			if (score[i]>=lessons[i]->Avg())
				continue;
			else
				return false;
		return true;
	}
};

int main()
{
	int n;//Student number
	int m;//Lesson number
	Student** students;
	Lesson** lessons;
	cout << fixed << setprecision(2);
	while (cin >> n >> m)
	{
		// Initial
		students=new Student*[n];
		for (int i=0; i<n; i++)
			students[i]=new Student(m);
		lessons=new Lesson*[m];
		for (int i=0; i<m; i++)
			lessons[i]=new Lesson(n);

		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
			{
				int temp;
				cin >> temp;
				students[i]->SetScore(temp,j);
				lessons[j]->SetScore(temp,i);
			}

		for (int i=0; i<n-1; i++)
			cout << students[i]->Avg() << ' ';
		cout << students[n-1]->Avg() << endl;

		for (int i=0; i<m-1; i++)
			cout << lessons[i]->Avg() << ' ';
		cout << lessons[m-1]->Avg() << endl;

		int count=0;
		for (int i=0; i<n; i++)
			if (students[i]->IsBest(lessons))
				count++;
		cout << count << endl << endl;
	}
	return 0;
}
