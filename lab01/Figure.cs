using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;

namespace lab01
{
  public  class Figure
    {
        public float pos_x, pos_y;
        public bool selected;
        virtual public bool test(float x, float y)
        {
            return false;
        }
        virtual public void draw(Graphics g)
        {
        }
    }
}
