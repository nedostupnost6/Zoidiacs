#include <stdio.h>

int main()
{
        int day, month;
        printf("День и месяц: \n");
        scanf("%d%d", &day, &month);
        printf("\n");
        switch (month)
        {
        case 1:
        if (day <= 19)
        printf("Вы Козерог\n");
        else
        printf("Вы Водолей\n");
        break;
        case 2:
        if (day <= 19)
        printf("Вы Водолей\n");
        else
        printf("Вы Рыбы\n");
        break;
        case 3:
        if (day <= 20)
        printf("Вы Рыбы\n");
        else
        printf("Вы Овен\n");
        break;
        case 4:
        if (day <= 19)
        printf("Вы Овен\n");
        else
        printf("Вы Телец\n");
        break;
        case 5:
        if (day <= 20)
        printf("Вы Телец\n");
        else
        printf("Вы Близнецы\n");
        break;
        case 6:
        if (day <= 20)
        printf("Вы Близнецы\n");
        else
        printf("Вы Рак\n");
        break;
        case 7:
        if (day <= 22)
        printf("Вы рак\n");
        else
        printf("Вы Лев\n");
        break;
        case 8:
        if (day <= 22)
        printf("Вы Лев\n");
        else
        printf("Вы Дева\n");
        break;
        case 9:
        if (day <= 22)
        printf("Вы Дева\n");
        else
        printf("Вы Весы\n");
        break;
        case 10:
        if (day <= 23)
        printf("Вы Весы\n");
        else
        printf("Вы Скорпион\n");
        break;
        case 11:
        if (day <= 22)
        printf("Вы Скорпион\n");
        else
        printf("Вы Стрелец\n");
        break;
        case 12:
        if (day <= 21)
        printf("Вы Стрелец\n");
        else
        printf("Вы Козерог\n");
        break;
        }
        printf("\n");
}