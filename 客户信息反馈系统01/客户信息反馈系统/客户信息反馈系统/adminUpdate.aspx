<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="adminUpdate.aspx.cs" Inherits="客户信息反馈系统.adminUpdate" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
     <link href="AdminStyle.css" rel="stylesheet" type="text/css" />
    <title></title>
    <style type="text/css">
        .auto-style1 {
            width: 518px;
        }
        .auto-style2 {
            width: 924px;
        }
        .auto-style3 {
            margin-left: 57px;
        }
        .auto-style4 {
            width: 924px;
            height: 5px;
        }
        .auto-style5 {
            margin-top: 0px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div align="center" style="margin-top:1cm" >
      
        <table  align="center" class="auto-style1" >
            <tr><th align="center" class="auto-style2" >修改客户信息</th><%--<th></th>--%></tr>
            <tr><td class="auto-style2"></td></tr>
                        <tr>
                <td align="center">账号： <asp:TextBox ID="tb_Phone" runat="server"></asp:TextBox></td>
              
                         <%--   <td>
                                <asp:TextBox ID="tb_Phone" runat="server"></asp:TextBox>

                            </td>--%>
                
            </tr>
           <tr><td class="auto-style2"></td></tr>
             <td align="center">密码：<asp:TextBox ID="tb_pwd" runat="server"></asp:TextBox></td>
            
           <%-- <td>
                <asp:TextBox ID="tb_pwd" runat="server"></asp:TextBox>
            </td>--%>
                
            </tr>
           <tr><td align="center"></td></tr>
            <tr>
                <td align="center">昵称：<asp:TextBox ID="tb_name" runat="server"></asp:TextBox></td>
               
                <%--<td>
                   
                    
                    <asp:TextBox ID="tb_name" runat="server"></asp:TextBox>
                   
                    
                </td>--%>

            </tr>
              <tr><td align="center"></td></tr>
            <tr>
                <td align="center">性别：<asp:RadioButtonList ID="rbl_sex" runat="server" RepeatDirection="Horizontal" CssClass="auto-style3" Height="16px" Width="196px">
                        <asp:ListItem>女</asp:ListItem>
                        <asp:ListItem>男</asp:ListItem>
                    </asp:RadioButtonList></td>
               <%-- <td>
                    
                    <asp:RadioButtonList ID="rbl_sex" runat="server" RepeatDirection="Horizontal">
                        <asp:ListItem>女</asp:ListItem>
                        <asp:ListItem>男</asp:ListItem>
                    </asp:RadioButtonList>
                    
                </td>--%>
            

                
            </tr>
              <tr><td align="center"></td></tr>
          
             <tr>
                <td align="center">年龄：<asp:TextBox ID="tb_age" runat="server"></asp:TextBox></td>
            
                 <%--<td>

                     <asp:TextBox ID="tb_age" runat="server"></asp:TextBox>

                 </td>--%>
                
            </tr>
            <tr>
                <td class="auto-style4"></td>
            </tr>
             <tr>
                 <td align="center"><asp:Button ID="bt_adminUpadate" runat="server" Text="确认修改" OnClick="bt_adminUpadate_Click" CssClass="auto-style5" Height="39px" /></td>
                 
             </tr>
        
           
        </table>
        
    </div>
    </form>
</body>
</html>
