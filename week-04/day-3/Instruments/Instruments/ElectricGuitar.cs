using System;
using System.Collections.Generic;
using System.Text;

namespace Instruments
{
    class ElectricGuitar : StringedInstrument
    {
        public override string Sound()
        {
            return "Twang";
        }

        public override void Play()
        {
            Console.WriteLine($"{name},a {numberOfStrings}-stringed instrument that {Sound()}");
        }

        public ElectricGuitar()
        {
            name = "Electric Guitar";
            numberOfStrings = 6;
        }
        public ElectricGuitar(int numberOfStrings)
        {
            this.numberOfStrings = numberOfStrings;
            name = "Electric Guitar ";
            numberOfStrings = 6;
        }
    }
}
