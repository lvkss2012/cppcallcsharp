using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

namespace TestCOM
{
    [ComVisible(true)]
    [Guid("67F6AA4C-A9A5-4682-98F9-15BDF2246A74")]
    [InterfaceType(ComInterfaceType.InterfaceIsDual)]  
    public interface ICalculator
    {
        int Add(int Number1, int Number2);
    }
}
