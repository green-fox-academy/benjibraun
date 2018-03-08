using NUnit.Framework;
using Sum;
using System.Collections.Generic;
using System.Linq;
namespace SumTest
{
    [TestFixture]
    public class UnitTest1
    
    {
        [Test]
        public void Null()
        {
            List<int> nums1 = null;
            Assert.AreEqual(0, Program.Sum(nums1));
        }
        [Test]
        public void Emtempyt()
        {

            List<int> nums1 = new List<int>();
            Assert.AreEqual(nums1.Sum(), Program.Sum(nums1));
        }
        [Test]
        public void One()
        {

            List<int> nums1 = new List<int>()
            {1};

            Assert.AreEqual(nums1.Sum(), Program.Sum(nums1));
        }
        [Test]
        public void Multi()
        {

            List<int> nums1 = new List<int>();
            nums1.Add(1);
            nums1.Add(2);

            Assert.AreEqual(nums1.Sum(), Program.Sum(nums1));
        }
    }
}
