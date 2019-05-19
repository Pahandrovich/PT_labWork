#ifndef _MY_TABLE_
#define _MY_TABLE_

#include <cstdlib>
#include <vector>



class Mytable
{
public:
	std::vector<double> ni;
	std::vector<double> pi;
	Mytable(int _k)
	{
		ni.resize(_k);
		pi.resize(_k);
		for (int i = 0; i < ni.size(); i++)
		{
			ni[i] = pi[i] = 0;
		}
	}
};

#endif // !_MY_TABLE_