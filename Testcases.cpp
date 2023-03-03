#include "submission.cpp"
#include <gtest/gtest.h>

TEST(Q1, Find) { 
    int a[5]={2,3,4,8,1};
    int b[1]={2};
    ASSERT_EQ(3, find(a,5,8));
    ASSERT_EQ(0, find(b,1,2));
    ASSERT_EQ(-1, find(a,5,7));
    }

TEST(Q2, Prime) { 
    ASSERT_EQ(1, isPrime(2,2));
    ASSERT_EQ(1, isPrime(5,2));
    ASSERT_EQ(0, isPrime(0,2));
    }

TEST(Q3, FindUppercase) { 
char s[6]="hEllo";
char s1[12]="hello World";
char s2[10]="reCursion";
    ASSERT_EQ('E', findUpperCase(s,0));
    ASSERT_EQ('W', findUpperCase(s1,0));
    ASSERT_EQ('C', findUpperCase(s2,0));
    }

TEST(Q4, CalculatePi ) { 
  ASSERT_FLOAT_EQ(3.3396823, calculatePi(5));
  ASSERT_FLOAT_EQ(3.1405623, calculatePi(970));
    }

TEST(Q5, FindEqual ) { 
    int **matrix1 = new int*[3];
	for (int i = 0; i < 3; i++)
	matrix1[i] = new int[3];

	int **matrix2 = new int*[3];
	for (int i = 0; i < 3; i++)
	matrix2[i] = new int[3];

	for (int i = 0; i < 3; i++)
	{
	for (int j = 0; j < 3; j++)
	{
	matrix1[i][j]=1;
	matrix2[i][j]=1;
	}
	}
	ASSERT_EQ(1, checkEqual(matrix1, matrix2, 2, 2));


int **matrix3= new int*[4];

	for (int i = 0; i < 4; i++)
	matrix3[i] = new int[4];

	int **matrix4 = new int*[4];
	for (int i = 0; i < 4; i++)
	matrix4[i] = new int[4];

	for (int i = 0; i < 4; i++)
	{
	for (int j = 0; j < 4; j++)
	{
	matrix3[i][j]=i;
	matrix4[i][j]=j;
	}
	}


ASSERT_EQ(0, checkEqual(matrix3, matrix4, 3, 3));


    }



TEST(Q6, CalculateSum ) { 


int **matrix1 = new int*[3];
	for (int i = 0; i < 3; i++)
	matrix1[i] = new int[3];

	for (int i = 0; i < 3; i++)
	{
	for (int j = 0; j < 3; j++)
	{
	matrix1[i][j]=1;
	}
	}
	int e = 0;
	int o = 0;
	calculateSum(matrix1, 2, 2, e, o);
	
	ASSERT_EQ(9,o);
	ASSERT_EQ(0,e);




int **matrix2= new int*[5];
	for (int i = 0; i < 5; i++)
	matrix2[i] = new int[5];

	for (int i = 0; i < 5; i++)
	{
	for (int j = 0; j < 5; j++)
	{
	matrix2[i][j]=i;
	}
	}
	int e1 = 0;
	int o1 = 0;
	calculateSum(matrix2, 4, 4, e1, o1);

        ASSERT_EQ(20,o1);
	ASSERT_EQ(30,e1);
    }

/*
TEST(Q7, PrintPattern1 ) { 

fstream output("Q7.txt", ios::out);
  		if (output)
  		{
  		printPattern1(1, 10,output);
  		}
  		output.close();

string str1="";
string str2="";
ifstream file("test.txt");
output.open("Q7.txt");
if(file.is_open() && output.is_open()){
	while((!output.eof()) && (!file.eof()))
	   {
		getline(file,str1);
                getline(output,str2);
		ASSERT_EQ(0,str1.compare(str2));
	}
} 
} 



TEST(Q8, PrintPattern2 ) { 

fstream output("Q8.txt", ios::out);
	  		if (output)
	  		{
	  			printPattern2(6, 1, 6, output);
	  		}
	  		output.close();

	string str1;
	string str2;
	ifstream file("test8.txt");
	output.open("Q8.txt");
	if(file.is_open() && output.is_open()){
		while(!output.eof() && !file.eof())
		  {
			getline(file,str1);
	                getline(output,str2);
	
			ASSERT_EQ(0,str1.compare(str2));

		  }
	}

}


TEST(Q9, PrintPattern3 ) { 

	fstream output("Q9.txt", ios::out);
		  		if (output)
		  		{
		  			printPattern3(1, 5, output);
		  		}
		  		output.close();
		string str1;
		string str2;
		ifstream file("test9.txt");
		output.open("Q9.txt");
		if(file.is_open() && output.is_open()){
			while(!output.eof() && !file.eof())
			  {
				getline(file,str1);
		                getline(output,str2);
				ASSERT_EQ(0,str1.compare(str2));
			}
}
			
}
*/


TEST(Q10, Permutate) { 
  
ASSERT_EQ(840, permutate(7,4));
ASSERT_EQ(90, permutate(10,2));
    }



TEST(Q11, sum) { 
  int check[6][6]={
		{-1,-1,-1,-1,-1,112},
		{-1,-1,-1,-1,48,64},
		{-1,-1,-1,20,28,36},
		{-1,-1,8,12,16,20},
		{-1,3,5,7,9,11},
		{1,2,3,4,5,6}
	};
	int arr[6] = { 1,2,3,4,5,6 };
	int **res = new int*[6];
	for (int i = 0; i <6; i++)
	{	res[i] = new int[6]; }

	for (int i = 0; i < 6; i++)
		{
		 for (int j = 0; j <6 ; j++)
		{
		res[i][j]=-1;
		}
		}

printSumTriangle(arr, 6,res,6,6);
	for (int i = 0; i < 6; i++)
	{
	 for (int j = 0; j <6 ; j++)
	{
          ASSERT_EQ(check[i][j],res[i][j]);
	}
	}

    }



TEST(Q12, CountChoclate) { 
  
ASSERT_EQ(22, countMaxChoco(15,1,3));
ASSERT_EQ(15, countMaxChoco(16,2,2));
    }


TEST(Q13, Queen) { 
int check[5][5]={{1,0,0,0,0},
		 {0,0,0,1,0},
		 {0,1,0,0,0},
		 {0,0,0,0,1},
		 {0,0,1,0,0}};
int ** board = new int*[5];
for (int i = 0; i < 5; i++)
{
board[i] = new int[5];
for (int j = 0; j < 5; j++)
board[i][j] = 0;
}


if(solveNQUtil(board,5,0)==true)
  {
for (int i = 0; i < 5; i++)
{
for (int j = 0; j < 5; j++)
{
ASSERT_EQ(board[i][j],check[i][j]);
}
}
}
}
 


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
