# Title: Embedded Development Learning Repository

Description: Welcome to the Embedded Development Learning Repository! This repository aims to provide a comprehensive collection of resources and examples for those interested in learning and exploring the field of embedded development. Whether you are a beginner or an experienced developer, this repository serves as a valuable reference and learning guide.

## Features:

**Learning Resources:** Discover a curated list of tutorials, articles, books, and online courses covering various aspects of embedded development, including microcontrollers, firmware development, embedded systems design, and real-time operating systems (RTOS).  
**Code Examples:** Explore a diverse range of code examples and projects to help you understand and practice embedded development concepts. These examples cover topics such as GPIO control, sensor interfacing, communication protocols (UART, SPI, I2C), and embedded software development using popular platforms and IDEs.  
**Documentation:** Access well-documented guides, cheat sheets, and reference materials to assist you in understanding key concepts, programming techniques, and best practices in embedded development.  
**Community Collaboration:** Engage with a vibrant community of embedded developers, where you can ask questions, share insights, and collaborate on projects. Take part in discussions, code reviews, and contribute your own knowledge and experiences to enrich the learning experience for everyone.  
Whether you are pursuing a career in embedded systems or simply passionate about tinkering with hardware and software, this repository aims to empower you with the knowledge and resources needed to excel in the field of embedded development. Join us on this exciting journey of learning, experimentation, and innovation!  

Welcome contributions from the community to further enhance and expand the repository. Feel free to fork, make pull requests, and share your valuable insights to help fellow learners in their embedded development journey.  

Happy learning and happy coding! Embedded Development Learning Repository
# 记录51MCU学习过程：
## 51MCU
**心得体会：**  

学习过程中使用的普中51单片机开发学习板子，结合B站江协科技的51入门视频进行学习;  
本人体会开发过程中，首先是要要搞清楚原理，可以通过Datasheet来了解芯片的功能，及通信协议时序的规定，还有信号状态切换需要的最小Delay时间等等;  
51单片机的开发是裸机开发，直接和硬件打交道，虽然说要比使用汇编来直接操作硬件要简单，但是一开始要弄清楚怎么设置寄存器的标志来实现特定的功能还是比较困难的；  
尽管芯片的手册写的很详细，但是具体怎么看，如何定位手册关键点，怎么理解所写的内容来编写程序，进而配置寄存器的这些方法不是一时半会儿可以搞清楚的，
所以我认为学习51的过程，主要要把注意力放到开发过程中的模块思想，即达到各个驱动代码一次开发，随用随copy，还有就是开发的业务流程，即确定要开发的功能，
之后查找可以实现该功能的芯片，确定芯片后，之后如何设计电路来使得芯片可以正常工作，当然开发板已经焊好，直接使用即可，之后阅读Datasheet，结合需要，配置寄存器，
实现特定功能，然后了解通信协议，程序编写通信命令配置字，传送数据，之后在主C文件中include功能库，结合业务需求，调用编写好的驱动代码来实现特定功能。  
**淘宝连接(非广告)：**  

