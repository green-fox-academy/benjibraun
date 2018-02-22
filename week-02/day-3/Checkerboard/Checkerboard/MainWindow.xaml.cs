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

namespace Checkerboard
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
            // Fill the canvas with a checkerboard pattern.
            foxDraw.FillColor(Colors.Black);
            int cnt = 1;
            for (int i = 0; i < canvas.Width; i=i+20)
            {
                for (int j = 0; j < canvas.Width; j = j + 10)
                {
                    if (cnt%2==0)
                    { 
                        foxDraw.DrawRectangle(i+10, j, 10, 10);
                    }
                    else
                    {
                        foxDraw.DrawRectangle(i, j, 10, 10);
                    }
                    cnt++;

                }
            }
        }
    }
}
