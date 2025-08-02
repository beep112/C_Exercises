using System;

static class QuestLogic
{
    public static bool CanFastAttack(bool knightIsAwake)
    {
        if(knightIsAwake == true){
            return false;
        }
    return true;
    }

    public static bool CanSpy(bool knightIsAwake, bool archerIsAwake, bool prisonerIsAwake)
    {
       if(knightIsAwake == true && archerIsAwake == true && prisonerIsAwake == true){
           return true;
       }
       else if(knightIsAwake == false && archerIsAwake == false && prisonerIsAwake == false){
           return false;
       }
       else if(knightIsAwake == false || archerIsAwake == false || prisonerIsAwake == false){
           return true;
       }

    return false;
    }

    public static bool CanSignalPrisoner(bool archerIsAwake, bool prisonerIsAwake)
    {
        if(archerIsAwake == false&&prisonerIsAwake == true){
            return true;
        }
    return false;
    }

    public static bool CanFreePrisoner(bool knightIsAwake, bool archerIsAwake, bool prisonerIsAwake, bool petDogIsPresent)
    {
    if((knightIsAwake == false && archerIsAwake == false && prisonerIsAwake 
 == false && petDogIsPresent == true)||(knightIsAwake == true && archerIsAwake == false && prisonerIsAwake 
 == false && petDogIsPresent == true)){
        return true;
    }
    else if(prisonerIsAwake == false){
        return false;
    }
    else if(knightIsAwake == true && archerIsAwake == true){
    return false;
    }
    else if(knightIsAwake ==false && archerIsAwake == true && petDogIsPresent == false){
        return false;
    }
    else if(knightIsAwake == true && petDogIsPresent == false){
        return false;
    }
    else if(knightIsAwake == false && archerIsAwake == true && petDogIsPresent == true){
        return false;
    }
    return true;
}
}
