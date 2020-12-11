<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Login.aspx.cs" Inherits="客户信息反馈系统.Login" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title>登录</title>
    <style>
h2
{
	text-shadow: 5px 5px 5px #0026ff;
}
        .auto-style3 {
            left: 50%;
            top: 50%;
            height: 226px;
            width: 352px;
        }
        .auto-style4 {
            height: 30px;
        }
        .auto-style5 {
            height: 30px;
            width: 256px;
        }
    </style>
</head> 
  
<body>
     <link href="Style.css" rel="stylesheet" type="text/css" />
   
   <form id="form1" runat="server">
       <h2 >
           欢迎来到客户信息反馈系统登录界面
       </h2>
           <div  class="center1" style="left: 41%; top: 50%; height: 286px; width: 503px; margin-right: 5px;" >
               
         
           <table  style="margin-left:40px;margin-top:0.2cm;" class="auto-style3">
          
                   
          <tr>
              <td class="auto-style4" >账号：</td>
              <td class="auto-style5"><asp:TextBox ID="tb_Phone" runat="server" Height="26px"></asp:TextBox></td>
          </tr>
            <tr>
              <td class="auto-style4">密码：</td>
              <td class="auto-style5"><asp:TextBox ID="tb_Pwd" TextMode="Password" runat="server" Height="26px"></asp:TextBox></td>
          </tr>
            <td colspan="2" align="center" class="auto-style4"><asp:Button ID="bt_Login" CssClass="bt" runat="server" Text="登录" OnClick="bt_Login_Click" />
                                <asp:Button ID="bt_Regist"  CssClass="bt" runat="server" Text="注册" OnClick="bt_Regist_Click"  />
            </td>
        </table>
                 
         
       </div>
        
   
       
    </form>
</body>
</html>
