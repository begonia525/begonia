<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="GoReply.aspx.cs" Inherits="客户信息反馈系统.GoReply1" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
    
<head runat="server">
     <link href="AdminStyle.css" rel="stylesheet" type="text/css" />

     <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">


    <script src="jquery-3.5.1.min.js"></script>
  <script src="bootstrap.min.js"></script>
    <title></title>
    <style type="text/css">
        .auto-style2 {
            margin-top: 0px;
        }
        .auto-style3 {
            width: 572px;
        }
        .auto-style4 {
            height: 514px;
        }
        .auto-style5 {
            margin-left: 64px;
        }
        </style>
</head>
<body>
    <form id="form1" runat="server">
    <div align="center" style="margin-top:0cm" >
      
        <table  align="center" class="auto-style4" >
            <tr><th align="center" class="auto-style3" >客户反馈信息</th></tr>
            <tr><td class="auto-style3"></td></tr>
                        <tr>
                <td align="center" class="auto-style3">账号：<asp:TextBox ID="tb_Phone" runat="server" ReadOnly="True" CssClass="auto-style2" BorderStyle="None" BorderWidth="0px"></asp:TextBox></td>
              
            </tr>
          
            <tr>
                <td align="center" class="auto-style3">昵称：<asp:TextBox ID="tb_name" runat="server" ReadOnly="True" BorderStyle="None" BorderWidth="0px"></asp:TextBox></td>
            
            </tr>
            
            <tr>
                <td align="center" class="auto-style3">评价：<asp:TextBox ID="tb_evaluate" runat="server" ReadOnly="True" BorderStyle="None" BorderWidth="0px"></asp:TextBox></td>
              
            </tr>
              <tr ><td align="center" >反馈：&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</td></tr>
            <tr>
                <td align="center" class="auto-style3"><asp:TextBox ID="tb_message" runat="server" ReadOnly="True" Rows="3" TextMode="MultiLine" Width="311px" CssClass="mt-0" Height="71px" style="margin-left: 67px" BorderStyle="None" BorderWidth="0px"></asp:TextBox></td>
              
            </tr>
              
             <tr>
                <td align="center" class="auto-style3">反馈时间：<asp:TextBox ID="tb_time" runat="server" ReadOnly="True" BorderStyle="None" BorderWidth="0px"></asp:TextBox ></td>
              
            </tr>
           
        
            <tr>
              
                <td  align="center" class="auto-style3"><asp:TextBox ID="tb_reply" runat="server" TextMode="MultiLine" Height="72px" Width="310px" CssClass="auto-style5"></asp:TextBox>
               </td>

                
            </tr>
            <tr>
                <td align="center" class="auto-style3"><asp:Button ID="bt_reply" runat="server" Text="回复" Height="35px" OnClick="bt_reply_Click" Width="88px" /></td>
            </tr>
        </table>
        
    </div>
       
    </form>
</body>
</html>
