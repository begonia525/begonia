using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using Model;
using BLL;

namespace 客户信息反馈系统
{
    /// <summary>
    /// adminDelete 的摘要说明
    /// </summary>
    public class adminDelete : IHttpHandler
    {
        ClientBll clientBll = new ClientBll();
        ReplyBll replyBll = new ReplyBll();
        FeedBackBll feedBackBll = new FeedBackBll();
        public void ProcessRequest(HttpContext context)
        {
            context.Response.ContentType = "text/plain";
            context.Response.Write("Hello World");
            string id = context.Request["id"];
            int showId = int.Parse(id);
            Client client = clientBll.SelectClient2(showId);
            string phone = client.Phone;
            
            if (clientBll.AdminDelete(showId)&&replyBll.Delete2(phone)&&feedBackBll.Delete2(phone))
            {
                context.Response.Redirect("adminClient.aspx");
            }
            else
            {
                context.Response.Write("删除失败");
                context.Response.Write(id);
            }
        }

        public bool IsReusable
        {
            get
            {
                return false;
            }
        }
    }
}