using System;
using System.Collections.Generic;
using System.Text;

namespace Sharpie
{
    class Sharpie
    {
        public string color;
        public float width;
        public float inkAmount= 100;
        public void Use()
        {
            inkAmount--;
        }
        public Sharpie(string color,float width)
        {
            this.color = color;
            this.width = width;
        }
    }
}
