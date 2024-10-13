class Solution {
public:
int reverse(int x)
{
    int answer = 0;

    while (x!=0)
    {
        if (answer > INT32_MAX/10 || answer < INT32_MIN/10)
        {
            return 0;
        }
        else
        {
            answer = answer * 10 + (x % 10);
            x /= 10;
        }
    }
    return answer;
}
};