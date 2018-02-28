using System;
using System.Collections.Generic;
using System.Text;

namespace BlogPosts
{
    class BlogPost
    {
        public string AuthorName;
        public string Title;
        public string Text;
        public string PublicationDate;
        public BlogPost(string AuthorName, string Title, string Text, string PublicationDate)
        {
            this.AuthorName = AuthorName;
            this.Title = Title;
            this.Text = Text;
            this.PublicationDate = PublicationDate;
        }
    }
}
