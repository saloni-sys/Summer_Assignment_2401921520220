class Solution {
public:
    bool isPalindrome(string s) {

      int st=0,end=s.size()-1;
       while(st<end){
      
      if(!isalnum(s[st])){
        st++;//skip
      }
     else if(!isalnum(s[end])){
       end--;//skip
     }

      else if(tolower(s[st])!=tolower(s[end])){

        return false;// not a palindrome
      }  

         else{
           st++;
           end--;
         }
        
        }
      
      
return true;
    }
};
