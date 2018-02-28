# 第六章 抽象
## 6.3 创建函数
&#160; &#160; &#160;&#160;
函数是可以调用(可能包含参数，也就是放在圆括号中的值)，它执行某种行为，为应用程序提供了某种特定功能，并且代码可重用而且高度模块化。在Python中有很多内建函数，当然你也可以学会创建自己的函数。

定义函数几个关键点：

1. 函数名和括号
2. 使用 def 关键字。参数应该放在函数名后面的括号内。
3. 函数的第一个语句可以是一个可选的声明 – 文档字符串的函数或的docstring。
4. 在每个函数的代码块开始用冒号（:）和缩进。
5. 可以有 return 语句返回值，也可以没有 return 语句。

具体语法：

		def functionname( parameters ):
			"function_docstring"
			function_suite
			return [expression]

**调用函数**

&#160; &#160; &#160; &#160;
调用函数很简单，和内建函数用法一样，函数名加上括号就可以调用函数了。如果有参数要记得传入参数。具体用法下面会介绍。

&#160; &#160; &#160; &#160; 
实例，创建一个名为 `hello` 的新函数，它可以返回一个将输入的参数作为名字的问候语，然后使用内建函数一样使用它：

		>>> def hello(name):
		...     return 'hello.'+name+"!"
		...
		>>> print(hello('world'))
		hello.world!
<font color=#DC143C>书本第90 - 91页</font>  

### 6.3.1 文档化函数 （help函数、注释）

**函数加入注释**

