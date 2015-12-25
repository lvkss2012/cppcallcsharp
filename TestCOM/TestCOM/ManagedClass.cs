using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;

namespace TestCOM
{
    [ComVisible(true)]
    [Guid("7884998B-0504-4CBE-9FF9-6BBAA9776188")]
    [ClassInterface(ClassInterfaceType.None)]
    public class ManagedClass : ICalculator
    {
        public ManagedClass()
        {

        }

        public int Add(int Number1, int Number2)
        {
            return Number1 + Number2;
        }
    }
}
