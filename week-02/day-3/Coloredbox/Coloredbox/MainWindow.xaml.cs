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

namespace Coloredbox
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
            // Draw a box that has different colored lines on each edge.
            // x1 y1 x2 y2
            foxDraw.StrokeColor(Colors.Red);
            foxDraw.DrawLine(10, 10, 10, 100);
            foxDraw.StrokeColor(Colors.Green);
            foxDraw.DrawLine(10, 10, 100, 10);
            foxDraw.StrokeColor(Colors.Orange);
            foxDraw.DrawLine(10, 100, 100, 100);
            foxDraw.StrokeColor(Colors.Pink);
            foxDraw.DrawLine(100, 100, 100, 10);


        }
    }
}
