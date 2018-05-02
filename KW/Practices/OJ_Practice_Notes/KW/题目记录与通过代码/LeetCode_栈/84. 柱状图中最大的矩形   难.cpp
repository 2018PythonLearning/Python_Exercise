//https://blog.csdn.net/jingsuwen1/article/details/51577983
/*
Ҫ��2�Ž�ȥ  5 6��Ҫ���������ܷŽ�ȥ
����5 6��û�м����
��������Ҫ��ȫ�����ľ���
���Ե����Ĳ�����Ҫ����
��Ϊ�����Ĳ��ֱض��������
��Ҫ�������ǵ�Ŀ�������չ���һ����һ������������
����Ŀ���ǹ���һ����������
�����ڹ����бض����в���������
�������Ҫ��������������Ĳ���
��ô�ͱ���ѿ����ⲿ�ֵ����������е����ֵ������
Ȼ����ȥ���������Ĺ�����������е����ֵ�Ƚ�
��Ȼֱ�ӿ����Ļ����൱�ڶ�ʧ����Ϣ
������ǰѿ����Ĳ��ּ��� ���൱��ȫ��������Ϣ���ǿ��ǵ���
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