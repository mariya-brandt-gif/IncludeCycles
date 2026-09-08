#include <iostream>
using namespace std;

int main()
{

   // // F10


    //for (int i = 1; i <= 10; i++)
    //{
    //    for (int j = 1; j <= 10; j++)
    //    {
    //        cout << i << " * " << j << " = " << i * j << endl;
    //    }
    //    cout << "\n______________________________________\n" << endl;
    //}

    //for (int i = 0; i < 10; i++)
    //{
    //    for (int j = 0; j < 10; j++)
    //    {
    //        cout << "* ";
    //    }
    //    cout << endl;
    //}
   // cout << "---------------- while -----------------" << endl;
   // int lenght = 10;
   // int line_count = 1;
   // int count_star;

   // while (line_count <= lenght)
   // {
   //     count_star = 1;
   //     while (count_star <= lenght)
   //     {
   //         cout << "* ";
   //         count_star++;
   //     }
   //     cout << endl;
   //     line_count++;
   // }
   // cout << "-----------------------------------------" << endl;
   /* for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }*/
   // cout << "-----------------------------------------" << endl;
    //for (int i = 0; i < 10; i++)
    //{
    //    for (int j = 0; j < 15; j++)
    //    {
    //        cout << "* ";
    //    }
    //    cout << endl;
    //}
   // cout << "-----------------------------------------" << endl;
   /* for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                cout << "* ";
            }
            else
            {
                cout << "- ";
            }
        }
        cout << endl;
    }*/



   // cout << "-----------------------------------------" << endl;
  /*  int N = 10;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i + j == N - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "- ";
            }
        }
        cout << endl;
    }*/

   //int N = 11;

   // for (int i = 0; i < N; i++)
   // {
   //     for (int j = 0; j < N; j++)
   //     {
   //         if (i >= j && i + j >= N - 1)
   //         {
   //             cout << "|===|";
   //         }
   //         else
   //         {
   //             cout << "     ";
   //         }
   //     }
   //     cout << endl;
   // }

    //for (int i = 0; i < 7; i++)
    //{
    //    for (int j = 0; j < N; j++)
    //    {
    //        cout << "|###|";
    //    }
    //    cout << endl;

    //}

   // // F10 - start debugger from first line
   // // F5 - start debugger with break point
   // int a = 0, b = 0;
   // cout << "Enter a and b : ";
   // cin >> a >> b;
   // float res = (float)a / b;
   // cout << "Res = " << res << endl;


 /*   for (int i = 0; i < 333; i++)
    {
        cout << "Result = " << i << endl;
    }*/



	cout << "1" << endl;
	

	int N = 11;

	for (int i = N; i >= 1; i--)
	{
		for (int j = 1; j <= N -i; j++)
			cout << "  ";

		for (int j = 1; j <= i; j++)
			cout << " *";
		
		cout << endl;

	}

	cout << "2" << endl;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << " *";

		cout << endl;

	}

	cout << "3" << endl;


	for (int i = 6; i >= 1; i--)
	{
		for (int j = 1; j <= 6 - i; j++)
			cout << "  ";

		for (int j = 1; j <= 2 * i - 1; j++)
			cout << " *";

		cout << endl;
	}

	
	cout << " 4 "<< endl;
		
	for (int i = 0; i < N; i++)
	 {
	     for (int j = 0; j < N; j++)
	     {
	         if (i >= j && i + j >= N - 1)
	         {
	             cout << " *";
	         }
	         else
	         {
	             cout << "  ";
	         }
	     }
	     cout << endl;

	}

	cout << " 5 "<< endl;

	for (int i = N; i >= 1; i -= 2)
	{
		for (int j = 1; j <= (N - i) / 2; j++)
			cout << "  ";

		for (int j = 1; j <= i; j++)
			cout << " *";

		cout << endl;
	}
	for (int i = 6; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i >= j && i + j >= N - 1)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}

	cout << " 6 " << endl;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			
			if (j < i && j < N -1 - i)
			{
				cout << " *";
			}
			else if (j > i && j > N - 1 - i)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}

		cout << endl;
	}



	cout << " 7 "<< endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{

			if (j < i && j < N - 1 - i)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}

		cout << endl;
	}


	cout << " 8 " << endl;


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{

			if (j > i && j > N - 1 - i)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
		}

		cout << endl;
	}

	cout << " 9 " << endl;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j <= 10 - i)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;

	}

	cout << " 10 " << endl;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j >= 10 - i)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	
	cout << "Home work 1"<< endl;

	int number;
	int choice;
	
	cout << "Please enter a multi-digit number." << endl;
	cin >> number;

	cout << "1 - Number of digits " << endl;
	cout << "2 - Sum " << endl;
	cout << "3 - Average value  " << endl;
	cout << "4 - Number of zero " << endl;

	cout << "Enter your choice: " << endl;
	cin >> choice;

	int count = 0;
	int sum = 0;
	int zero = 0;

	while (number !=0)
	{
		int digit = number % 10;
		count++;

		sum += digit;

		if (digit == 0)
			zero++;

		number = number / 10;
	}
	switch (choice)
	{
		case 1:
			cout << "Number of digits: "<< count << endl;
			break;
		case 2:
			cout << "Sum: "<< sum << endl;
			break;
		case 3:
			cout << "Average value: "<< (double)sum/ count << endl;
			break;
		case 4:
			cout << "Number of zero: "<< zero << endl;
			break;
		default:
			cout << "Invalid input! " << endl;

	}

	cout << endl;
	cout << "Home work 2" << endl;
	cout <<  endl;
	

	int a =3;
	//cout << "Enter the cell size: ";
	//cin >> a;

	for (int i = 0; i < 2 *a ; i++)
	{
		for (int j = 0; j < 5*a; j++)
		{
			if ((i / a + j / a) % 2 == 0)
				cout << "*";
			else
				cout << "-";			
		}
		cout << endl;

	}




























	


	








	


	





















}