&#160; &#160; &#160; &#160; 
在函数定义里面，可以简单的进行声明，声明一个函数的具体用途，让后面使用该函数的人能更好的理解，可以加入注释(#开头)，也可以直接写上字符串。如果在函数的开头写下字符串，它就会作为函数的一部分进行存储，这称为文档字符串。

		>>> def printme(str):
		...     "this is a new print function"
		...     print(str)
		...
		>>> printme("123")
		123

&#160; &#160; &#160; &#160; 
上面字符串 `"this is a new print function"` 就是对函数进行声明。这类注释可以按如下方式进行访问：

		>>> printme.__doc__
		'this is a new print function'

>注意:__doc__是函数属性。属性名中的双下划线表示它是个特殊属性。

&#160; &#160; &#160; &#160; 
内建的 help 函数是非常有用的。在交互式解释器中使用它，就可以得到关于函数，包括文档字符串的信息，如：

		>>> help(printme)
		Help on function printme in module __main__:
		printme(str)
			this is a new print function

<font color=#DC143C>书本第91 - 92页</font> 
### 6.3.2 并非真正意义上的函数（return语句）
&#160; &#160; &#160; &#160; 
**return 语句**

&#160; &#160; &#160; &#160; 
数学意义上的函数，总在计算参数后会返回点什么。Python的有些函数却并不返回任何东西。没有 return 语句，或者虽有return语句但 return 后边没有跟任何值的函数不返回值：

		>>> def test():
		...		print("just print something")
		...		return
		...		print("这里不会被输出")
		...
		>>> test()
		just print something

&#160; &#160; &#160; &#160; 
这里的 return 语句只起到结束函数的作用，可以看到第二个 print 语句被跳过。而且当函数没有返回值的时候，它们就返回 None，如：

		>>> x = test()
		just print something
		>>> print(x)
		None
<font color=#DC143C>书本第92页</font> 
## 6.4 参数魔法
###6.4.1 值从哪里来

&#160; &#160; &#160; &#160; 
创建函数时应该保证在收到合法参数时，执行正确的操作，收到非法参数时，执行明显的异常（一般通过断言（assert）或者异常 （exception）来实现）。  

* 形式参数（formal parameters）：在函数定义中的参数；  
* 实际参数（actual parameters）：在调用时的参数； 
 
<font color=#DC143C>书本第93页</font> 
### 6.4.2 我能改变参数吗
&#160; &#160; &#160; &#160; 
在函数内为参数赋予新值不会改变外部任何变量的值：

		>>> def try_to_change(n):
		...		n='Mr.gumby'
		>>> name='Mrs.entity'
		>>> try_to_change(name)
		>>> name
		'Mrs.entity'

&#160; &#160; &#160; &#160; 
如果参数是列表，那么如果函数中修改了参数，也将修改原列表：

		>>> def change(n):
		...		n[0]='signjing'
		>>> names=['Li lei','Han meimei']
		>>> change(names)
		>>> names
		['signjing', 'Han meimei']

&#160; &#160; &#160; &#160; 
下面不用函数调用再做一次：

		>>> names=['Li lei','Han meimei']
		>>> n=names		#模拟传参行为
		>>> n[0]='signjing'	#改变列表
		>>> names
		['signjing', 'Han meimei']

&#160; &#160; &#160; &#160; 
之前也出现过这种情况：当两个变量同时引用一个列表的时候，它们的确是同时引用一个列表。如果想避免这种情况，可以复制一个列表的副本。当在序列中做切片的时候，返回的切片总是一个副本。因此，如果你复制了整个列表的切片，将会得到一个副本：

		>>> names=['Li lei','Han meimei']
		>>> n=names[:]
		>>> n
		['Li lei', 'Han meimei']
		>>> names
		['Li lei', 'Han meimei']
		>>> n is names
		False
		>>> names == n
		True

&#160; &#160; &#160; &#160; 
现在改变n，则不会影响到names。

<font color=#DC143C>书本第93 - 94页</font> 

&#160; &#160; &#160; &#160; 
在某些语言（如c++、Ada）中，重绑定参数并且使这些改变影响到函数外的变量是很平常的事情。但在python中是不可能的，函数只能修改参数对象本身。但如果参数不可变，如数字，又该怎么办呢？答案是没有办法。这时候应该从函数中返回所有需要的值，如果值多于一个，则以元组形式返回。

&#160; &#160; &#160; &#160; 
例如，将变量数值增1的函数可以这样写：

		>>> def inc(x):return x+1
		>>> foo=10
		>>> foo=inc(foo)
		>>> foo
		11

&#160; &#160; &#160; &#160; 
如果真的想改变参数，可以使用一点小技巧，即将值放置在列表中：

		>>> def inc(x):x[0]=x[0]+1
		>>> foo=[10]
		>>> inc(foo)
		>>> foo
		[11]

&#160; &#160; &#160; &#160; 
这样就只会返回新值。

<font color=#DC143C>书本第96 - 97页</font> 

#### 储存名字，并且能用名字、中间名、或姓查找联系人的程序

<font color=#DC143C>书本第94 - 96页</font> 

### 6.4.3 关键字参数和默认值

* 位置参数：

&#160; &#160; &#160; &#160; 
目前我们所使用的参数都叫做位置参数，因为它们的位置很重要——事实上比它们的名字更重要。  
&#160; &#160; &#160; &#160; 
比如：
		
		>>> def hello_1(greeting,name):
		...		print '%s,%s' %(greeting,name)
		>>> def hello_2(name,greeting):
		...		print '%s,%s' %(name,greeting)
		>>> hello_1('hello','boy')
		hello,boy
		>>> hello_2('hello','girl')
		hello,girl

* 关键字参数：

&#160; &#160; &#160; &#160; 
有些时候（尤其是参数很多的时候），参数的顺序是很难记住的。为了让事情简单些，可以提供参数的名字：
		
		>>> hello_1(greeting='hello',name='boy')
		hello,boy
		>>> hello_1(name='boy',greeting='hello')
		hello,boy

&#160; &#160; &#160; &#160; 
但参数名和值一定要对应：

		>>> hello_2(name='boy',greeting='hello')
		boy,hello
		>>> hello_2(greeting='hello',name='boy')
		boy,hello

&#160; &#160; &#160; &#160; 
这类使用参数名提供的参数叫做关键字参数。主要作用是明确每个参数的作用。

* 默认值：

&#160; &#160; &#160; &#160; 
当参数具有默认值的时候，调用的时候就不用提供参数了。可以不提供、提供一些或者提供所有的参数：
		
		>>> def hello_3(greeting='hello',name='world'):
		...		print '%s,%s!' %(greeting,name)
		>>> hello_3()
		hello,world!
		>>> hello_3('Greeting')
		Greeting,world!
		>>> hello_3('Greeting','universe')
		Greeting,universe!
		>>> hello_3(name='boys')
		hello,boys!

&#160; &#160; &#160; &#160; 
位置和关键字参数是可以联合使用的。把位置参数放置在前面就可以了。

>注意：除非完全清楚程序的功能和参数的意义，否则应该避免混合使用位置参数和关键字参数。

<font color=#DC143C>书本第97 - 99页</font> 

### 6.4.4 收集参数 （在定义里使用星号）

* 收集参数：用`*`+参数名来收集其余的位置参数，放置在同一个元组中。（没有就是一个空元组）

		>>> def print_params(*params):
		...		print params
		>>> print_params(1,2)
		(1, 2)
		>>> print_params(1,2,'ab')
		(1, 2, 'ab')
		>>> def print_params_2(title,*params):
		...		print title
		...		print params
		>>> print_params_2('Params: ',1,2,3)
		Params: 
		(1, 2, 3)

* 关键字参数：`**`+参数名收集有关键字的参数，得到一个字典。（没有就是一个空字典）

		>>> def print_params_3(**params):
		...		print params
		>>> print_params_3(x=1,y=2,z=3)
		{'y': 2, 'x': 1, 'z': 3}
		>>> def TestDoubleStar(x, **params):
		...		print(x)
				print(params)
				return
		>>> TestDoubleStar(x=1,y=2,z=3)
		1
		{'y': 2, 'z': 3}

<font color=#DC143C>书本第99 - 101页</font> 

### 6.4.5参数收集的逆过程 （在调用里使用星号）

&#160; &#160; &#160; &#160; 
函数收集的逆过程，在调用而不是在定义时使用。
使用一个星号来传递元组，使用两个星号来传递字典：

* 传递元组（一个星号）：

		>>> def add(x,y):
		...		return x+y
		>>> params=(1,2)
		>>> add(*params)
		3

* 传递字典（两个星号）（一个星号是键，两个星号是值）：

		>>> def hello_3(greeting='hello',name='world'):
		...		print '%s, %s!' %(greeting,name)
		>>> params={'name':'Sir Robin','greeting':'Well met'}
		>>> hello_3(*params)
		name, greeting!
		>>> hello_3(**params)
		Well met, Sir Robin!

<font color=#DC143C>书本第101 - 102页</font> 

## 6.5 作用域

* 函数内部赋值全局使用：关键字global。
* 函数内部赋值外部作用域（并非全局变量）：关键字nonlocal。

&#160; &#160; &#160; &#160; 
变量可以看做是值的名字，然变量-所对应的值是个”不可见“的字典。内建的vars 函数可以返回这个字典：

		>>> x=1
		>>> scope=vars()
		>>> scope['x']
		1
		>>> scope['x']+=1
		>>> x
		2

&#160; &#160; &#160; &#160; 
一般来说，vars所返回的字典是不能修改的，结果是未定义的，可能得不到想要的结果

&#160; &#160; &#160; &#160; 
这类“不可见字典”叫做命名空间或者作用域。到底有多少个命名空间？除了全局作用域外，每个函数调用都会创建一个新的作用域。

&#160; &#160; &#160; &#160; 
读取全局变量一般来说并不是问题，但是还是有个会出问题的事情。如果局部变量或者参数的名字和想要访问的全局变量名相同的话，就不能直接访问了。全局变量会被局部变量屏蔽。

&#160; &#160; &#160; &#160; 
如果的确需要的话，可以使用**globals函数**获取全局变量值，该函数的近亲是**vars**，它可以返回全局变量的字典（**locals**返回局部变量的字典）。

&#160; &#160; &#160; &#160; 
重绑定全局变量（使变量引用其他新值）：如果在函数内部将值赋予一个变量，它会自动成为局部变量——除非告知python将其声明为全局变量，在声明前添加关键字global：

		>>> x=1
		>>> def change_global():
		global x
		x=x+1
		>>> change_global()
		>>> x
		2

&#160; &#160; &#160; &#160; 
Python的函数是可以嵌套的：

		def foo():
			def bar():
				print "Hello,World！"
			bar()

&#160; &#160; &#160; &#160; 
函数嵌套有一个很突出的应用，例如需要一个函数“ 创建 ”另一个。也就意味着可以像下面这样（在其他函数内）书写函数：
		
		def multiplier(factor):
			def multiplyByFactor(number):
				return number*factor
			return multiplyByFactor

&#160; &#160; &#160; &#160; 
一个函数位于另外一个里面，外层函数返回里层函数。也就是说函数本身被返回了，但并没有被调用。重要的是返回的函数还可以**访问它的定义所在的作用域**。换句话说，它“带着”它的环境（和相关的局部变量）。

&#160; &#160; &#160; &#160; 
每次调用外层函数，它内部的函数都被重新绑定。 `factor` 变量每次都有一个新的值。由于Python的嵌套作用域，来自（`multiplier`的)外部作用域的这个变量，稍后会被内层函数访问：

		>>> double = multiplier(2)
		>>> double(5)
		10
		>>> triple = multiplier(3)
		>>> triple(3)
		9
		>>> multiplier(5)(4)
		20

