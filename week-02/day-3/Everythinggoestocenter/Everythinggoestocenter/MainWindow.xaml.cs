using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace Everythinggoestocenter
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
            var foxDraw = new FoxDraw(canvas);
            // create a line drawing function that takes 2 parameters:
            // the x and y coordinates of the line's starting point
            // and draws a line from that point to the center of the canvas.
            // fill the canvas with lines from the edges, every 20 px, to the center.
            int x;
            int y;

            for (int i = 0; i < 500; i+=20)
            {
                x = i;
                y = 0;
                LineDrawing(foxDraw, canvas, x, y);
            }
            for (int i = 0; i < 500; i += 20)
            {
                x = i;
                y = 500;
                LineDrawing(foxDraw, canvas, x, y);
            }
            for (int i = 0; i < 500; i += 20)
            {
                x = 0;
                y = i;
                LineDrawing(foxDraw, canvas, x, y);
            }
            for (int i = 0; i < 500; i += 20)
            {
                x = 500;
                y = i;
                LineDrawing(foxDraw, canvas, x, y);
            }
            // nem túl szép :D majd javítom 


        }
        public static void LineDrawing(FoxDraw foxDraw,Canvas canvas, int x, int y)
        {
            double center = canvas.Width/2;
            foxDraw.DrawLine(x, y, center, center);

        }
        
        
    }
}
