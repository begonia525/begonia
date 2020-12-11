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
    public partial class adminSelectBad : System.Web.UI.Page
    {
        ReplyBll replyBll = new ReplyBll();
        protected void Page_Load(object sender, EventArgs e)
        {
            string evaluate = "差评";
            if(replyBll.SelectEvaluateCount(evaluate))
            {
                StringBuilder sb = new StringBuilder();
                sb.Append("<table align='center'  border='1'><tr><th>序号</th><th>账号</th><th>昵称</th><th>评价</th><th>反馈</th><th>反馈时间</th><th>回复</th></tr>");
                List<Reply> replyList = replyBll.GetEvaluate(evaluate);
                int number = 0;


                foreach (Reply re in replyList)
                {
                    number++;
                    sb.AppendFormat("<tr><td>{0}</td><td>{1}</td><td>{2}</td><td>{3}</td><td>{4}</td><td>{5}</td><td>{6}</td></tr>", number, re.Phone, re.Name, re.Evaluate, re.Message, re.Time, re.AdReply, re.ID);

                }
                sb.Append("</table>");
                Response.Write(sb);

            }
            else
            {
                Response.Write("<script>alert('没有差评记录')</script>");
            }

        }
    }
}