&#160; &#160; &#160; &#160; 
类似 `multiplayByFactor` 函数存储子封闭作用域的行为叫做闭包（closure）。

&#160; &#160; &#160; &#160; 
外部作用域的访问方式（并非全局变量）：`nonlocal`关键字。

<font color=#DC143C>书本第103 - 105页</font> 

#### vars()函数

* 描述：  
&#160; &#160; &#160; &#160; 
vars() 函数返回对象object的属性和属性值的字典对象。
* 语法：  
&#160; &#160; &#160; &#160; 
vars([object])
* 参数：  
&#160; &#160; &#160; &#160; 
object -- 对象
* 返回值：  
&#160; &#160; &#160; &#160; 
返回对象object的属性和属性值的字典对象，如果没有参数，就打印当前调用位置的属性和属性值 类似 locals()。
* 实例：

		>>> x=1
		>>> scope=vars()
		>>> scope['x']
		1
		>>> scope['x']+=1
		>>> x
		2

<font color=#DC143C>书本第104页</font> 

#### globals()函数

* 描述：    
&#160; &#160; &#160; &#160; 
globals() 函数会以字典类型返回当前位置的全部全局变量。
* 语法：  
&#160; &#160; &#160; &#160; 
globals()  
* 参数：  
&#160; &#160; &#160; &#160; 
无
* 返回值：    
&#160; &#160; &#160; &#160; 
返回全局变量的字典。
* 实例：  

		>>> def combine(parameter):
		...     print(parameter + globals()['parameter'])
		...
		>>> parameter='berry'
		>>> combine('melon')
		melonberry

