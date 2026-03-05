#include<iostream>
#include<vector>
#include<set>
using namespace std;

int ReadNumber()
{
	int Number = 0;
	cin >> Number;
	return Number;
}


void FillSetElement(set <int>& Set, int size)
{
	for (int i = 0; i < size; i++)
	{
		int element = ReadNumber();
		Set.insert(element);
	}
}

void CopySetToVector(set<int>Set, vector <int>& Vector)
{
	for (auto s : Set)
	{
		Vector.push_back(s);
	}
}

void ADD_SubNumberFromAllVector(vector <int> &v, int Number)
{
	for (int i = 0; i < v.size(); i++)
	{
		v[i] = v[i] + Number;
	}
}

void PrintVector(vector <int> v)
{
	cout << "The Elemetn : ";
	for (auto i : v)
		cout << i << " ";
	cout << endl;
}

void If_FirstElementZ(vector<int> v)
{
	bool ok = true;
	for (int i = 0; i < v.size()-1; i++)
	{
		if (v[i] + 1 != v[i + 1])
		{
			cout << v[i] + 1;
			ok = false;
			break;
		}
	}
	if (ok)
		cout << v.size() << endl;;
}

void Program()
{
	set <int> array_A;
	int Test_Cases = 0;
	Test_Cases = ReadNumber();
	vector <int> array_B;
	for (int i = 1; i <= Test_Cases; i++)
	{
		int Size = 0;
		Size = ReadNumber();
		FillSetElement(array_A, Size);
		CopySetToVector(array_A, array_B);
		if (array_B[0] == 0)
		{
			If_FirstElementZ(array_B);


		}
		else
		{
			int FirstElement = array_B[0];
			if (FirstElement > 0)
			{
				ADD_SubNumberFromAllVector(array_B, FirstElement*-1);
			}
			else 
			{
				ADD_SubNumberFromAllVector(array_B, FirstElement*-1 );
			}

			If_FirstElementZ(array_B);
		}

		array_A.clear();
		array_B.clear();
	}
}

int main()
{
	Program();
}