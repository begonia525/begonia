<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Update.aspx.cs" Inherits="客户信息反馈系统.Update" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title>修改个人信息</title>
    <style type="text/css">
        .auto-style2 {
            height: 38px;
            width: 160px;
        }
        .auto-style3 {
            height: 39px;
        }
        .auto-style4 {
            margin-bottom: 9px;
        }
        .auto-style5 {
            height: 34px;
        }
        .auto-style6 {
            height: 35px;
        }
        .auto-style7 {
            height: 36px;
        }
        .auto-style8 {
            height: 32px;
        }
        .auto-style9 {
            left: 37%;
            top: 41%;
            width: 701px;
            height: 282px;
        }
    </style>
</head>
    <link href="Style.css" rel="stylesheet" type="text/css" />
<body background="url(oh.jpg)">
    <form id="form1" runat="server">
        <div class="center" style="left: 37%; top: 41%; width: 699px; height: 311px">

            <table style="margin-top:0.5cm;" class="auto-style9">
            <tr>
                 <td class="auto-style2">
                   
          <asp:Image ID="Image1" runat="server" Height="144px"
            ImageUrl="~/pig.jpg" Width="115px" BorderWidth="4px" /></td>
                <td>
                     <table>
                         <tr><th><h2>修改个人信息</h2></th></tr>

       <tr>
          <td align="center">手机号码：</td>
           <td class="auto-style7"><asp:TextBox ID="tb_phone" runat="server" ReadOnly="True" BorderStyle="None" BorderWidth="0px"></asp:TextBox></td>
       </tr>
        <tr>
          <td align="center">昵称：</td>
           <td class="auto-style6"><asp:TextBox ID="tb_Name" runat="server"></asp:TextBox></td>
       </tr>
              <tr>
          <td align="center">性别：
</td>
           <td class="auto-style5">

               <asp:RadioButtonList ID="rbl_Sex" runat="server" RepeatDirection="Horizontal" BackColor="White" EnableTheming="True">
                <asp:ListItem Value="男">男</asp:ListItem>
                <asp:ListItem Value="女" >女</asp:ListItem>
            </asp:RadioButtonList>

           </td>
       </tr>
              <tr>
          <td align="center">年龄：</td>
           <td><asp:TextBox ID="tb_Age" runat="server" CssClass="auto-style4"></asp:TextBox></td>
       </tr>
 
    
      
        <tr>
            <td colspan="2" align="center" class="auto-style3">
               
                <asp:Button ID="bt_Update" CssClass="bt" runat="server" Text="确定" OnClick="bt_Update_Click" />
                   
            </td> 
            

        </tr>
            
            <tr>
                <td colspan="2" align="center" class="auto-style8" > 

                  <a href="UpdatePwd.aspx">修改密码</a>
              

            </td>

            </tr>
            
       
    
        
           
        </table>
                </td>
            </tr>
        </table>
        
    
       </div>
        
    
    </form>
</body>
</html>
