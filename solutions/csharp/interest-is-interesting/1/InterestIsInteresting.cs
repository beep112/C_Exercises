using System;

static class SavingsAccount
{
    public static float InterestRate(decimal balance)
    {
        if(balance<0)
            return (float)3.213;
        else if(balance>= 0 && balance<1000)
            return (float)0.5;
        else if(balance>=1000 && balance<5000)
            return (float)1.621;

        return (float)2.475;
        
    }

    public static decimal Interest(decimal balance){
        decimal percent = ((decimal)(InterestRate(balance)))*(decimal)0.01;
        return (balance*percent);
    }

    public static decimal AnnualBalanceUpdate(decimal balance)
    {
        decimal percent = ((decimal)(InterestRate(balance)))*(decimal)0.01;
        percent++;
        return (balance*percent);
    }

    public static int YearsBeforeDesiredBalance(decimal balance, decimal targetBalance)
    {
        int count = 0;
        while(balance<targetBalance){
            balance = AnnualBalanceUpdate(balance);
            count++;
        }
        return count;
    }
}
