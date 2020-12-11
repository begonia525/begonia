using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using Model;
using BLL;



namespace 客户信息反馈系统
{
    public partial class HomePage : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            //tb_Message.Attributes.Add("style", "background-color:transparent");
            if (Session["Name"] != null)
            {
                if(Session["fabuOK"]!=null)
                {
                    Response.Write("<script>alert('发布成功')</script>");
                    Session["fabuOK"]= null;
                }

                Response.Write(Session["Name"] + ",");

              

            }
            else
                Response.Redirect("Login.aspx");
            

        }

        

        protected void bt_update_Click(object sender, EventArgs e)//修改信息
        {
            Response.Redirect("Update.aspx");
        }

        protected void bt_exit_Click(object sender, EventArgs e)//退出登录
        {
            Session["Name"] = null;
            Session["Phone"] = null;
            Session["ClientID"] = null;
            Session["evaluate"] = null;
            Response.Redirect("Login.aspx");
        }

        protected void bt_summit_Click(object sender, EventArgs e)//发布反馈
        {
            FeedBackBll fbBll = new FeedBackBll();
            ReplyBll rePlyBll = new ReplyBll();
            string Message = tb_Message.Text.Trim();
            string Evaluate = rbl_evaluate.SelectedItem.Value;
            string Phone = Session["Phone"].ToString();
            string Name = Session["Name"].ToString();
            FeedBack feedBack = new FeedBack();
            feedBack.Message = Message;
            feedBack.Evaluate = Evaluate;
            feedBack.Phone = Phone;
            feedBack.Name = Name;
            feedBack.Time = DateTime.Now.ToUniversalTime();
            Reply reply = new Reply();
            reply.Phone = Phone;
            reply.Name = Name;
            reply.Evaluate = Evaluate;
            reply.Time = DateTime.Now.ToUniversalTime();
            reply.Message = Message;
            reply.AdReply ="暂未收到回复";
            if (fbBll.AddFeedBack(feedBack)&&rePlyBll.AddReply(reply))//判断是否发布反馈成功
            {
                 Session["fabuOK"] = "OK";
                tb_Message.Text = null;
                rbl_evaluate.SelectedItem.Selected = false;

                Response.Redirect("HomePage.aspx");
               
               
            }
            else
            {
                Response.Write("<script>alert('发布失败')</script>"); 
            }


        }

        protected void bt_search_Click(object sender, EventArgs e)
        {
           
            string evaluate = ddl_search.SelectedItem.ToString();
            Session["evaluate"] = evaluate;
           
            Response.Redirect("Search.aspx");
        }
    }
}