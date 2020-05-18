class Solution {
public:
    int calculate(string s) {
      char lastop='+';
        int res=0;
        int i=0;
        int lastnum=0;
        while(i<s.size()){ewq 
            
            if(s[i]==' '){i++;continue;}
            else if(isdigit(s[i])){
                int num=0;
                while(isdigit(s[i])&&i<s.size()){
                    num=num*10+(s[i]-'0');
                    i++;
                }
                
                switch(lastop){
                        
                    case '+':res+=lastnum;
                        lastnum=num;break;
                    case '-':res+=lastnum;
                        lastnum=-num;break;
                    case '*':lastnum*=num;break;
                    case '/':lastnum/=num;break;
                }
                
                
            }
            else{
                lastop=s[i];
                i++;
            }
            
            
        }
        return (res+lastnum);
        
    }
};
