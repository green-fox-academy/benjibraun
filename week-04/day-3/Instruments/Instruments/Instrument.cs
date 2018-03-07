using System;
using System.Collections.Generic;
using System.Text;

namespace Instruments
{
    abstract class Instrument
    {
        protected string name;

        public abstract void Play();
    }
}