普中51单片机学习板(A2套件1)  
<pre>【淘宝】https://m.tb.cn/h.5WJArsq?tk=2LLYdxo5FOg CZ0001 「普中51单片机学习板开发板stc89c52单片机实验板C51单片机diy套件」
点击链接直接打开 或者 淘宝搜索直接打开</pre>
[**B站江协科技视频**](https://www.bilibili.com/video/BV1Mb411e7re/?spm_id_from=333.999.0.0)
## 问题记录
电路分析着实是个难点！  
如何解决？  
基础电路、电路分析、模电、数电  
### MIT 6.002
[**Circuits And Electronics**](https://ocw.mit.edu/courses/6-002-circuits-and-electronics-spring-2007/)  
[**MIT 6.002 Circuits and Electronics, Spring 2007 by Profs. Anant Agarwal**](https://www.youtube.com/watch?v=AfQxyVuLeCs&list=PL9F74AFA03AA06A11&index=1)  
# 记录STM32学习过程：
[**库开发实战**](https://doc.embedfire.com/mcu/stm32/f407batianhu/std/zh/latest/index.html)
## 心得体会
通过学习入门篇，我发现视频中的代码都相对简单。然而，在给出的资料中，实验代码则更加精炼、简洁且优美。  
如果只是单纯地观看视频，而不仔细阅读资料文档，可能会导致在下一节课时无法理解。  
因此，我认为对于野火的教学方法，较好的学习策略是：  

1. 首先，大致浏览一下教学文档；
2. 然后，听视频讲解；
3. 接着，仔细阅读教学文档，并结合视频讲解，以便更好地理解代码；
4. 最后，整理资料并记录心得。

### 13. GPIO输入—按键检测
在之前的学习中，我们主要关注的是ODR（输出数据寄存器），通过控制ODR来控制I/O引脚（I/O pin，可以参考“STM32Fxx参考手册”）的高低电平，从而控制LED灯的亮灭。而现在我们要学习的是GPIO输入模式，因此我们需要将注意力转移到IDR（输入数据寄存器）上，通过读取IDR来获取I/O引脚的高低电平，从而判断按键是否按下。之所以强调这个不同点，是因为在视频课程讲解中没有提到这一点，所以当讲到GPIO输入时，并没有提及IDR，这可能会让学习者产生困惑，有种迷茫的感觉。因此，在这里特别强调一下。

## 小技巧
```C
# 将 该寄存器的第6位 置1，也就是将1向左移动 5 位
RCC_AHB1ENR |= (1<<5)

# 3代表低2位值为 11，2表示每次控制两位，6表示向左移动6组
# 将第6组的 两位 置0
GPIOF_MODER &= ~ (3<<(2*6) );
# 将1向左移动 (2*6) 位
GPIOF_MODER |= (1<<(2*6))

# 将从0开始数的第6位 设置为0
GPIOF_ODR &=~ (1<<6);
```
## 野火文档错误记录
### 库开发实战
#### 8. 使用寄存器点亮LED灯
1. “8.2.1.2. P-MOS管和N-MOS管"段落讲解“开漏输出模式”时，控制的是“输入”为0或1，不是“输出”
2. 我们控制的是GPIO**F**而非**H**，而代码中的注释写的是H，应修改为F

#### 12. GPIO输出—使用固件库点亮LED

1. 而是重点讲解如果用固件库编程。-> 而是重点讲解“如何”用固件库编程。
2. 以上代码分别把控制四盏LED灯的GPIO端口 -> 三盏
外设位带区的地址为：0X40000000~0X400F0000
#### 14.1.1. 外设位带区
外设位带区的地址为：0X40000000~0X400F0000 -> 0X40000000~0X43FFFFFF

#### 14.1.2. SRAM位带区
SRAM的位带区的地址为：0X20000000~X200F0000 -> 0X20000000~0X200FFFFF
## 问题记录
**1. 不识别DAP仿真器**  
使用ubuntu操作系统，上面安装了VM虚拟机，之后在虚拟机上安装了win10操作系统，每次连接DAP仿真器，Keil 5并不识别，之后发现多次插拔DAP仿真器的USB连接，直到Keil 5识别。  
**2. 不识别芯片**  
修改Connect为under Reset之后就是别出来了；以后调整为Nomal也会识别；之后DAP仿真器与芯片连接次数多后，很快就识别出来了。  
![image](https://github.com/artwalker/ESDE/assets/44759507/b1a7338b-57b9-4bfc-9387-78bd4f79be83)  
**3. 创建工程模板-出现编译错误**  
最开始在“魔术帮”设置完后的C/C++界面如下图：  
![Arm_Compiler_6](https://img2023.cnblogs.com/blog/1994352/202310/1994352-20231002220347902-1075310687.png)  
和教程介绍的不一样，并且编译出错，应该按如下图修改，将魔术棒-Target-Code -Generation-Arm Compiler-6->5:  
![img](https://img2023.cnblogs.com/blog/1994352/202310/1994352-20231002220708825-315356314.png)  
**4. 3-3 GPIO输出一使用固件库点亮LED灯: bsp_led.h 写的可能不太详细，增加解释注释**
```C
/* 直接操作寄存器的方法控制IO */
// 参考GPIO_ResetBits(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)函数底层的实现，
// 发现其实现对BSRRH寄存器的复位操作为：GPIOx->BSRRH = GPIO_Pin;
// 和此处直接操作寄存器进行Set和Reset是异曲同工，故可作为此处控制IO的参考
#define digitalHi(p,i)    {p->BSRRL=i;}  //设置为高电平，也就是对BSRRRL进行赋值为1，故此时IO端口为高电平
#define digitalLo(p,i)    {p->BSRRH=i;}  //输出低电平，也就是对BSRRRH进行赋值为1进行复位，故此时IO端口为低电平
#define digitalToggle(p,i)  {p->ODR ^=i;}  //输出反转状态
```