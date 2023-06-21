#include<iostream>
#include<climits>
using namespace std;


int subarray(int arr[] , int n , int k){


	int sum = 0;
	int maxi = INT_MIN;
	int i , j = 0;


	while(j < n){


		sum = sum + arr[j];
 
		if(j-i+1 < k){
			j++;
		}
		else if(j-i+1 == k){
			// maxi = max(sum , maxi);
			if(sum > maxi){
				maxi = sum;
			}

			sum = sum - arr[i];
			i++;
			j++;
		}

	}
	return maxi;
}

int main()
{
#ifndef ONLINE_JUDGE

	
	freopen("input.txt", "r", stdin);


	freopen("output.txt", "w", stdout);


#endif


int arr[7] = {2,5,1,8,2,9,1};
int k = 3;

cout<<subarray(arr ,7 , k);




	return 0;
}


long maximumSumSubarray(int K, vector<int> &Arr , int N){
        int i=0;
        int j=0;
        long long  sum=0;
        long long  res=INT_MIN;
        while(j<N){
            sum=sum+Arr[j];
            if(j-i+1<K){
                j++;
            }
            else{
                res=max(res,sum);
                sum=sum-Arr[i];
                i++;
                j++;
            }
        }
        return res;
    }




    

    https://mega.nz/file/NncSwICB#UhaDhCPfecZAdgibGjR2KMzVyEg-UmY5MCPr1F4UP1c