<font color=#DC143C>书本第104页</font> 

#### locals()函数
* 描述:  
&#160; &#160; &#160; &#160; 
locals() 函数会以字典类型返回当前位置的全部局部变量。
对于函数, 方法, lambda 函式, 类, 以及实现了 __call__ 方法的类实例, 它都返回 True。
* 语法:  
&#160; &#160; &#160; &#160; 
locals()
* 参数:  
&#160; &#160; &#160; &#160; 
无
* 返回值:  
&#160; &#160; &#160; &#160; 
返回字典类型的局部变量。
* 实例:  

		>>>def runoob(arg):    # 两个局部变量：arg、z
		...     z = 1
		...     print (locals())
		... 
		>>> runoob(4)
		{'z': 1, 'arg': 4}      # 返回一个名字/值对的字典
		>>>
		
<font color=#DC143C>书本第104页</font> 

## 6.6 递归
函数自身调用自身。

<font color=#DC143C>书本第105 - 106页</font> 

### 6.6.1 两个经典：乘阶和幂

* 计算数 n 的的阶乘：

	for版本：
	
		def factorial(n):
		    result = n
		    for i in range(1,n):
		        result *= 1
		        return result

	递归实现：

	* 1的阶乘是1；
	* 大于1的数，n的阶乘是 n 乘 n-1 的阶乘。

	递归版本：

		def factorial(n):
		    if n == 1:
		        return 1
		    else:
		        return n * factorial(n-1)

