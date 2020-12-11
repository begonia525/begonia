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
    public partial class Register : System.Web.UI.Page
    {
        protected void Page_Load(object sender, EventArgs e)
        {

        }

        protected void bt_Login_Click(object sender, EventArgs e)
        {
            string Phone = tb_Phone.Text.Trim();
            Client client = new Client();
            string Pwd = tb_Pwd.Text.Trim();
            string rePwd = tb_RePwd.Text.Trim();
            ClientBll bll = new ClientBll();
            string Name = tb_Name.Text.Trim();
            byte Age = 0;

            //Byte.TryParse(yourAge.value(), out Age);
            Byte.TryParse(tb_Age.Text.Trim(), out Age);
            string Sex = rbl_Sex.SelectedValue == "男" ? "男" : "女";

            if (string.IsNullOrEmpty(Phone) || string.IsNullOrEmpty(Pwd))
            {
                Response.Write("用户名和密码不能为空！");
            }

            else if (Pwd != rePwd)
            {
                Response.Write("密码不一致！请重新输入！");
            }
            else
            {
                if (!bll.SelectPhoneCount(Phone))
                {

                    client.Phone = Phone;
                    client.Pwd = Pwd;
                    client.Name = Name;
                    client.Sex = Sex;
                    client.Age = Age;
                    bool isOK = bll.AddClient(client);
                    if (isOK)
                    {
                        Response.Write("<script>alert('注册成功！！')</script>");
                        Response.Redirect("Login.aspx");
                    }
                    else
                        Response.Write("<script>alert('注册失败！')</script>");


                }
                else
                    Response.Write("<script>alert('用户已经存在，请重新输入！')</script>");
            }


        }
    }
}