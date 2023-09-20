#include <iostream>
using namespace std;


int main()
{

	int ppp = 0;
	int c, qtsZeros;
	int linha, coluna;
	bool bo, ok = true;
	int qtsLinha, qtsColuna;

    cin >> qtsLinha >> qtsColuna;

    int array[qtsLinha][qtsColuna];

	for (linha = 0; linha < qtsLinha; ++linha)
	{

		qtsZeros = 0;
		bo = true;

		for (coluna = 0; coluna < qtsColuna; ++coluna)
		{
            cin >> array[linha][coluna];

			if (c == 0 && bo){
                qtsZeros++;
            }
			else
            {
                bo = false;
            }

		}

		if (linha != 0)
		{

			if ((qtsZeros > ppp || (qtsZeros == ppp && qtsZeros == qtsColuna)) && ok){
				ppp = qtsZeros;
            }    
			else{
				ppp = 0;
                ok = false;
            }     

		}
		else{
            ppp = qtsZeros;
        }

	}

    cout << "ppp = " << ppp << "\n";
	if (ppp == 0)
		cout << "S" << "\n";
	else
		cout <<"N" << "\n";

}