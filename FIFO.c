#include <stdio.h>

int in(int arr[],int n,int size)
{
    int flag = 0;
    for(int i=0 ; i<size ; i++)
    {
        if(arr[i] == n)
        {
            flag  = 1;
        }
    }

    if(flag == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int NoOfFrames;
    printf("Enter Number of Frames : ");
    scanf("%d",&NoOfFrames);

    int Frames[NoOfFrames];
    for(int i=0 ; i<NoOfFrames ; i++)
    {
        Frames[i] = -1;
    }

    int NoOfRequests;
    printf("Enter Number of Requests : ");
    scanf("%d",&NoOfRequests);
    
    int ReferenceString[NoOfRequests];

    printf("Enter Reference String : ");

    for(int i=0 ; i<NoOfRequests ; i++)
    {
        scanf("%d",&ReferenceString[i]);
    }

    int hits=0;
    int faults = 0;

    int index = 0;
    for(int i=0 ; i<NoOfRequests ; i++)
    {
        if(in(Frames,ReferenceString[i],NoOfFrames))
        {
            hits++;
        }
        else
        {
            faults++;
            Frames[index] = ReferenceString[i];
            index = (index + 1) % NoOfFrames;
        }
        //For seeing order 
        /*
        for(int k=0 ; k<NoOfFrames ; k++)
        {
            printf("%d ",Frames[k]);
        }
        printf("\n");
        */
    }

    printf("Hits = %d\nFaults = %d\n",hits,faults);
    printf("Hit Ratio = %f\nMiss Ratio = %f\n",(float)hits/NoOfRequests,(float)faults/NoOfRequests);    

    return 0;
}

//Sample Input Output
// Enter Number of Frames : 3
// Enter Number of Requests : 15
// Enter Reference String : 7 0 1 2 0 3 0 4 2 3 0 3 1 2 0
// Hits = 3
// Faults = 12
// Hit Ratio = 0.200000
// Miss Ratio = 0.800000