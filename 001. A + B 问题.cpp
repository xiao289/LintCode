à»à»class Solution 
{
public:
    int aplusb(int a, int b) 
    {
    a    int c=a&b;
        int d=a^b;
        return c==0?d:aplusb(c<<1,d);
    }
};