* 计算幂：

	for版本：  
	&#160; &#160; &#160; &#160; 
	power(x,n) ( x 为 n 的幂次）是 x 自乘 n-1 次的结果（所以 x 用作乘数 n 次。

		def power(x,n):
	    result = 1
	    for i in range(n):
	        result *= x
	    return result

	递归实现：

	* 对于任意数字 x 来说，power(x,0)是1；
	* 对于任何大于0的数来说， power(x,n) 是 x 乘以 (x,n-1) 的结果。
		
	递归版本：

		def power(x,n):
	    if n == 0:
	        return 1
	    else:
	        return x * power(x,n-1)

&#160; &#160; &#160; &#160; 
**理解定义是最困难的部分——实现就简单了。**

<font color=#DC143C>书本第106 - 107页</font> 

### 6.6.2 递归经典案例：二分法查找

* 递归实现：
	* 如果上下限相同，那么就是数字所在位置，返回；  
	* 否则找到两者的中点（上下限的平均值），查找数字是在左侧还是在右侧，继续查找数字所在的那半部分。
	
			def search(sequence,number,lower,upper):
		    if lower == upper:
		        assert number == sequence[upper]
		        return upper
		    else:
		        #整数除法//,浮点数除法/
		        middle = (lower + upper) // 2 
		        if number > sequence[middle]:
		            return search(sequence,number,middle+1,upper)
		        else:
		            return search(sequence,number,lower,middle)

&#160; &#160; &#160; &#160; 
**提示：标准库中的 bisect 模块可以非常有效地实现二分查找。**

<font color=#DC143C>书本第107 - 109页</font> 

#### 补充：函数式编程

&#160; &#160; &#160; &#160; 
Python在应对“函数式编程”方面有一些有用的函数： map 、 filter 和 reduce 函数（Python3.0中都被移至 fuctools 模块中）。

&#160; &#160; &#160; &#160; 
map 和 filter 在目前版本的Python并非特别有用，并且可以使用 列表推导式 代替。不过可以使用 map 函数将序列中的元素全部传递给一个函数：

		>>> map(str,range(10))`        #Equivalent to [str(i) for i in range(10)]
		['0','1','2','3','4','5','6','7','8','9']

&#160; &#160; &#160; &#160; 
filter 函数可以基于一个返回布尔值的函数对元素进行过滤。

		#island 判断字符变量是否为字母或数字，
		#若是则返回非零，否则返回零
		>>> def fun(x):
		        return x.isalnum()    
		>>> seq = ["foo","x41","?!","***"]
		>>> filter(func,seq)
		['foo','x41']

&#160; &#160; &#160; &#160; 
本例中，使用列表推导式可以不用专门定义一个函数：

		>>> [x for x in seq if x.isalnum()]
		['foo','x41']

&#160; &#160; &#160; &#160; 
事实上，还有个叫做 lambda 表达式的特性，可以创建短小的函数。

		>>> filter(lambda x: x.isalnum().seq)
		['foo','x41']


&#160; &#160; &#160; &#160; 
reduce 函数一般来说不能轻松被列表推导式替代，但是通常用不到这个功能。它会将序列的前两个元素与给定的函数联合使用，并且将它们的返回值和第3个元素继续联合使用，直到整个序列都处理完毕，并且得到一个最终结果 。

&#160; &#160; &#160; &#160; 
可以使用 reduce 函数加上 lambda x,y:x+y （继续使用相同的数字）:

		>>> numbers = [72,101,108,108,111,44,32,119,111,114,108,100,33]
		>>> reduce(lambda x,y:x+y,numbers)
		1161

&#160; &#160; &#160; &#160; 
当然，这里也可以使用内建函数。'

<font color=#DC143C>书本第109 - 110页</font> 