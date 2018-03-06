# 第七章 更加抽象

创建自己的对象（尤其是类型或者被称为类的对象）是python的核心概念——非常核心。

<font color=#DC143C>书本第112页</font>  
## 7.1 对象的魔力

对象最重要的优点包括以下几个方面：

* 多态：可以对不同类的对象使用同样的操作；
* 封装：对外部世界隐藏对象的工作细节；
* 继承：以普通的类为基础建立专门的类对象；

<font color=#DC143C>书本第112页</font>  

### 7.1.1 多态

&#160; &#160; &#160; &#160; 
多态意味着不知道变量所引用的对象类型是什么，还是能对它进行操作，而它也会根据对象（或类）类型的不同而表现出不同的行为。 

<font color=#DC143C>书本第113 - 115页</font>  

#### choice()函数 （random模块）

* 描述  
&#160; &#160; &#160; &#160; 
choice() 方法返回一个列表，元组或字符串的随机项。

* 语法  


			import random
			random.choice(seq)

	>注意：choice()是不能直接访问的，需要导入 random 模块，然后通过 random 静态对象调用该方法。

* 参数  
&#160; &#160; &#160; &#160; 
seq -- 可以是一个列表，元组或字符串。

* 返回值  
&#160; &#160; &#160; &#160; 
返回随机项。

* 实例

			>>>from random import choice
			>>>x = choice(['Hello, world!', [1, 2, 'e', 4]])
以上实例运行后输出结果可能是字符串`'Hello, world!'`，也有可能包含列表`[1, 2, 'e', 4]`

<font color=#DC143C>书本第114页</font>  

#### repr()函数

* 描述  
&#160; &#160; &#160; &#160; 
repr() 函数将对象转化为供解释器读取的形式。

* 语法

			repr(object)
* 参数  
&#160; &#160; &#160; &#160; 
object -- 对象。

* 返回值  
&#160; &#160; &#160; &#160; 
返回一个对象的 string 格式。

<font color=#DC143C>书本第115页</font>  

### 7.1.2 封装

&#160; &#160; &#160; &#160; 
封装是指向程序中的其他部分隐藏对象的具体实现细节的原则。 

&#160; &#160; &#160; &#160; 
但是封装并不等同于多态。多态可以让用户对于不知道什么类（或对象类型）的对象进行方法调用，而封装是可以不用关心对象是如何构建的而直接进行使用。

<font color=#DC143C>书本第115 - 117页</font>  

### 7.1.3 继承

&#160; &#160; &#160; &#160; 
继承是另一个行为，程序员不想把同一段代码写好几次。如果有了一个类，而又想建立一个非常类似的，新的类可能只是添加几个方法，在编写新类时，又不想把旧累的代码全部复制过去，可以用继承的方法，程序会自动从旧类调用方法。

<font color=#DC143C>书本第117页</font>  

## 7.2 类和类型

### 7.2.1 类到底是什么

&#160; &#160; &#160; &#160; 
类就是一种对象。所有的对象都属于某一个类，称为类的实例。

&#160; &#160; &#160; &#160; 
当一个对象所属的类是另外一个对象所属类的子集时，前者就被称为后者的子类，相反，后者就称为前者的超类（基类）。

&#160; &#160; &#160; &#160; 
在面向对象程序设计中，子类的关系是隐式的，因为一个类的定义取决于它所支持的方法。定义子类只是定义更多（也有可能是重载已经存在的）的方法的过程。

<font color=#DC143C>书本第117页</font>  

### 7.2.2 创建自己的类

* 在模块或脚本开始的地方放置语句 `__metaclass__ = type`表示新式类。
* class语句会在函数定义的地方创建自己的命名空间
* self是对于对象自身的引用。没有它，成员方法就没法访问他们要对其特性进行操作的对象本身了。

		>>> _metaclass_ = type           #确定使用新式类
		>>> class Person:
		...     def setName(self, name):
		...         self.name = name
		...     def getName(self):
		...         return self.name
		...     def greet(self):
		...         print "Hello , world ! I'm %s." %self.name
		...         
		>>> foo=Person()
		>>> bar=Person()
		>>> foo.setName("luke skywalker")
		>>> bar.setName("anakin skywalker")
		>>> foo.greet()
		hello,world! I'm luke skywalker.
		>>> bar.greet()
		hello,world! I'm anakin skywalker.

	>如果知道foo是Person的实例的话，还可以把foo.greet()看做Person.greet(foo)方便的简写
	
&#160; &#160; &#160; &#160; 
特性可以在外部访问的：

		>>> foo.name
		'Luke Skywalker'
		>>> bar.name = 'Yoda'
		>>> bar.greet()
		Hello, word! I'm Yoda.

<font color=#DC143C>书本第118页</font>  

### 7.2.3 特性、方法和函数

