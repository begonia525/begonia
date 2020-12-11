using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using BLL;
using Model;
using System.Text;

namespace 客户信息反馈系统
{
    public partial class History : System.Web.UI.Page
    {

        FeedBackBll fbBll = new FeedBackBll();
        protected void Page_Load(object sender, EventArgs e)
        {
            string phone1 = Session["Phone"].ToString();
            if (Session["Phone"] == null)
            {
                Response.Redirect("/Login.aspx");
            }
          else  if(!fbBll.SelectPhoneCount(phone1))
             {
                Response.Write("<script>alert('没有反馈记录！！')</script>");
                
            }
            else
            {
                Response.Write("我的历史反馈记录...");
                StringBuilder sb = new StringBuilder();
                string phone = Session["Phone"].ToString();
                sb.Append("<table class='t1'><tr><th>序号</th><th>账号</th><th>昵称</th><th>反馈信息</th><th>评价</th><th>时间</th><th>操作</th></tr>");
                List<FeedBack> fbList = fbBll.GetAll(phone);
                int number = 0;


                foreach (FeedBack fb in fbList)
                {
                    number++;
                    sb.AppendFormat("<tr><td>{0}</td><td>{1}</td><td width='8%'>{2}</td><td>{3}</td><td width='8%'>{4}</td><td>{5}</td><td width='18%'><a href='LookReply.aspx?id={6}'>查看回复</a> &nbsp;&nbsp;<a onclick='return confirm(\"真的要删除吗？\")' href='DeleteInfo.ashx?id={6}'>删除</a>&nbsp;&nbsp;<a href='HomePage.aspx?id={6}'>去反馈</a></td></tr>", number, fb.Phone, fb.Name, fb.Message, fb.Evaluate,fb.Time, fb.ID);

                }
                sb.Append("</table>");
                Response.Write(sb);
            }

        }
    }
}