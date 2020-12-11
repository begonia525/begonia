using DAL;
using System;
using System.Collections.Generic;
using System.Data.SqlClient;
using System.Linq;
using System.Web;
using BLL;

namespace 客户信息反馈系统
{
    /// <summary>
    /// DeleteInfo 的摘要说明
    /// </summary>
    public class DeleteInfo : IHttpHandler
    {
        FeedBackBll feedBackBll = new FeedBackBll();
        public void ProcessRequest(HttpContext context)
        {
            context.Response.ContentType = "text/plain";
            string id = context.Request["id"];
            int showId = int.Parse(id);
           
            if(feedBackBll.Delete(showId))
            {
              
                context.Response.Redirect("History.aspx");
                
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