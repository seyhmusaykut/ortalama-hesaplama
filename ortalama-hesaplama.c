/*
��rencinin derste ald��� iki ara s�nav, bir �dev ve bir final s�nav� notlar�n� okuyan ve girilen notlara g�re harf notu hesaplayan program.

*Notlar 100 �zerinden verilmi�tir.++
*Final s�nav�ndan 50'nin alt�nda not alan ��renci direkt F notu almaktad�r.
*Programa 0-100 aral��� d���nda not girildi�inde uyar� verecektir. +

S�navlar�n ba�ar� notuna katk�s� ��yledir:

1. Ara S�nav %15++
2. Ara S�nav %20++
�dev %20++
Final %45++

Ba�ar� notuna kar��l�k gelen harf notlar�:

85-100 A++
75-84 B++
60-74 C++
50-59 D++
49 ve alt� F++

*/
#include <stdio.h>
main()
{
	int a1,f,a2,o1;
	printf("1. ara sinav notunuz:");
	scanf("%d",&a1);
	if(a1>100){
		printf("Not 100'den buyuk olamaz");
	}
	else if(a1<0){
		printf("Not 0'dan kucuk olamaz");
	}
	printf("2. ara sinav notunuz:");
	scanf("%d",&a2);
	if(a2>100){
		printf("Not 100'den buyuk olamaz");
	}
	else if(a2<0){
		printf("Not 0'dan kucuk olamaz");
	}
	printf("odev notunuz:");
	scanf("%d",&o1);
	if(o1>100){
		printf("Not 100'den buyuk olamaz");
	}
	else if(o1<0){
		printf("Not 0'dan kucuk olamaz");
	}
	printf("final notunuz:");
	scanf("%d",&f);
	if(f>100){
		printf("Not 100'den buyuk olamaz");
	}
	else if(f<0){
		printf("Not 0'dan kucuk olamaz");
	}
	if(f<50) 
	{
		goto islem;
	}
	double ort = (a1 * 0.15) + (a2 * 0.2) + (o1 * 0.2) + (f * 0.45);
	printf("Ortalamaniz = %.0lf",ort);
	if(ort<=100 && ort>=85)
	{
		printf("Harf Notu: A");
	}
	else if(ort<=84 && ort>=75)
	{
		printf("Harf Notu: B");
	}
	else if(ort<=74 && ort>=60)
	{
		printf("Harf Notu: C");
	}
	else if(ort<=59 && ort>=50)
	{
		printf("Harf Notu: D");
	}
	else if(ort<=49)
	{
		islem:
		printf("Harf Notu: F");
	}
	getch();
}
