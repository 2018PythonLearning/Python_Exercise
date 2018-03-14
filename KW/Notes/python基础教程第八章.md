# 第八章 异常

## 8.1 什么是异常

&#160; &#160; &#160; &#160; 
Python用异常对象来表示异常情况。遇到错误后，会引发异常。如果异常对象并未被处理或捕捉，程序就会用所谓的回溯（Traceback，一种错误信息）终止执行：

		>>> 1/0
		Traceback (most recent call last):
		  File "<pyshell#0>", line 1, in <module>
		    1/0
		ZeroDivisionError: integer division or modulo by zero

&#160; &#160; &#160; &#160; 
每个异常都是一些类的实例，这些实例可以被引发，并且可以用很多种方法进行捕捉，使得程序可以捉住错误并且对其进行处理，而不是让整个程序失败。

<font color=#DC143C>书本第127页</font> 

## 8.2 按自己的方式出错

### 8.2.1 raise语句

&#160; &#160; &#160; &#160; 
为了引发一个异常，可以使用一个类（应该是Exception的子类）或者实例参数调用raise语句。使用类时，程序会自动创建一个类的实例。例：

		>>> raise Exception
		Traceback (most recent call last):
		  File "<interactive input>", line 1, in <module>
		Exception
		>>> raise Exception("can't be zero")
		Traceback (most recent call last):
		  File "<interactive input>", line 1, in <module>
		Exception: can't be zero

&#160; &#160; &#160; &#160; 
第一个例子raise Exception引发了一个没有任何有关错误信息的普通异常。后一个例子中，则添加了错误信息“can’t be zero”。 

&#160; &#160; &#160; &#160; 
可以用`dir(exceptions)`查看内建的异常。（需要import exceptions）

		>>> import exceptions
		>>> dir(exceptions)
		['ArithmeticError', 'AssertionError', 'AttributeError',...]  #省略

&#160; &#160; &#160; &#160; 
所有这些异常都可以用于raise语句。

&#160; &#160; &#160; &#160; 
一些内建异常 

* Exception：所有异常的基类 
* AttributeError：特性应用或赋值失败时引发 
* IOError：试图打开不存在文件（包括其他情况）时引发 
* IndexError：在使用序列中不存在的索引时引发 
* KeyError：在使用映射中不存在的键时引发 
* NameError：在找不到名字（变量）时引发 
* SyntaxError：在代码为错误形式时引发 
* TypeError：在内建操作或者函数应用于错误类型的对象时引发 
* ValueError：在内建操作或者函数应用于正确类型的对象，但是该对象使用不合适的值时引发 
* ZeroDivisionError：在除法或者模除操作的第二个参数为0时 

<font color=#DC143C>书本第127 - 128页</font> 

### 8.2.2 自定义异常

&#160; &#160; &#160; &#160; 
跟创建其他类一样，只要确保从Exception类继承（不管是间接的还是直接的）即可。例:

		>>> class SomeCustomException(Exception):
		...     pass
		... 

<font color=#DC143C>书本第128 - 129页</font> 

## 8.3 捕捉异常（屏蔽）

&#160; &#160; &#160; &#160; 
关于异常最有意思的地方就是可以处理它们（通常叫做诱捕或者捕捉异常）。

&#160; &#160; &#160; &#160; 
使用try/except语句来处理异常。  

> 我们把可能发生错误的语句放在try模块里，用except来处理异常。except可以处理一个专门的异常，也可以处理一组圆括号中的异常，如果except后没有指定异常，则默认处理所有的异常。每一个try，都必须至少有一个except

&#160; &#160; &#160; &#160; 
使用try/except捕获异常。

>如果没有捕捉到异常，它会被“传播”到调用的函数中。如果那里依然没有捕获，这写异常就会“浮”到程序的最顶层。

&#160; &#160; &#160; &#160; 
即使已经捕获了异常，但是又想重新引发它，就那么可以调用不带参数的raise。

<font color=#DC143C>书本第129 - 130页</font> 

#### try/except捕获异常

&#160; &#160; &#160; &#160; 
使用try/except捕获异常。例：

		>>> try:
		...     x = input("input a number : ")
		...     y = input("input another number : ")
		...     print (x/y)
		... except ZeroDivisionErro:
		...     print ("the second number can't be zero !")
		...
		input a number : 10
		input another number : 0
		Traceback (most recent call last):
		  File "<stdin>", line 5, in <module>
		NameError: name 'ZeroDivisionErro' is not defined

<font color=#DC143C>书本第129页</font> 

#### 捕获到但不处理（不带参数的raise）

&#160; &#160; &#160; &#160; 
即使已经捕获了异常，但是又想重新引发它，就那么可以调用不带参数的raise。例：

		>>> class MuffledCalculator:
		...     muffled = False
		...     def cal(self, expr):
		...         try:
		...             return eval(expr)
		...         except ZeroDivisionError:
		...             if self.muffled:
		...                 print ('Division by zero is illegal !')
		...             else:
		...                 raise
		...             
		>>> calculator = MuffledCalculator()
		>>> calculator.cal('10/2')
		5
		>>> calculator.cal('10/0')
		Traceback (most recent call last):
		  File "<interactive input>", line 1, in <module>
		  File "<interactive input>", line 5, in cal
		  File "<string>", line 1, in <module>
		ZeroDivisionError: integer division or modulo by zero
		>>> calculator.muffled = True
		>>> calculator.cal('10/0')
		Division by zero is illegal !

