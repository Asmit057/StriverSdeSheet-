class Solution {
public:
  bool check(int firstdigit)
    {
        int temp = firstdigit;
        int c = 0;

        while (temp > 0)
        {
            temp /= 10;
            c++;
        }

        if (c == 1)
            return false;

        int x1 = firstdigit % 10;
        firstdigit /= 10;

        while (firstdigit > 0)
        {
            int x2 = firstdigit % 10;

            if (x1 - x2 != 1)
                return false;

            x1 = x2;
            firstdigit /= 10;
        }

        return true;
    }

    vector<int> sequentialDigits(int low, int high)
    {
        vector<int> result;

        // Count digits of low
        int countdigit = 0;
        int temp = low;

        while (temp > 0)
        {
            countdigit++;
            temp /= 10;
        }

        while (countdigit <= 9)
        {
            // Starting digit can be at most (10-countdigit)
            for (int start = 1; start <= 10 - countdigit; start++)
            {
                int num = 0;

                for (int d = start; d < start + countdigit; d++)
                {
                    num = num * 10 + d;
                }

                if (num > high)
                    return result;

                if (num >= low && check(num))
                    result.push_back(num);
            }

            countdigit++;
        }

        return result;
    }
};