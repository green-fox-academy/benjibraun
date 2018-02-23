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

namespace Triangles
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
            double center = canvas.Width / 2;
            DrawTriangle(foxDraw, canvas, 50);
        }
        public static void DrawTriangle(FoxDraw foxDraw,Canvas canvas, double center)
        {
            
            double root = (System.Math.Pow(20, (1.0 / 3.0)));
            double h = (Math.Sqrt(3) / 2) * 20;
            foxDraw.DrawLine(center, 0, center + 10, h);
            foxDraw.DrawLine(center, 0, center -10, h);
            foxDraw.DrawLine(center-10, h, center + 10, h);

        }
    }
}
