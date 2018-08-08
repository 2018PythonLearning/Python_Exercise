/**
* Definition for an interval.
* struct Interval {
*     int start;
*     int end;
*     Interval() : start(0), end(0) {}
*     Interval(int s, int e) : start(s), end(e) {}
* };
*/
class Solution {
public:
	static bool bj(Interval a, Interval b)
	{
		return a.start < b.start;
	}
	vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
		intervals.push_back(newInterval);
		sort(intervals.begin(), intervals.end(), bj);
		vector<Interval> vi;
		for (int i = 0; i < intervals.size();)
		{
			vi.push_back(intervals[i]);
			if (i == intervals.size() - 1)
				break;

			for (int x = 1; ;)
			{
				if (intervals[x + i].start <= vi[vi.size() - 1].end)
				{
					if (intervals[x + i].end > vi[vi.size() - 1].end)
						vi[vi.size() - 1].end = intervals[x + i].end;
					x++;
				}
				else
				{
					i = i + x;
					break;
				}
				if (x + i == intervals.size())
				{
					i = i + x;
					break;
				}

			}
		}
		return vi;


		// vector<Interval> vi;
		// for(int i = 0; i < intervals.size(); i++)
		// {
		//     vi.push_back(intervals[i]);
		//     if(vi[vi.size()-1] > newInterval.start)
		// }
	}
};