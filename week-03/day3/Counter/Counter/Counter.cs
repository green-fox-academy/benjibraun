using System;
using System.Collections.Generic;
using System.Text;

namespace Counter
{
    class Counter
    {
        private int number = 0;
        public void Add()
        {
            number++;
        }
        public void Add(int numberToAdd)
        {
            number += numberToAdd;
        }
        public string Get()
        {
            return number.ToString();
        }
        public void Reset()
        {
            number = 0;
        }



    }
}
