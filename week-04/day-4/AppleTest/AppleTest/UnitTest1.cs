using NUnit.Framework;
using Apple;
namespace AppleTest
{
    [TestFixture]
    public class UnitTest1
    {
        [Test]
        public void TestAlma()
        {
            Assert.AreEqual("apple", Alma.GetApple());
        }
    }
}
