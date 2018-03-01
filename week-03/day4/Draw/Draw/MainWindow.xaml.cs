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

namespace Draw
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
            DrawS(foxDraw, canvas, 500,0);
        }
        public static void DrawS(FoxDraw foxDraw, Canvas canvas, int n,int p)
        {
            if (n < 10)
            {
            }
            else
            {
                foxDraw.DrawLine(0, (n / 3) + p, n, (n / 3) + p);
                foxDraw.DrawLine(0, ((n / 3) * 2) + p, n, ((n / 3) * 2) + p);
                foxDraw.DrawLine(n / 3, p, n / 3, n+p);
                foxDraw.DrawLine((n / 3)*2, p, (n / 3)*2, n+p);

                DrawS(foxDraw, canvas, n/3,p+n/3);
                



            }

    }

    }
}
