 int n = arr.size();

    int low = 0 ;

    int  high = n-1;  

    while(low < high )

    {

        int mid = (low + high)/2;

        if(arr[mid] > arr[high])

        {

            low = mid+1;

        }

        else

        {

            high = mid;

        }

    }

 

    return low;
