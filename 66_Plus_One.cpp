/* ************************************************************************
> File Name:     27_Remove_Element.cpp
> Author:        wangdesheng
> Mail:          wangdesheng2008@163.com
> Created Time:  2022年04月19日 星期二 22时24分06秒
> Description:
 ************************************************************************/
#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;
class Solution
{
public:
    vector<int> plusOne(vector<int>& digits)
    {
        for(int i = digits.size()-1; i>= 0; --i)
        {
            if(digits[i]<9)
            {
                digits[i]++;
                return digits;
            }
            else
            {
                digits[i] =0;
            }
        }
        //999999999 答案变成了100000000,干脆把第一为变成1,后面增加一个0,
        digits.push_back(0);
        digits[0]=1;
        return digits;
    }
};
int main()
{
    cout<<"--------------begin---------------"<<endl;
    Solution so;
    int arr[] = {9,9,9,9};
    vector<int> nums(begin(arr),end(arr));
    vector<int> res = so.plusOne(nums);
    for(int i=0; i< res.size(); ++i)
    {
        cout<< res[i]<<" ";
    }
    cout<<endl<<"---------------end----------------"<<endl;
}
