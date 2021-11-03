#include "estatistica.h"
#include <math.h>

double media(int n, double *v)
{
	double resposta = 0;

	if (n <= 0)
	{
		return 0;
	}

	for (int i = 0; i < n; i++)
	{
		resposta += v[i];
	}

	resposta /= n;

	return resposta;
}

double desvio_padrao(int n, double *v)
{
	double calc = 0, soma = 0;

	if (n <= 1)
	{
		return 0;
	}

	calc = media(n, v);

	for (int i = 0; i < n; i++)
	{
		soma += pow((v[i] - calc), 2);
	}

	soma = soma / (n - 1);

	soma = sqrt(soma);

	return soma;
}