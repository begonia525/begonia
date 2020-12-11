using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using BLL;

namespace 客户信息反馈系统
{
    /// <summary>
    /// adminDeleteReply 的摘要说明
    /// </summary>
    public class adminDeleteReply : IHttpHandler
    {
        ReplyBll replyBll = new ReplyBll();
       
        public void ProcessRequest(HttpContext context)
        {
            context.Response.ContentType = "text/plain";


            
            string id = context.Request["id"];
            int showId = int.Parse(id);

            if (replyBll.Delete(showId))
            {

                context.Response.Redirect("adminMessage.aspx");

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