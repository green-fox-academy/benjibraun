using System;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;
using System.Windows.Shapes;

namespace WpfApp1
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
            foxDraw.StrokeColor(Colors.Red);
            foxDraw.DrawLine(0, 200, 400, 200);
            foxDraw.StrokeColor(Colors.Green);
            foxDraw.DrawLine(200, 0, 200, 400);

        }
    }
}
