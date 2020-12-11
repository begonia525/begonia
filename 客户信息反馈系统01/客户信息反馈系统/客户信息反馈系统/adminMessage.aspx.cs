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
    public partial class adminMessage : System.Web.UI.Page
    {

        ReplyBll replyBll = new ReplyBll();
        protected void Page_Load(object sender, EventArgs e)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("<table align='center'  border='1'><tr><th>序号</th><th>数据库ID</th><th>账号</th><th>昵称</th><th>反馈信息</th><th>评价</th><th>时间</th><th>回复情况</th><th>操作</th></tr>");
            List<Reply> replyList = replyBll.GetAll2();
            int number = 0;
            foreach (Reply re in replyList)
            {
                number++;
                sb.AppendFormat("<tr><td>{0}</td><td>{1}</td><td>{2}</td><td>{3}</td><td>{4}</td><td>{5}</td><td>{6}</td><td>{7}</td><td width='16%'><a onclick='return confirm(\"真的要删除吗？\")' href='adminDeleteReply.ashx?id={8}'>删除</a>&nbsp;&nbsp;<a href='GoReply.aspx?id={8}'>去回复</a></td></tr>", number, re.ID,re.Phone, re.Name, re.Evaluate, re.Message,  re.Time, re.AdReply,re.ID);

            }
            sb.Append("</table>");
            Response.Write(sb);
        }
    }
}