&#160; &#160; &#160; &#160; 
self参数事实上是方法和函数的区别，方法将它们的第一个参数绑定到所属的实例上，因此我们无需显示提供该参数。当然也可以将特性绑定到一个普通函数上，这样就不会有特殊的self参数了：

		>>> class Class:
		...     def method(self):
		...         print 'I have a self'
		...         
		>>> def function():
		...     print "I don't ..."
		...     
		>>> instance = Class()
		>>> instance.method()
		I have a self
		>>> instance.method = function
		>>> instance.method()
		I don't ...

&#160; &#160; &#160; &#160; 
`self`参数并不依赖于调用方法的方式，前面我们使用的是`instance.method`（实例.方法）的形式，可以随意使用其他变量引用同一个方法：

		>>> class Class:
		...     def method(self):
		...         print 'I have a self'
		...         
		>>> cls = Class()
		>>> cls.method()
		I have a self
		>>> method = cls.method
		>>> method()
		I have a self

> 注：尽管最后一个方法调用看起来于函数调用十分相似，但是变量`method`引用绑定方法`cls.method`上，也就意味着这还是会对`self`参数进行访问（也就是说，它仍旧绑定到类的相同实例上）。 

#### 私有化

&#160; &#160; &#160; &#160; 
**为了让方法或者特性变为私有（从外部无法访问），只要在它的名字前面加上双下划线即可**。例：
		
		>>> class Secretive:
		...     def __inaccessible(self):
		...         print "Bet you can't see me ..."
		...     def accessible(self):
		...         print "The secret message is : "
		...         self.__inaccessible()
		...         
		>>> s = Secretive()
		>>> s.accessible()
		The secret message is : 
		Bet you can't see me ...
		>>> s.__inaccessible()
		Traceback (most recent call last):
		  File "<interactive input>", line 1, in <module>
		AttributeError: Secretive instance has no attribute '__inaccessible'

>“双下划线” 开始的是私有成员，意思是只有类对象自己能访问，连子类对象也不能访问到这个数据。

&#160; &#160; &#160; &#160; 
**类的内部定义中，所有的双下划线开始的名字都被‘翻译’成前面加上单下划线和类名的形式**。如：

		>>> Secretive._Secretive__inaccessible
		<unbound method Secretive.__inaccessible>

&#160; &#160; &#160; &#160; 
因此上例中的私有化方法可以如下所示进行访问（虽然不应该这么做）：

		>>> s._Secretive__inaccessible()
		Bet you can't see me ...

&#160; &#160; &#160; &#160; 
简而言之，确保其他人不会访问对象的方法和特性是不可能的，但是这类“名称变化术”就是他们不应该访问这些函数或者特性的强有力信号。

&#160; &#160; &#160; &#160; 
如果不需要使用这种方法但是又想让其他对象不要访问内部数据，那么可以使用单下划线。

>“单下划线” 开始的成员变量叫做保护变量，意思是只有类对象和子类对象自己能访问到这些变量。并且不能用`from module import *`导入。

<font color=#DC143C>书本第119 - 121页</font>  

### 7.2.4 类的命名空间

* 类的定义其实就是执行代码块，这一点非常有用。
* 类作用域的对象可以被所有实例访问。
* 重新绑定里面的特性会屏蔽类范围内的变量。

		>>> class MemberCounter:
		...     members = 0
		...     def init(self):
		...         MemberCounter.members+=1
		...         
		>>> m1 =  MemberCounter()
		>>> m1.init()
		>>> MemberCounter.members
		1
		>>> m2 = MemberCounter()
		>>> m2.init()
		>>> MemberCounter.members
		2
		>>> m2.members
		2
		>>> m1.members = 'two'
		>>> m1.members
		'two'
		>>> m2.members
		2

>类中定义了一个可供所有成员（实例）访问的变量`members`，用来计算类的成员数量（我们可以把它理解为全局变量），然后又在实例m1中重新绑定了`members`的值（此时相当于是局部变量，所以屏蔽了类范围内的变量）。 

<font color=#DC143C>书本第121 - 122页</font> 

### 7.2.5 指定超类

&#160; &#160; &#160; &#160; 
`claass A(B): ...`，B是A的超类，A是B的子类。 子类正常会重写超类的方法。

		>>> class Filter:
		...     def init(self):
		...         self.blocked = []
		...     def filter(self, sequence):   #过滤序列
		...         return [x for x in sequence if x not in self.blocked]
		...     
		>>> class SPAMFilter(Filter):   #SPAMFilter是Filter的子类
		...     def init(self):     	#重写Filter超类中的init方法
		...         self.blocked = ['SPAM']
		...         
		>>> f = Filter()
		>>> f.init()
		>>> f.filter([1,2,3])
		[1, 2, 3]
		>>> s = SPAMFilter()
		>>> s.init()
		>>> s.filter(['SPAM', 'SPAM', 'SPAM', 'SPAM', 'eggs', 'bacon', 'SPAM'])
		['eggs', 'bacon']

