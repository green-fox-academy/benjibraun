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

namespace Fillwithrectangles
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
            // draw four different size and color rectangles.
            // avoid code duplication.
            byte m = 255;
            byte mm = 100;
            for (byte i = 0; i < 5; i++)
            {
                foxDraw.FillColor(Color.FromArgb(255,m ,m ,m));
                foxDraw.DrawRectangle(i*10, i*20, i*20, i*30);
                m=(byte)(m + mm);
            }

        }
    }
}
