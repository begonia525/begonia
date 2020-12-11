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
    public partial class Update : System.Web.UI.Page
    {
        ClientBll clientBll = new ClientBll();
        FeedBackBll feedBackBll = new FeedBackBll();
        ReplyBll replyBll = new ReplyBll();
        
        protected void Page_Load(object sender, EventArgs e)
        {
            tb_phone.Attributes.Add("style", "background-color:transparent");
            Response.Write(Session["Name"] + ",");
            Response.Write("您好！");
            Response.Write("如要修改手机号码，请联系管理员！");
            string phone = (string)Session["Phone"];
            if (phone == null) //判断用户是否登录
            {
                Response.Redirect("/Login.aspx");
            }
            else
            {
                if (!IsPostBack)  //页面首次加载
                {
                    
                    Client client = clientBll.SelectClient(phone);
                    if (client == null)
                    { Response.Write("<script>alert('需修改的用户不存在')</script>"); }
                    else
                    {   //将从数据库中获取的数据加载到对应的控件中
                       
                        tb_phone.Text = client.Phone;
                        tb_Name.Text = client.Name;
                        tb_Age.Text = client.Age == null ? "" : client.Age.ToString();
                        if (client.Sex == "男")
                        {
                            rbl_Sex.SelectedValue = "男";
                        }

                        else if (client.Sex == "女")
                        {
                            rbl_Sex.SelectedValue = "女";
                        }

                    }



                }
            }

        }
        protected void bt_Update_Click(object sender, EventArgs e)
        {

            string phone1 = (string)Session["Phone"];
            Client client = new Client();
            string phone = tb_phone.Text.Trim();
            string name = tb_Name.Text.Trim();
            if (string.IsNullOrEmpty(phone))
            {
                Response.Write("<script>alert('手机号不能为空')</script>");
            }
            else if (string.IsNullOrEmpty(name))
            {
                Response.Write("<script>alert('昵称不能为空')</script>");
            }
            else
            {
                    
                    int age;
                client.Sex = rbl_Sex.SelectedItem.Value;
                client.Age = Int32.TryParse(tb_Age.Text.Trim(), out age) ? (byte?)age : null;;
                    client.Phone = phone;
                    client.Name = name;
                    if (clientBll.Update(client,phone1)&&feedBackBll.clientUpdate(client.Name,phone)&&replyBll.clientUpdate(client.Name,phone))

                {
                    Session["Name"] = name;
                    Response.Write("<script>alert('修改成功')</script>");


                }
                    else
                        Response.Write("<script>alert('修改失败')</script>");
                }




            }

       
    }
           

        
    }

        