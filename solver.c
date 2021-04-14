bool checkPossibility(int* nums, int numsSize)
{
    bool quota=1;
    int i=2;
    
    if(numsSize>=2)
    {
        if(*(nums+1)<*nums)
        {
            *nums=*(nums+1);
            quota=0;
        }
    }
    else
        return 1;
    while(quota && i<=numsSize-1)
    {
        if(*(nums+i)<*(nums+i-1) && *(nums+i)<*(nums+i-2))
        {
            *(nums+i)=*(nums+i-1);
            quota=0;
        }
        if(*(nums+i)<*(nums+i-1) && *(nums+i)>=*(nums+i-2))
        {
            *(nums+i-1)=*(nums+i-2);
            quota=0;
        }
        i++;
    }
    while(i<=numsSize-1)
    {
        if(*(nums+i)<*(nums+i-1))
            return 0;
        i++;
    }
    return 1;
}
