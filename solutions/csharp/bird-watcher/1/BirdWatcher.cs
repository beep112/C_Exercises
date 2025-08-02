using System;

class BirdCount
{
    private int[] birdsPerDay;

    public BirdCount(int[] birdsPerDay)
    {
        this.birdsPerDay = birdsPerDay;
    }

    public static int[] LastWeek()
    {
        int[] temp = {0, 2, 5, 3, 7, 8, 4};
        return temp; 
    }

    public int Today()
    {
        return birdsPerDay[birdsPerDay.Length-1];
    }

    public void IncrementTodaysCount()
    {     
        birdsPerDay[birdsPerDay.Length-1]++;
    }

    public bool HasDayWithoutBirds()
    {
        foreach(int x in birdsPerDay){
            if(x==0){
                return true;
            }
        }
        return false;
    }

    public int CountForFirstDays(int numberOfDays)
    {
        int sum = 0;
        for(int i = 0; i<numberOfDays; i++){
            sum += birdsPerDay[i];
        }
        return sum; 
    }

    public int BusyDays()
    {
        int sum = 0;
        foreach(int x in birdsPerDay){
            if(x>=5)
                sum++;
        }
    return sum;
    }
}
