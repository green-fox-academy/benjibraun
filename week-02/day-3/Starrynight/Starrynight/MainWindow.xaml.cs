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

namespace Starrynight
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
            // Draw the night sky:
            //  - The background should be black
            //  - The stars can be small squares
            //  - The stars should have random positions on the canvas
            //  - The stars should have random color (some shade of grey)
            Random rnd = new Random();
            int starPosx;
            int starPosy;
            int size ;
            byte color;
            foxDraw.BackgroundColor(Colors.Black);

            for (int i = 0; i < 500; i++)
            {
                size = rnd.Next(1, 5);
                starPosx = rnd.Next(1, 500);
                starPosy = rnd.Next(1, 500);
                color= (Byte) rnd.Next(1, 255);
                foxDraw.FillColor(Color.FromRgb(color, color, color));
                foxDraw.StrokeColor(Color.FromRgb(color, color, color));
                foxDraw.DrawRectangle(starPosx, starPosy, size, size);
            }

        }
    }
}
