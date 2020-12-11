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
    public partial class UpdatePwd : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void bt_OK_Click(object sender, EventArgs e)
        {
            ClientBll bll = new ClientBll();

            string oldPwd = tb_OldPwd.Text.Trim();
            string newPWd = tb_NewPwd.Text.Trim();
            string reNewPwd = tb_ReNewPwd.Text.Trim();
            string phone = (string)Session["Phone"];
            Client client = bll.SelectClient(phone);
            if (oldPwd != client.Pwd)
            {
                Response.Write("<script>alert('旧密码错误！')</script>");

            }
            else if(oldPwd==newPWd)
            {
                Response.Write("<script>alert('新密码与旧密码一致！！')</script>");

            }
            else
             if (newPWd!=reNewPwd)
            {
                Response.Write("<script>alert('密码不一致！')</script>");

            }
            else if(bll.UpdatePwd(newPWd,client.Phone))
            {
                Session["UpdatePwd"] = 1;
                Session["Phone"] = null;
                Session["Name"] = null;
              
                Response.Redirect("Login.aspx");
              
              
            }
            else
            {
                Response.Write("<script>alert('修改密码失败！')</script>");

            }

        }
    }
}