&#160; &#160; &#160; &#160;
注意SPAMFilter定义的两个要点。

* 这里用提供新定义的方式重写了Filter的init定义
* filter方法的定义是从Filter类中拿过来（继承）的，所以不用重写它的定义。

&#160; &#160; &#160; &#160; 
第二个要点揭示了继承的用处：可以写一大堆不同的过滤类，全都从Filter继承，每一个都可以使用已经实现的filter方法。

<font color=#DC143C>书本第122页</font> 

### 7.2.5 检查继承

* `issubclass`函数：查看一个类是否是另一个的子类。
* `isinstance`函数：检查一个对象是否是一个类的实例。 __bases__特性：想要知道已知类的基类。
* `__class__`：查看一个对象属于哪个类。
* 如果是新类（使用`__metaclass__=type`或从`object`继承的方式来定义）的话，可以用type函数来查看实例的类。

<font color=#DC143C>书本第122 - 123页</font> 

#### issubclass() 函数

&#160; &#160; &#160; &#160; 
如果要查看一个类是否是另一个类的子类，可以使用内建函数的issubclass函数

* 描述  
&#160; &#160; &#160; &#160; issubclass() 方法用于判断参数 class 是否是类型参数 classinfo 的子类。

* 语法  
&#160; &#160; &#160; &#160;
issubclass(class, classinfo)

* 参数  
&#160; &#160; &#160; &#160; class -- 类。  
&#160; &#160; &#160; &#160; classinfo -- 类。

* 返回值  
&#160; &#160; &#160; &#160; 如果 class 是 classinfo 的子类返回 True，否则返回 False。

* 实例

		>>> issubclass(SPAMFilter, Filter)
		True
		>>> issubclass(Filter, SPAMFilter)
		False

<font color=#DC143C>书本第122页</font> 

#### 特殊特性`__bass__`

&#160; &#160; &#160; &#160; 
如果想要知道已知类的基类（们），可以直接使用它的特殊特性_bases_。例：

		>>> SPAMFilter.__bases__
		(<class __main__.Filter at 0x02324D18>,)
		>>> Filter.__bases__
		()

<font color=#DC143C>书本第123页</font> 

#### isinstance方法 （类型检查）

&#160; &#160; &#160; &#160; 
使用isinstance方法检查一个对象是否是一个类的实例。

> 使用isinstance并不是个好习惯，使用多态会好一点

* 描述  

	&#160; &#160; &#160; &#160; 
	isinstance() 函数来判断一个对象是否是一个类的实例，类似 type()。  

			isinstance() 与 type() 区别：  
				type() 不会认为子类是一种父类类型，不考虑继承关系。  
				isinstance() 会认为子类是一种父类类型，考虑继承关系。  
			如果要判断两个类型是否相同推荐使用 isinstance()。  

* 语法  
&#160; &#160; &#160; &#160; 
isinstance(object, classinfo)

* 参数  
&#160; &#160; &#160; &#160; 
object -- 实例对象。  
&#160; &#160; &#160; &#160; 
classinfo -- 可以是直接或间接类名、基本类型或者有它们组成的元组。

* 返回值  
&#160; &#160; &#160; &#160; 
如果对象的类型与参数二的类型（classinfo）相同则返回 True，否则返回 False。

* 实例

		>>> isinstance(s, SPAMFilter)
		True
		>>> isinstance(s, Filter)
		True
		>>> isinstance(s, str)
		False

<font color=#DC143C>书本第123页</font> 

#### `_class_`特性

&#160; &#160; &#160; &#160; 
可以使用_class_特性知道一个对象属于哪个类。

		>>> s.__class__
		<class __main__.SPAMFilter at 0x02324C38>

<font color=#DC143C>书本第123页</font> 

### 7.2.7 多个超类

* 多重继承，注意：先继承的类中的方法会重写后继承的类中的方法。
* MRO（Method Resolution Order，方法判定顺序）：查找给定方法或者特性时访问超类的顺序。

> claass A(B, C): ...， 如果B类和C类有相同名字的方法，那么B类的会重写C类的方法

<font color=#DC143C>书本第123 - 124页</font> 

### 7.2.8 接口和内省

* 检查所需方法是否已经存在：hasattr(obj, 'method')
* 检查特性是否可调用：callable(getattr(obj, 'method', None))（在3.0中可以使用hasattr(x, `'__call__'`)来代替callable(x)）
> 只要在某个类型中有`__call__`方法，就可以把这个类型的对象当做函数来使用。

* `__dict__`特性：查看对象内所有存储的值。

<font color=#DC143C>书本第124 - 125页</font> 

