using NUnit.Framework;
using CountLetters;
using System.Collections.Generic;
namespace CountLettersTest
{
    [TestFixture]
    public class UnitTest1
    {
        [Test]
        public void Test()
        {
            Assert.AreEqual(2, Program.CuntLeters("aa")['a']);
        }
    }
}
