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
    public partial class LookReply : System.Web.UI.Page
    {
        ReplyBll rpBll = new ReplyBll();
        protected void Page_Load(object sender, EventArgs e)
        {
            string phone1 = Session["Phone"].ToString();
            if (Session["Phone"] == null)
            {
                Response.Redirect("/Login.aspx");
            }
            else if (!rpBll.SelectPhoneCount(phone1))
            {
                Response.Write("<script>alert('没有记录！！')</script>");
            }
            else
            {
                Response.Write("收到的回复...");
                StringBuilder sb = new StringBuilder();
                string phone = Session["Phone"].ToString();
                sb.Append("<table class='t1'><tr><th>序号</th><th>账号</th><th>昵称</th><th>评价</th><th>反馈信息</th><th>反馈时间</th><th>回复</th><th>操作</th></tr>");
                List<Reply> rpList = rpBll.GetAll(phone);
                int number = 0;


                foreach (Reply rp in rpList)
                {
                    number++;
                    sb.AppendFormat("<tr><td>{0}</td><td>{1}</td><td width='8%'>{2}</td><td width='8%'>{3}</td><td>{4}</td><td>{5}</td><td>{6}</td><td width='16%'> &nbsp;&nbsp;<a onclick='return confirm(\"真的要删除吗？\")' href='DeleteInfoRe.ashx?id={7}'>删除</a>&nbsp;&nbsp;<a href='HomePage.aspx?id={7}'>去反馈</a></td></tr>", number,rp.Phone,rp.Name,rp.Evaluate , rp.Message, rp.Time,rp.AdReply,rp.ID);

                }
                sb.Append("</table>");
                Response.Write(sb);
            }
        }
    }
}