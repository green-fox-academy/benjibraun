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

namespace Connectthedots
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
            // Create a function that takes 1 parameter:
            // A list of (x, y) points
            // and connects them with green lines.
            // connect these to get a box: {new Point(10, 10), new Point(290, 10), new Point(290, 290), new Point(10, 290)}
            // Connect these: {new Point(50, 100), new Point(70, 70), new Point(80, 90), new Point(90, 90), new Point(100, 70),
            // new Point(120, 100), new Point(85, 130), new Point(50, 100)}

           

            Point[] box = { new Point(10, 10), new Point(290, 10), new Point(290, 290), new Point(10, 290) };

            Point[] these = { new Point(50, 100), new Point(70, 70), new Point(80, 90), new Point(90, 90),
                             new Point(100, 70), new Point(120, 100), new Point(85, 130), new Point(50, 100) };

            var newPoint = new List<Point>();
            /*
            foreach(var point in box)
            {
                 newPoint.Add(point);
            }
            */
            foreach (var point in these)
            {
                newPoint.Add(point);
            }


            Connect(foxDraw, canvas,newPoint);

        }
        public static void Connect (FoxDraw foxDraw,Canvas canvas ,List<Point> newPoint)
        {
            for (int i = 0; i < newPoint.Count-1 ; i++)
            {
                foxDraw.DrawLine(newPoint[i], newPoint[i+1]);
            }
            foxDraw.DrawLine(newPoint[0], newPoint[newPoint.Count-1]);
        }
    }
}
