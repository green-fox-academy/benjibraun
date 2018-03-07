using System;
using System.Collections.Generic;
using System.Text;

namespace Instruments 
{
    abstract class StringedInstrument : Instrument
    {
        public int numberOfStrings;


        public abstract String Sound();

    }
}
