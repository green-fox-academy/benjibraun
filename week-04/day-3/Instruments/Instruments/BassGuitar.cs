using System;
using System.Collections.Generic;
using System.Text;

namespace Instruments
{
    class BassGuitar : StringedInstrument
    {

        public BassGuitar()
        {
            name = "Bass Guitar";
            numberOfStrings = 5;
        }

        public BassGuitar(int numberOfStrings)
        {
            this.numberOfStrings = numberOfStrings;
            name = "Bass Guitar";
            numberOfStrings = 5;
        }

        public override string Sound()
        {
            return "Duum-duum-duum";
        }

        public override void Play()
        {
            Console.WriteLine($"{name},a {numberOfStrings}-stringed instrument that {Sound()}");
        }
    }
}
