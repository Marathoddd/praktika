#include "struk.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



struct Contact
{
    int matanaliz;  // ������ �� ����������
    int algebra;    // ������ �� �������
    int infarmatika;// ������ �� ����������� 
    int TOI;        // ������ �� ���
    int istoria;    // ������ �� �������
}; 


Contact* Constructor()
{
    struct Contact* obj = (struct Contact*)malloc(sizeof(struct Contact));
    if (!obj)
    {
        return NULL;

    }
    // ���� ������ �� ��������
    printf("Ozenki ne vische 5!!!!\n\n\n ");
    printf("Vvedite oznku po matanalizu: ");
    scanf_s("%d\n", &obj->matanaliz);


    printf("Vvedite oznku po algebre: ");
    scanf_s("%d\n", &obj->algebra);


    printf("Vvedite oznku po infarmatike: ");
    scanf_s("%d\n", &obj->infarmatika);

    printf("Vvedite oznku po TOI: ");
    scanf_s("%d\n", &obj->TOI);

    printf("Vvedite oznku po istorii: ");
    scanf_s("%d\n", &obj->istoria);

    printf("\n\n\n");
    return obj;
}

// ������� �������� �����
float sredna_ozenka(Contact* obj)
{
    float  srozenka;
    srozenka = (obj->matanaliz + obj->algebra + obj->infarmatika + obj->TOI + obj->istoria) / 5;
    return srozenka;
    
}

// ����� �� �������� ��������� �������
void stipendia(Contact* obj)
{
    if (obj->matanaliz >= 4 && obj->algebra >= 4 && obj->infarmatika >= 4 && obj->TOI >= 4 && obj->istoria >= 4)
    {
        printf("The student receives a scholarship\n");
    }
    else
    {
        printf("The student does not receive a scholarship\n");
    }
    printf("\n\n\n");
}
//��������������� ��������� �� ��� 5 
void dopstependia(Contact* obj)
{
    if (obj->matanaliz >= 5 && obj->algebra >= 5 && obj->infarmatika >= 5 && obj->TOI >= 5 && obj->istoria >= 5)
    {
        printf("1000 rubles are added to the scholarship\n");
    }
    else
    {
        printf("To the scholarship 1000 rubles are not added\n");
    }
    printf("\n\n\n");
}

// ����� �������� ���� ����������� 
void peresdacha(Contact* obj)
{
    printf("Peresdacha: \n");
    if (obj->matanaliz <= 2)
        printf("Na peresdachu po matanaliz\n");
    if (obj->algebra <= 2)
        printf("Na peresdachu po algebra\n");
    if (obj->infarmatika <= 2)
        printf("Na peresdachu po infarmatika\n");
    if (obj->TOI <= 2)
        printf("Na peresdachu po TOI\n");
    if (obj->istoria <= 2)
        printf("Na peresdachu po istoria\n");
    if ((obj->matanaliz >= 3 && obj->algebra >=3 && obj->infarmatika >= 3 && obj->TOI >=3 && obj->istoria >= 3))
        printf("Ne nado ona peresdachu\n");
    printf("\n\n\n");
}

// o������� �� ������� 
void otchislien(Contact* obj)
{
    if (obj->matanaliz <= 2 && obj->algebra <= 2 && obj->infarmatika <= 2 && obj->TOI <= 2 && obj->istoria <= 2)
        printf("Expelled\n");
    else
    {
        printf(" Not Expelled\n");
    }
    printf("\n\n\n");
}

Contact* Destructor(Contact* obj)
{
    free(obj);
}