&#160; &#160; &#160; &#160; 
上例中通过`muffled`的值打开和关闭了屏蔽机制。

<font color=#DC143C>书本第129 - 130页</font> 

## 8.4 不只一个except子句

&#160; &#160; &#160; &#160; 
`try/expect` 异常可以附带多个`expect`

		try:
			x=input(‘1st number: ’)		
			y=input(‘2nd number: ’)		
			print x/y		
		except ZeroDivisionError:		
			print “The 2nd number can’t be zero!”		
		except TypeError:		
			print “That wasn’t a number,was it?”

<font color=#DC143C>书本第130 - 131页</font> 

## 8.5 用一个块捕捉两个异常

&#160; &#160; &#160; &#160; 
如果需要用一个块捕捉多个类型异常，那么可以将它们作为元组列出。

&#160; &#160; &#160; &#160; 
`try/expect (...)`将异常作为元组放进去

		>>> try:
		...     x = input("input a number : ")
		...     y = input("input another number : ")
		...
		...     print x/y
		... except (ZeroDivisionErro, TypeError, NameError):
		...     print 'your numbers were bogus ....'

<font color=#DC143C>书本第131页</font> 

## 8.6 捕捉对象

&#160; &#160; &#160; &#160; 
如果希望在except子句中访问异常对象本身，可以使用两个参数（注意：就算要捕捉到多个异常，也只需向except子句提供一个参数——一个元组）。

		try:
			x = input('Enter the first number')
			y = input('Enter the second number')
			print (x/y)
		except (ZeroDivisionError, TypeError) as e:
			print (e)

>注：在python3.0中，except子句会被写作except（ZeroDivisionErro, TypeError, NameError) as e 

<font color=#DC143C>书本第131页</font> 

## 8.7 真正的全捕捉

&#160; &#160; &#160; &#160; 
`try/ expect`可以捕捉全部异常。

&#160; &#160; &#160; &#160; 
如果想用一段代码捕捉所以异常，那么可以在except子句中忽略所有的异常类。例：
		try:
		    x = int(input('Enter the first number:'))
		    y = int(input('Enter the second number:'))
		    print(x/y)
		except:
		    print ('Something wrong happened...')

>注：像上例中的这种捕捉方式比较危险，因为他会隐藏所有程序员未想到的并且未做好准备处理的错误。它同样会捕捉用户终止执行的`Ctrl+C`企图，以及用`sys.exit`函数终止程序的企图等。这时用`except Exception as e`会更好些，或者对异常对象e进行一些检查。 

<font color=#DC143C>书本第132页</font> 

## 8.8 万事大吉

&#160; &#160; &#160; &#160; 
try /expect /else进行没有异常情况的处理。

&#160; &#160; &#160; &#160; 
有些情况中，没有坏事发生时执行一段代码是很有用的，可以相对条件和循环语句那样，给try/except语句加个else子句，如果主try块中没有异常发生，else子句就会被执行。

&#160; &#160; &#160; &#160; 
可以使用else子句实现循环。例：

		while True:
		    try:
		        x = int(input('Enter the first number:'))
		        y = int(input('Enter the second number:'))
		        value = x/y
		        print('x/y is', value)
		    except Exception as e:            #如果出错，打印错误信息
		         print('Invalid input:', e)
		         print('Please try again')
		    else:                             #计算过程中没有异常，跳出
		        break

> 注：这里的循环只有在没有异常的情况下才会退出（有else子句中的break语句退出）。只要有错误发生，程序会不断要求重新输入。 

<font color=#DC143C>书本第132 - 134页</font>

## 8.9 最后

&#160; &#160; &#160; &#160; 
`try/except/else/finally`：无论是否发生异常情况，都需要执行一些清理工作。（如通信过程）

&#160; &#160; &#160; &#160; 
`finally`子句，它可以用来在可能的异常后进行清理。它和`try`子句联合使用。
		
		try:
		    1/0
		except Exception:
		    print('Unknown variable')
		else:
		    print('That went well!')
		finally:
		    print('Cleaning up.')

&#160; &#160; &#160; &#160; 
结果：

		Unknown variable
		Cleaning up.

<font color=#DC143C>书本第134页</font>

## 8.10 异常和函数

&#160; &#160; &#160; &#160; 
异常和函数可以一起工作。如果异常在函数内引发而不被处理，它就会传播至函数调用的地方。如果那里也没有处理异常，它就会继续传播，一直到达主程序，如果那里也没有处理异常 ，程序会带着栈终止。

<font color=#DC143C>书本第134 - 135页</font>

## 8.11 异常之禅

&#160; &#160; &#160; &#160; 
使用异常会比`if/else`效率高

<font color=#DC143C>书本第138 - 136页</font>