# 段落
* 一个段落是由一个以上的连接的行句组成，而一个以上的空行则会划分出不同的段落（空行的定义是显示上看起来像是空行，就被视为空行，例如有一行只有空白和 tab，那该行也会被视为空行），一般的段落不需要用空白或换行缩进。
# 标题
* 在在行首插入1到6个`#`，对应标题1到6阶
# 区块引用
* 区块引用则使用 email 形式的 '>' 角括号。  
	>示例
# 修辞和强调
* 使用星号和底线来标记需要强调的区段:  
加粗 :`**Bold**`  
斜体字 :`*Italics*`
# 列表
* 无序列表使用星号、加号和减号来做为列表的项目标记，这些符号是都可以使用的，使用星号： 
 
		* Candy.
		* Gum.
		* Booze.
	加号：

		+ Candy.  
		+ Gum.
		+ Booze.
	和减号:  

		- Candy.  
		- Gum.  
		- Booze.  

* 有序的列表则是使用一般的数字接着一个英文句点作为项目标记：  

		1. Red 
		2. Green 
		3. Blue 

* 如果你在项目之间插入空行，那项目的内容会用 `<p>` 包起来，你也可以在一个项目内放上多个段落，只要在它前面缩排 4 个空白或 1 个 tab 。
# 链接
* 支持两种形式的链接语法： 行内 和 参考 两种形式，两种都是使用角括号来把文字转成连结。

* 行内形式是直接在后面用括号直接接上链接：

		[百度](http://www.baidu.com/)    
[百度](http://www.baidu.com/)

	你也可以选择性的加上 title 属性：  

		[百度](http://www.baidu.com/ "baidu")  
[百度](http://www.baidu.com/ "baidu")  
* 参考形式的链接让你可以为链接定一个名称，之后你可以在文件的其他地方定义该链接的内容：
*
	> title 属性是选择性的，链接名称可以用字母、数字和空格，但是不分大小写
	
		[百度][q1] 
		[360搜索][q2]

		[q1]: http://www.baidu.com/
		[Q2]: http://www.so.com/ "360搜索"

	[百度][q1]   
	[360搜索][q2]

[q1]: http://www.baidu.com/
[Q2]: http://www.so.com/ "360搜索"
# 图片
* 行内形式（title 是选择性的）：

		![图片1](/001.jpg "图片1")
		![图片2](http://www.juluren.com/bbs/data/attachment/forum/month_0811/20081108_bcbd6f87d27a0ec2187a8JjGrr8ODH7A.jpg "图片2")
![图片1](/001.jpg "图片1")
![图片2](http://www.juluren.com/bbs/data/attachment/forum/month_0811/20081108_bcbd6f87d27a0ec2187a8JjGrr8ODH7A.jpg "图片2")
* 参考形式：

		![图片1][1]
		![图片2][2]

		[1]: /001.jpg "图片1"
		[2]: http://www.juluren.com/bbs/data/attachment/forum/month_0811/20081108_bcbd6f87d27a0ec2187a8JjGrr8ODH7A.jpg "图片2"

![图片1][1]
![图片2][2]

[1]: /001.jpg "图片1"
[2]: http://www.juluren.com/bbs/data/attachment/forum/month_0811/20081108_bcbd6f87d27a0ec2187a8JjGrr8ODH7A.jpg "图片2"
# 代码
* 在一般的段落文字中，你可以使用反引号 ` 来标记代码区段，区段内的 &、< 和 > 都会被自动的转换成 HTML 实体，这项特性让你可以很容易的在代码区段内插入 HTML 码：

		I strongly recommend against using any `<blink>` tags.

		I wish SmartyPants used named entities like `&mdash;`
		instead of decimal-encoded entites like`&#8212;`.
	I strongly recommend against using any `<blink>` tags.

	I wish SmartyPants used named entities like
	`&mdash;`
	instead of decimal-encoded entites like
	`&#8212;`.




