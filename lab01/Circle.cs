using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;

namespace lab01
{
    public class Circle : Figure
    {
        public float radius;
        public Circle()
        {
            radius = 50.0f;
        }
        override public bool test(float x, float y)
        {
            float radius_squared = radius * radius;
            float dx = x - pos_x;
            float dy = y - pos_y;
            if (dx * dx + dy * dy <= radius_squared)
                return true;
            return false;
        }
        public override void draw(Graphics g)
        {
            float diameter = radius * 2.0f;
            float x0 = pos_x - radius;
            float y0 = pos_y - radius;
            Pen p = Pens.Black;
            if (selected == true) p = Pens.Red;
            g.DrawEllipse(p, x0, y0, diameter, diameter);
        }
    }
}
