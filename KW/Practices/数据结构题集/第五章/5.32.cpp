函数：
	如果两个链表均为空，return 1
	如果两个链表均不为空：
		判断元素类型是否相同：
			相同：
				如果是原子结点并且相同，return 1
				如果是表结点：
					if（函数（表头））
						return 1
					if（函数（表尾））
						return 1
	return 0
				