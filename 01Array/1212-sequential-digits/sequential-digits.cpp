class Solution {
public:
  int createseq(int countdigit)
{
  long long  int firstdigit = 0;
  long long  int x = 0;
  long long  int c= 1;
    while(x<countdigit)
    {
        firstdigit  = firstdigit*10 + c;
        c++;
        x++;
    }
        return firstdigit;
}
   int inc1(int countdigit)
   {
   long long int addone =0;
     long long    int x = 0;
       long long  int c= 1;
    while(x<countdigit)
    {
    addone  = addone*10 + c;
    x++;
    }
    return addone;
   }
   bool check(int firstdigit)
   {
   long long int temp = firstdigit;
   long long int c=1;
    while(temp>0)
    {
        temp = temp/10;
        c++;
    }
    if(c==1)
    {
        return false;
    }
    int x1 = firstdigit%10;
    firstdigit = firstdigit/10;
    while(firstdigit>0)
    {
        int x2 = firstdigit%10;
        if(x1-x2!=1)
        {
      return false;
        }
        x1 =x2;
        firstdigit = firstdigit/10;
    }
    return true;
   }
    vector<int> sequentialDigits(int low, int high) {
    vector<int> result;
    int countdigit = 0;
 
 int temp = low;
 while(temp>0)
   {
    temp = temp/10;
    countdigit++;
   }
  long long int firstdigit = createseq(countdigit);
   
 if(firstdigit==0)
 {
    return result;
 }
int lastdigit = firstdigit%10;
  cout<<"firstdigit "<<firstdigit<<endl;
  cout<<"countdigit "<<countdigit<<endl;
    while(firstdigit<=high)
    {
        // repersenting the first number in that digit ex-> 4didigts
        
        if(lastdigit==9)
        {
            if(check(firstdigit) && firstdigit>=low){
            result.push_back(firstdigit);
            }
            countdigit  += 1;
            firstdigit = 0;
             int x = 0;
             int c= 1;
             while(x<countdigit)
             {
                firstdigit  = firstdigit*10 + c;
                c++;
                x++;
             }
             cout<<"in lsstdigit loop "<<firstdigit<<endl;
        }
        if(firstdigit>=low && firstdigit<= high)
        {
            cout<<"first digit in if "<<firstdigit<<endl;
            bool y = check(firstdigit);
            cout<<" y is "<<y<<endl;
            if(y){
            result.push_back(firstdigit);
            }
           
             
        }

        //low = firstdigit;
        firstdigit = firstdigit + inc1(countdigit);
       lastdigit = firstdigit%10;
    }
    return result;
    }
};