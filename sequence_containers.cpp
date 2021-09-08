#include <iostream>
#include <vector>
#include <array>
#include <deque>
#include <list>

int main()
{
	//vector相当于数组
	std::vector<int> v = { 7, 5, 16, 8 };

	v.push_back(25);
	v.push_back(13);

	v.pop_back();
	std::cout << "v = { ";
	for (int n : v) {
		std::cout << n << ", ";
	}
	std::cout << "}; \n";

	//array元素是连续存储的，这意味着不仅可以通过迭代器访问元素，还可以使用指向元素的常规指针的偏移量。
	std::array<std::string, 2> s { std::string("a"), "b" };
	std::array<std::string, 2> ss = { std::string("c"), "d" };
	std::cout << ss.at(0)<<std::endl;
	std::cout << ss[1] << std::endl;

	//deque(双端队列）是一个索引序列容器，允许在其开头和结尾进行快速插入和删除。
	std::deque<int> d = {7, 5, 16, 8};
	d.push_front(13);
	d.push_back(25);
	for (int n : d) {
		std::cout << n << '\n';
	}

	//list从容器中的任何地方插入和删除元素的恒定时间,不支持快速随机访问,它通常被实现为一个双向链表。
	std::list<int> l = { 7, 5, 16, 8 };
	l.push_front(25);
	l.push_back(13);

	auto it = std::find(l.begin(), l.end(), 16);
	if (it != l.end()) {
		l.insert(it, 42);
	}

	std::cout << "l = { ";
	for (int n : l) {
		std::cout << n << ", ";
	}
	std::cout << "};\n";
}
