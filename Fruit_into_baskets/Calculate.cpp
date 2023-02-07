#include "calculate.h"

bool Calculate::hasLotNums(std::vector<int>& arr)
{
    std::set<int> nums;

    for (int i = 0; i < arr.size(); i++)
    {
        nums.insert(arr[i]);
    }

    if (nums.size() < 3) return true;
    else return false;
}

int Calculate::getLine(int j, std::vector<int>& arr)
{
    int res = 0;
    int basket1name = arr[j];
    int basket2name = -1;

    int size = arr.size();

    for (int i = j; i < size; ++i)
    {
        if (basket2name == -1)
        {
            if (arr[i] == basket1name)
            {
                ++res;
            }
            else
            {
                basket2name = arr[i];
                ++res;
            }
        }
        else
        {
            if (arr[i] == basket1name)
            {
                ++res;
            }
            else if (arr[i] == basket2name)
            {
                ++res;
            }
            else
            {
                return res;
            }
        }
    }

    return res;
}

int Calculate::totalFruit(std::vector<int>&fruits) {

    if (hasLotNums(fruits)) { return fruits.size(); }

    int max = 0;
    int previous;
    int num;

    num = getLine(0, fruits);
    if (max < num)
    {
        max = num;
    }

    for (int i = 1; i < fruits.size(); ++i)
    {
        if (fruits[i] != fruits[i - 1])
        {
            num = getLine(i, fruits);
            if (max < num)
            {
                max = num;
            }
        }
    }
    return max;
}
