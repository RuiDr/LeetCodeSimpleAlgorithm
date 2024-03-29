﻿// LeetcodeSimpleAlgorithmicExercise.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target);

int reverse(int x);


int main()
{
    std::cout << "Hello World!\n";
	cout<<reverse(-123)<<endl;
}
// 两数之和 
vector<int> twoSum(vector<int>& nums, int target) 
{
	int i, j=0;
	map<int, int>mapNum;
	for (i = 0; i < nums.size(); i++)
	{

		auto it = mapNum.find(target - nums[i]);
		if (it != mapNum.end())
		{
			
			return {it->second,i};
		}
		mapNum.insert(pair<int, int>(nums[i], i));

	}
	return {i,j};
}
// 给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
int reverse(int x)
{
	// 判断是否在-2~31-2~31-1

	long rev = 0;
	while (x)
	{
		int pop = x % 10;
		x /= 10;
		rev = rev * 10 + pop;
	}
	return (rev > INT_MAX || rev < INT_MIN) ? 0 : static_cast<int>(rev);

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