#### hasattr()函数
* 描述  
&#160; &#160; &#160; &#160; 
hasattr() 函数用于判断对象是否包含对应的属性。

* 语法  
&#160; &#160; &#160; &#160; 
hasattr(object, name)

* 参数  
&#160; &#160; &#160; &#160; 
object -- 对象。  
&#160; &#160; &#160; &#160; 
name -- 字符串，属性名。  

* 返回值  
&#160; &#160; &#160; &#160; 
如果对象有该属性返回 True，否则返回 False。

<font color=#DC143C>书本第124页</font> 

#### getattr()函数

* 描述  
&#160; &#160; &#160; &#160; 
getattr() 函数用于返回一个对象属性值。  

* 语法  
&#160; &#160; &#160; &#160; 
getattr(object, name[, default])  

* 参数  
&#160; &#160; &#160; &#160; 
object -- 对象。  
&#160; &#160; &#160; &#160; 
name -- 字符串，对象属性。  
&#160; &#160; &#160; &#160; 
default -- 默认返回值，如果不提供该参数，在没有对应属性时，将触发 AttributeError。  

* 返回值  
&#160; &#160; &#160; &#160; 
返回对象属性值。  

<font color=#DC143C>书本第124页</font> 

#### setattr()函数

* 描述  
&#160; &#160; &#160; &#160; 
setattr 函数对应函数 getatt()，用于设置属性值，若属性不存在，先创建再赋值。

* 语法  
&#160; &#160; &#160; &#160; 
setattr(object, name, value)

* 参数  
&#160; &#160; &#160; &#160; 
object -- 对象。  
&#160; &#160; &#160; &#160; 
name -- 字符串，对象属性。  
&#160; &#160; &#160; &#160; 
value -- 属性值。  

* 返回值  
&#160; &#160; &#160; &#160; 
无。

<font color=#DC143C>书本第125页</font> 

#### `__dict__`特性

&#160; &#160; &#160; &#160; 
查看对象内所有存储的值。

<font color=#DC143C>书本第125页</font> 

#### inspect模块

&#160; &#160; &#160; &#160; 
如果真想要找到对象是由什么组成的，可以看看inspect模块。

<font color=#DC143C>书本第125页</font>

## 7.3 一些关于面向对象设计的思考

* 将属于一类的对象放在一起，如果一个函数操纵一个全局变量，那么两者最好都在类内作为特性和方法出现。
* 不要让对象过于亲密。方法应该只关心自己实例的特性。让其它实例管理自己的状态。
* 要小心继承，尤其是多重继承。继承的机制有时很有用，但也会在某些情况下让事情变得过于复杂。多重继承难以正确使用，更难以调试。
* 简单就好。让你的方法小巧。一般来说，多数方法都应该在30秒内被读完，尽量将代码行数控制在一页或者一屏之内。

&#160; &#160; &#160; &#160; 
当考虑需要什么类型以及类要有什么方法时，应该尝试下面的方法：

		1. 写下问题的描述（程序要做什么？），把所有名词、动词和形容词加下划线。
		2. 对于所有名词，用作可能的类。
		3. 对于所有动词，用作可能的方法。
		4. 对于所有形容词，用作可能的特性。
		5. 把所有方法和特性分配到类。

&#160; &#160; &#160; &#160; 
以上是面向对象模型的草图，还可以考虑类和对象之间的关系（比如继承或协作）以及他们的作用，可以用以下步骤精炼模型：

		1. 写下一系列的使用实例--也就是程序应用时的场景，试着包括所有的功能。
		2. 一步步考虑每个使用实例，保证模型包括所有需要的东西。如果有些遗漏的话就添加进来。如果某处不太正确则改正，直到满意为止。

<font color=#DC143C>书本第125页</font>

##7.4 小结

* 对象：对象包括特性和方法。特性只是作为对象的一部分的变量，方法是存储在对象内的函数。方法和其它函数的区别在于方法总是将对象作为自己的第一个参数，这个参数一般称为self。

* 类：类代表对象的集合（或一类对象），每个对象（实例）都有一个类。类的主要任务是定义它的实例会使用到的方法。

* 多态：多态是实现将不同类型和类的对象进行同样对待的特性--不需要知道对象属于哪个类就能调用方法。

* 封装：对象可以将它们的内部状态隐藏（或封装）起来。在一些语言中，这意味着对象的状态（特性）只对自己的方法可用。

* 继承：一个类可以使一个或者多个子类的子类。子类从超类继承所有方法。可以使用多个超类，这个特性可以用来组成功能的正交部分。

* 接口和内省：一般来说，对于对象不用探讨过深。程序员可以靠多态调用自己需要的方法。不过如果想要知道对象到底有什么方法和特性，有些函数可以帮助完成这项工作。

<font color=#DC143C>书本第125 - 126页</font>