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
    public partial class Search : System.Web.UI.Page
    {
        FeedBackBll fbBll = new FeedBackBll();
        protected void Page_Load(object sender, EventArgs e)
        {
            string evaluate = Session["evaluate"].ToString();
            
            if (Session["Phone"] == null)
            {
                Response.Redirect("/Login.aspx");
            }
            else if (!fbBll.SelectEvaluateCount(evaluate))
            {
                Response.Write("<script>alert('评论空空如也。。。')</script>");
            }
            else
            {
                Response.Write(evaluate+"记录...");
                StringBuilder sb = new StringBuilder();
               
                sb.Append("<table  class='t1'align='center' ><tr ><th  border=1px solid black>序号</th><th  border: 1px solid black;>账号</th><th>昵称</th><th  border: 1px solid black;>反馈信息</th><th  border: 1px solid black;>评价</th><th  border: 1px solid black;>时间</th></tr>");
                List<FeedBack> fbList = fbBll.GetAllEvaluate(evaluate);
                int number = 0;


                foreach (FeedBack fb in fbList)
                {
                    number++;
                    sb.AppendFormat("<tr><td border='1px solid red'>{0}</td><td border='1px solid red'>{1}</td><td border='1px solid red'>{2}</td><td border='1px solid red'>{3}</td><td border='1px solid red'>{4}<td border='1px solid red'>{5}</td></tr>", number, fb.Phone, fb.Name, fb.Message, fb.Evaluate, fb.Time, number);

                }
                sb.Append("</table>");
                Response.Write(sb);
            }


        }
    }
}