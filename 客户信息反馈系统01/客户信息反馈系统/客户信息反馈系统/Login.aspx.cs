using BLL;
using Model;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace 客户信息反馈系统
{
    public partial class Login : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {
            if (Session["UpdatePwd"]!=null)
            {
                Response.Write("密码修改成功，请重新登录!！");
              
            }
            Session["UpdatePwd"]=null;

        }

        protected void bt_Login_Click(object sender, EventArgs e)
        {
            string phone = tb_Phone.Text.Trim();
            string pwd = tb_Pwd.Text.Trim();
            ClientBll bll = new ClientBll();
            
            if (Session["Phone"] == null||(string)Session["Phone"]!=phone)
            {

            
            if (string.IsNullOrEmpty(phone) || string.IsNullOrEmpty(pwd))
            {
                Response.Write("用户名和密码不能为空！");
            }
            else if(phone.Equals("888")&&pwd.Equals("admin123"))
                {
                    
                    Response.Redirect("admin.aspx");
                }
            else
            {
                switch (bll.CheckLogin(phone, pwd))
                {
                    case LoginState.NoName:
                        Response.Write("用户名不存在，请重新输入");
                        break;
                    case LoginState.PwdErr:
                        Response.Write("密码错误，请重新输入！");
                        break;
                    case LoginState.OK:
                        Session["Phone"] = phone;
                        Client client = bll.SelectClient(phone);
                        string name = client.Name;
                        Session["Name"] = name;
                        Session["ClientID"] = client.ID;
                       
                        Response.Redirect("HomePage.aspx");
                        break;
                    default:
                        break;




                }
            }
        }
           else
                Response.Write("该账号已经登录！");


        }

        protected void bt_Regist_Click(object sender, EventArgs e)
        {
            Response.Redirect("Register.aspx");
        }
    }
}