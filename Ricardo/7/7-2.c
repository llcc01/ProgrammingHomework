int getDays(int year, int month)
{
    int isleap = 0;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        isleap = 1;
    }
    int days;
    switch (month)
    {
    case 2:
        if (isleap == 0)
        {
            days = 28;
        }else{
            days = 29;
        }
        break;
    case 4:
        days = 30;
        break;    
    case 6:
        days = 30;
        break;
    case 9:
        days = 30;
        break;
    case 11:
        days = 30;
        break;
    default:
        days = 31;
        break;
    }
    return days;
}