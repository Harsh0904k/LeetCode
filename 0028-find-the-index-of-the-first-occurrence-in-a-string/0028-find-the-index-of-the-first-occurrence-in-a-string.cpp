class Solution {
public:
    int strStr(string haystack, string needle) {
        int size = haystack.length();
        int n = needle.length();
        int i = 0;
        if(n>size){
            return -1;
        }
        int a = i;
        while (a <= size - n){
            int i = a;
           
            for(int j = 0; j<n; j++){
                if(haystack[i]!=needle[j]){
                    cout<<haystack[i]<<endl;
                    if(i<size){
                        i++;
                    }
                     cout<<"break"<<endl;
                    break;
                }
                else if(j==n-1){
                    return i-n+1;
                }
                else{
                    cout<<haystack[i]<<endl;
                    if(i<size){
                    i++;
                    }
                    else{
                        break;
                    }
                }
            }
            a++;
            

        }
        
        return -1;
    }
};