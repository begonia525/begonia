using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using BLL;
using Model;

namespace 客户信息反馈系统
{
    public partial class GoReply1 : System.Web.UI.Page
    {
        ReplyBll replpyBll = new ReplyBll();
        string id;
        int showId;
        protected void Page_Load(object sender, EventArgs e)
        {

            tb_Phone.Attributes.Add("style", "background-color:transparent");//设置文本框的背景为透明的
            tb_name.Attributes.Add("style", "background-color:transparent");
            tb_evaluate.Attributes.Add("style", "background-color:transparent");
            tb_message.Attributes.Add("style", "background-color:transparent");
            tb_time.Attributes.Add("style", "background-color:transparent");
            tb_reply.Attributes.Add("style", "background-color:transparent");
            id =Request["id"];
             showId = int.Parse(id);
            Reply reply = replpyBll.Select(showId);
            tb_Phone.Text = reply.Phone;
            tb_name.Text = reply.Name;
            tb_evaluate.Text = reply.Evaluate;
            tb_message.Text = reply.Message;
            tb_time.Text = reply.Time.ToString();


        }

        protected void bt_reply_Click(object sender, EventArgs e)
        {

            string replying = tb_reply.Text.Trim();
           
          
          
            if (replpyBll.AddReply(showId, replying))
            {
                Response.Write("<script>alert('回复成功')</script>");
                Response.Redirect("adminMessage.aspx");
            }
            else
            {
                Response.Write("<script>alert('回复失败')</script>");
            }


        }
    }
}