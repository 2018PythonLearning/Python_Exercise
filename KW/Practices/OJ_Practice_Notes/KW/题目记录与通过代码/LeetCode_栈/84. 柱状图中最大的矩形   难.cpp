//https://blog.csdn.net/jingsuwen1/article/details/51577983
/*
要把2放进去  5 6需要弹出来才能放进去
但是5 6是没有计算的
我们现在要算全局最大的矩形
所以弹出的部分需要计算
因为弹出的部分必定是升序的
重要的是我们的目的是最终构造一个第一步这样的序列
我们目的是构造一个升序序列
但是在过程中必定会有不满足的情况
如果我们要砍掉不满足升序的部分
那么就必须把砍掉这部分的升序子序列的最大值计算了
然后再去和我们最后的构造的升序序列的最大值比较
不然直接砍掉的话就相当于丢失了信息
如果我们把砍掉的部分计算 就相当于全局所有信息都是考虑到了
*/


class Solution {
public:
	int largestRectangleArea(vector<int>& heights) {
		//https://blog.csdn.net/jingsuwen1/article/details/51577983
		if (heights.empty())
		{
			return 0;
		}
		int count = 0;
		int max = 0;
		stack<int> a;
		a.push(heights[0]);
		for (int i = 1; i < heights.size(); i++)
		{
			if (heights[i] >= a.top())
			{
				a.push(heights[i]);

			}
			else
			{
				while (!a.empty() && heights[i] < a.top())
				{
					count++;
					if (a.top() * count > max)
					{
						max = a.top() * count;
					}
					a.pop();
				}
				while (count > 0)
				{
					a.push(heights[i]);
					count--;
				}
				a.push(heights[i]);
			}

		}
		count++;
		while (!a.empty())
		{
			if (a.top() * count > max)
			{
				max = a.top() * count;
			}
			count++;
			a.pop();
		}

		return max;





		// vector<int> a;
		// int n = 1;
		// int max = 0;
		// int hesize = heights.size();
		// for(int i = 0; i < hesize; i++)
		// {
		//     a.push_back(heights[i]);
		//     while(n + i < hesize && heights[i] <= heights[n + i])
		//     {
		//         a[i] += heights[i];
		//         n++;
		//     }
		//     n = 1;
		//     while(i - n >= 0 && heights[i] <= heights[i - n])
		//     {
		//         a[i] += heights[i];
		//         n++;
		//     }
		//     n = 1;
		// }
		// for(int i = 0; i < a.size(); i++)
		// {
		//     if(max < a[i])
		//     {
		//         max = a[i];
		//     }
		// }
		// return max;
	}
};