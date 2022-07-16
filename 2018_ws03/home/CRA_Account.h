//May 2022 Chungon Tse
#ifndef _CRA_ACCOUNT_H
#define _CRA_ACCOUNT_H

namespace sict
{
	const int max_name_length = 40;
	const int min_sin = 100000000;
	const int max_sin = 999999999;
	const int max_yrs = 4;

	class CRA_Account
	{
		char familyNem[max_name_length + 1];
		char givenNem[max_name_length + 1];
		int sinNum;

		int years[max_yrs];
		double bilancio[max_yrs];
		int numYears;

	public:
		void set(const char* familyName, const char* givenName, int sin);
		bool isEmpty() const;
		void display() const;

		void set(int year, double balance);
	};
}

#endif // !_CRA_ACCOUNT_H