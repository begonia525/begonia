<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Register.aspx.cs" Inherits="客户信息反馈系统.Register" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title>注册</title>
    <style type="text/css">
        .auto-style1 {
            left: 50%;
            top: 50%;
            height: 286px;
            width: 341px;
            margin-top: 0px;
            margin-bottom: 8px;
        }
        .auto-style3 {
            width: 151px;
        }
    </style>
</head>
<body>
     <link href="Style.css" rel="stylesheet" type="text/css" />
     <form id="form1" runat="server">
         <div   class="center" style="left: 48%; top: 40%; height: 295px; width: 533px; margin-bottom: 110px;">

        <table class="auto-style1" style="margin-left:80px;">
            <tr><th align="center"><h3 class="auto-style3">新用户注册</h3></th></tr>
       <tr>
          <td>手机号码：</td>
           <td><asp:TextBox ID="tb_Phone" runat="server"></asp:TextBox></td>
       </tr>
        <tr>
            <td>密码：</td>
            <td><asp:TextBox ID="tb_Pwd" TextMode="Password" runat="server"></asp:TextBox> </td>
        </tr>
            <tr>
            <td>确认密码：</td>
            <td><asp:TextBox ID="tb_RePwd" TextMode="Password" runat="server"></asp:TextBox> </td>
        </tr>
        <tr>
            <td>昵称：</td>
            <td><asp:TextBox ID="tb_Name" runat="server"></asp:TextBox></td>
        </tr>
         <tr>
             <td>性别：</td>
             <td><asp:RadioButtonList ID="rbl_Sex" runat="server" RepeatDirection="Horizontal">
                <asp:ListItem>女</asp:ListItem>
                <asp:ListItem>男</asp:ListItem>
            </asp:RadioButtonList></td>
         </tr>
            <tr>
                <td>年龄：</td>
                <td><asp:TextBox ID="tb_Age" runat="server"></asp:TextBox></td>
                <%--<td>
                    <select name="yourAge" id="yourAge" class="auto-style2">
                      
      
                

<option value="1">1</option>

<option value="2">2</option>

<option value="3">3</option>

<option value="4">4</option>

<option value="5">5</option>

</select>
                </td>--%>
            </tr>
            <tr>
                <td></td>
                <td >&nbsp;&nbsp;&nbsp;<asp:Button ID="bt_Register"  CssClass="bt" runat="server" Text="注册" OnClick="bt_Login_Click" />
                     <input type="reset"  class="bt" value="取消" />
                </td>
               
            </tr>
 
        
            
        
         
    
         
         
        </table>
         </div>
        </form>
</body>
</html>
