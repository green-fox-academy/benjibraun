using System;
using System.Collections.Generic;
using System.Text;

namespace Instruments
{
    class Violin : StringedInstrument
    {
        public override string Sound()
        {
            return "Screech";
        }

        public override void Play()
        {
            Console.WriteLine($"{name},a {numberOfStrings}-stringed instrument that {Sound()}");
        }


        public Violin()
        {
            name = "Violin";
            numberOfStrings = 4;
        }
        public Violin(int numberOfStrings)
        {
            this.numberOfStrings = numberOfStrings;
            name = "Violin";
            numberOfStrings = 4;
        }
    }
}
