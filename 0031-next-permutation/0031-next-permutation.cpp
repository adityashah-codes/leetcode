class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n=a.size();
        int pvt=-1;

        for(int i=n-2;i>=0;i--){
            if(a[i]<a[i+1]){
                pvt=i;
                break;
            }
        }

        if(pvt==-1){
            reverse(a.begin(),a.end());
            return;
        }

        for(int i=n-1;i>pvt;i--){
            if(a[i]>a[pvt]){
                swap(a[i],a[pvt]);
                break;
            }
        }

        int i=pvt+1,j=n-1;

        while(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }return;

    }
};