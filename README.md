# cppcallcsharp
c++调用c#
native c++/qt中如何调用c#dll
具体需求：qt程序中调用c#提供的dll
开发环境：vs2013
参考链接：
链接1：https://support.microsoft.com/en-us/kb/828736，这个是微软的官方链接，在这个文档中Register the Managed DLL for Use with COM or with Native C++是用不到的。
链接2：https://cppkid.wordpress.com/2009/01/02/how-to-call-a-managed-dll-from-unmanaged-code/  按照这个文档说明即可用
具体实现过程如下：
创建c#工程，设置工程属性：
 
配置说明：在buid选项中配置plateform target：x64，这个配置必须要和native c++程序中一致，如果native c++中是64位，那么这里必须是x64.同理x86. 
这里还有一个选项是 any cpu，第一次编译的时候选的是这个，在native c++中调用时编译可以通过，但是运行时出现异常。
 这个选项必须勾选，勾选之后编译会输出一个后缀为.tlb的文件。
 这个文件是native c++调用的关键。
生成签名SNK文件，具体操作如下:
工程属性配置中，到signing项，勾选sign the assembly，选择new。
 
在跳出的界面中：
 
反选 ，输入filename。点击ok即可。
此时会在solution中生成这个文件，
 
配置AssemblyInfo.cs文件，设置这几项：
[assembly: ComVisible(true)]
[assembly: AssemblyDelaySign(false)]
[assembly: AssemblyKeyFile("..\\..\\TestKeyPair.snk")]//确保这个文件位置正确
编写类文件：
ICalculator.cs
 
编写ManagedClass.cs文件：
 
编译即可。
注意：
命名空间的名称要和项目名称，即生成的dll文件名称一致，否在在native c++中会提示找不到命名空间的错误。
生成文件如下：
 
在native中主要用TestComc.tlb。

下面是native c++工程，这里用的是qt。配置为64位。
具体使用方法如下：
 


发布程序的时候必须在安装机器上使用Regasm.exe注册com到系统，vs中的register to com其实是vs自动执行的这条命令。
Regasm用法：
C:\Windows\Microsoft.NET\Framework64\v4.0.30319\RegAsm.exe C:\Users\zcy\Desktop\test\ExcelIOService.dll /tlb:C:\Users\zcy\Desktop\test\ExcelIOService.tlb /codebase

D:\Windows\Microsoft.NET\Framework64\v2.0.50727\RegAsm.exe /codebase G:\ExcelIOService.dll

C:\Windows\Microsoft.NET\Framework64\v4.0.30319\RegAsm.exe C:\Users\zcy\Desktop\test\ExcelIOService.dll /codebase（这个注册已经够用）

Regasm所在位置：C:\Windows\Microsoft.NET\Framework64\

