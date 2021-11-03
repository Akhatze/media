#define UNITY_INCLUDE_DOUBLE

#include <stdio.h>
#include "estatistica.h"
#include "unity.h"

#define UNITY_INCLUDE_CONFIG_H

void setUp()
{}

void tearDown()
{}


//testes media
void teste_media()
{
	double compara[] = {1, 2, 3, 4, 5};
	double resultado_verifi = ((1 + 2 + 3 + 4 + 5) / 5);
	double resultado_func = media(5, compara);

	TEST_ASSERT_EQUAL_DOUBLE(resultado_verifi, resultado_func);
}

void teste_media_neg()
{
	double compara[] = {-1, -2, -3, -4, -5};
	double resultado_verifi = ((-1 + -2 + -3 + -4 + -5) / 5);
	double resultado_func = media(5, compara);

	TEST_ASSERT_EQUAL_DOUBLE(resultado_verifi, resultado_func);
}

void teste_media_zero()
{
	double compara[] = {1, 2, -1, -2};
	double resultado_verifi = ((1 + 2 - 1- 2) / 4);
	double resultado_func = media(4, compara);

	TEST_ASSERT_EQUAL_DOUBLE(resultado_verifi, resultado_func);
}

void teste_media_vetor_vazio()
{
	double compara[] = {};
	double resultado_verifi = 0;
	double resultado_func = media(0, compara);

	TEST_ASSERT_EQUAL_DOUBLE(resultado_verifi, resultado_func);
}

void teste_media_um_elemento()
{
	double compara[] = {2};
	double resultado_verifi = 2;
	double resultado_func = media(1, compara);

	TEST_ASSERT_EQUAL_DOUBLE(resultado_verifi, resultado_func);
}

//testes desvio padrão
void teste_desvio()
{
	double compara[] = {10, 20, 4};
	double resultado_verifi = 8.08290376865;
	double resultado_func = desvio_padrao(3, compara);
	
	TEST_ASSERT_EQUAL_DOUBLE(resultado_verifi, resultado_func);

}

void teste_desvio_neg()
{
	double compara[] = {-1, -2, -3};
	double resultado_verifi =  1.0;
	double resultado_func = desvio_padrao(3, compara);
	
	TEST_ASSERT_EQUAL_DOUBLE(resultado_verifi, resultado_func);

}

void teste_desvio_zero()
{
	double compara[] = {-1, -2, 1, 2};
	double resultado_verifi = 1.82574185835;
	double resultado_func = desvio_padrao(4, compara);
	
	TEST_ASSERT_EQUAL_DOUBLE(resultado_verifi, resultado_func);
}

void teste_desvio_vetor_vazio()
{
	double compara[] = {};
	double resultado_verifi = 0;
	double resultado_func = desvio_padrao(0, compara);
	
	TEST_ASSERT_EQUAL_DOUBLE(resultado_verifi, resultado_func);
}

void teste_desvio_um_elemento()
{
	double compara[] = {2};
	double resultado_verifi = 0;
	double resultado_func = desvio_padrao(1, compara);
	
	TEST_ASSERT_EQUAL_DOUBLE(resultado_verifi, resultado_func);
}

int main()
{
	UNITY_BEGIN();

	//testes de media
	RUN_TEST(teste_media);
	RUN_TEST(teste_media_neg);
	RUN_TEST(teste_media_zero);
	RUN_TEST(teste_media_vetor_vazio);
	RUN_TEST(teste_media_um_elemento);

	//testes de desvio padrao
	RUN_TEST(teste_desvio);
	RUN_TEST(teste_desvio_neg);
	RUN_TEST(teste_desvio_zero);
	RUN_TEST(teste_desvio_vetor_vazio);
	RUN_TEST(teste_desvio_um_elemento);

	return UNITY_END();
}
