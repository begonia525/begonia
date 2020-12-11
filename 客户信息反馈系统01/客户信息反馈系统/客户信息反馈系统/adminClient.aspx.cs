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
    public partial class adminClient : System.Web.UI.Page
    {
        ClientBll clientBll = new ClientBll();

        protected void Page_Load(object sender, EventArgs e)
        {
            StringBuilder sb = new StringBuilder();
            sb.Append("<table align='center'  border='1'><tr><th>ID</th><th>账号</th><th>密码</th><th>昵称</th><th>性别</th><th>年龄</th><th>操作</th></tr>");
            List<Client> clientList = clientBll.GetAll();
            int number = 0;


            foreach (Client cl in clientList)
            {
                number++;
                sb.AppendFormat("<tr><td>{0}</td><td>{1}</td><td>{2}</td><td>{3}</td><td>{4}</td><td>{5}</td><td width='20%'><a href='adminUpdate.aspx?id={6}'>修改</a> &nbsp;&nbsp;<a onclick='return confirm(\"真的要删除吗？\")' href='adminDelete.ashx?id={6}'>删除</a>&nbsp;&nbsp;<a href='Register.aspx?id={6}'>添加</a></td></tr>", cl.ID, cl.Phone, cl.Pwd, cl.Name, cl.Sex, cl.Age, cl.ID);

            }
            sb.Append("</table>");
            Response.Write(sb);
        }
    }
}