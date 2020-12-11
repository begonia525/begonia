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
    public partial class adminUpdate : System.Web.UI.Page
    {
        ClientBll clientBll = new ClientBll();
        FeedBackBll feedBackBll = new FeedBackBll();
        ReplyBll replyBll = new ReplyBll();
        string id;
        int showId;
        string phone2;
        protected void Page_Load(object sender, EventArgs e)
        {
            tb_Phone.Attributes.Add("style", "background-color:transparent");
          
            tb_name.Attributes.Add("style", "background-color:transparent");
            tb_pwd.Attributes.Add("style", "background-color:transparent");
            tb_age.Attributes.Add("style", "background-color:transparent");
            id = Request["id"];
            showId = int.Parse(id);
            Client client = clientBll.SelectClient2(showId);
            phone2 = client.Phone;
            if (!Page.IsPostBack)
            {
                tb_Phone.Text = client.Phone;
                //phone2 = tb_Phone.Text.Trim();
                tb_pwd.Text = client.Pwd;
                tb_name.Text = client.Name;
                tb_age.Text = client.Age == null ? "" : client.Age.ToString();
                if (client.Sex == "男")
                {
                    rbl_sex.SelectedValue = "男";
                }

                else if (client.Sex == "女")
                {
                    rbl_sex.SelectedValue = "女";
                }
            }
           
        }

        protected void bt_adminUpadate_Click(object sender, EventArgs e)
        {
            Client client = new Client();
            string phone = tb_Phone.Text.Trim();
            string name= tb_name.Text.Trim();
           
            string pwd= tb_pwd.Text.Trim();
            //Response.Write(phone + "..." + name + "..."+pwd+"..."+ rbl_sex.SelectedItem.Value);
            client.Phone = phone;
            client.Name = name;
            client.Pwd = pwd;
            if (string.IsNullOrEmpty(phone))
            {
                Response.Write("<script>alert('手机号不能为空！')</script>");
            }
            else if(phone!=phone2&&clientBll.SelectPhoneCount(phone))//判断如果管理员修改了用户账号时，该账号是否已经存在
             {
                Response.Write("<script>alert('该账号已经存在！')</script>");
            }
            else if (string.IsNullOrEmpty(pwd))
            {
                Response.Write("<script>alert('密码不能为空！')</script>");
            }

            else if (string.IsNullOrEmpty(name))
            {
                Response.Write("<script>alert('昵称不能为空')</script>");
            }
            else
            {
                client.Sex = rbl_sex.SelectedItem.Value;
                int age;

                client.Age = Int32.TryParse(tb_age.Text.Trim(), out age) ? (byte?)age : null; ;
                if (clientBll.adminUpdate(client, showId)&& feedBackBll.adminUpdate(client,phone2)&&replyBll.adminUpdate(client,phone2))//同时更新三个表
                {
                    Response.Write("<script>alert('修改成功')</script>");
                    //Response.Redirect("adminClient.aspx");

                }
                else
                    Response.Write("<script>alert('修改失败')</script>");
                //Response.Write(phone2);


            }


        }
    }
}