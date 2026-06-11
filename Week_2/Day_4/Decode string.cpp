class Solution {
public:
    string decodeString(string s) {
        stack<int>numstack;
        stack<string>stringstack;
        int k=0;

        for(char c:s){

            if(isdigit(c)){
                k=(k*10)+(c-'0');
                continue;
            }

            if(c=="["){
                numstack.push(k);
                k=0;
                stringstack.push("[");
                continue;
            }

            if(c!=']'){
                string temp(1,c);
                stringstack.push(temp);
                continue;
            }

            string temp=" ";//as we got] so need temp string to store element of stack till]

            while(stringstac.top()!="["){
                temp=stringstack.top()+temp;
                stringstack.pop();
            }

            //remove
            stringstack.pop();
            string replacement=" ";
            int count=numstack.top();
            numstack.pop();

            for(int i=0;i<count;i++){
                replacement+=temp;
            }

            stringstack.push(replacement);

        }

        string result="";

        while(!stringstack.empty()){
            result=stringstack.top()+result;
            stringstack.pop();
        }
       return result; 
    }
}
