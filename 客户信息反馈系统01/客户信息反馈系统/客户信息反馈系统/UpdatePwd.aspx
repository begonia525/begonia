<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="UpdatePwd.aspx.cs" Inherits="客户信息反馈系统.UpdatePwd" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
     <link href="Style.css" rel="stylesheet" type="text/css" />
    <title>修改密码</title>
    <style type="text/css">
        .auto-style1 {
            height: 82px;
        }
        .auto-style2 {
            left: 50%;
            top: 47%;
            height: 178px;
            width: 467px;
        }
        .auto-style3 {
            height: 35px;
        }
        .auto-style4 {
            color: blue;
            width: 65px;
            height: 29px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
       <div class="center1" style="left: 49%; top: 51%; height: 311px; width: 545px; margin-bottom: 50px;">
        <table align="center" class="auto-style2" style="margin-top:0.5cm;">
            <tr><th align="center"><h3>修改密码</h3></th></tr>
            <tr>
                <td align="center">旧密码：<asp:TextBox ID="tb_OldPwd" TextMode="Password" runat="server" Height="24px"></asp:TextBox></td>
                <%--<td class="auto-style3"><asp:TextBox ID="tb_OldPwd" TextMode="Password" runat="server" Height="24px"></asp:TextBox></td>--%>
            </tr>
            <tr>
                <td align="center">新密码：<asp:TextBox ID="tb_NewPwd" TextMode="Password" runat="server" Height="24px"></asp:TextBox></td>
               <%-- <td class="auto-style3"><asp:TextBox ID="tb_NewPwd" TextMode="Password" runat="server" Height="24px"></asp:TextBox></td>
            --%>
                </tr>
            <tr>
                <td align="center">确认密码：<asp:TextBox ID="tb_ReNewPwd" TextMode="Password" runat="server" Height="24px"></asp:TextBox></td>
                <%--<td class="auto-style3"><asp:TextBox ID="tb_ReNewPwd" TextMode="Password" runat="server" Height="24px"></asp:TextBox></td>--%>
            </tr>
            <tr>
                <td colspan="2" align="center" class="auto-style1"><asp:Button ID="bt_OK" runat="server" CssClass="bt" Text="确定" OnClick="bt_OK_Click" Height="29px" Width="65px" />
                    <input type="reset" class="auto-style4" value="清空" />
                </td>
                
            </tr>
        </table>
    </div>
   
    </form>
   
</body>
</html>
