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

namespace Rainbowboxes
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
            // Create a square drawing function that takes 2 parameters:
            // The square size, and the fill color,
            // and draws a square of that size and color to the center of the canvas.
            // Create a loop that fills the canvas with rainbow colored squares.
            int size= 500;


            byte[] color = new byte[3];
            byte cntR = 10 ;
            byte cntG = 50;
            byte cntB = 90;
            for (int i = 0; i < 500; i += 10)
            {
                color[0] = cntR;             
                color[1] = cntG;
                color[2] = cntB;
                SquareDrawing(foxDraw,size-i , color,canvas);
                
                cntR += 1;
                cntG += 4;
                cntB += 3;
            }
        }

        public static void SquareDrawing(FoxDraw foxDraw, int size, byte [] color , Canvas canvas)
        {
            foxDraw.StrokeColor(Color.FromRgb(color[0], color[1], color[2]));
            foxDraw.FillColor(Color.FromRgb(color[0], color[1], color[2]));
            
            foxDraw.DrawRectangle(canvas.Width / 2 - size / 2, canvas.Height / 2 - size / 2, size, size);
        }
    }
}
