<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="HomePage.aspx.cs" Inherits="客户信息反馈系统.HomePage" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<%--<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>--%>
    <title>信息反馈系统</title>
    <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="bootstrap.min.css">  

    <script src="jquery-3.5.1.min.js"></script>
  <script src="bootstrap.min.js"></script>
    <style type="text/css">
        h2
{
	text-shadow: 5px 5px 5px #ff00dc;
}
        #form1 {
            width: 118px;
            height: 147px;
        }
        .auto-style6 {
            width: 363px;
        }
        .auto-style7 {
            margin-left: 0px;
            margin-right: 100px;
        }
        .auto-style13 {
            margin-left: 20px;
        }
        .auto-style14 {
            width: 619px;
        }
        .auto-style15 {
            height: 88px;
        }
         .carousel-inner img {
      width: 100%;
      height: 28%;
  }
        .auto-style16 {
            margin-bottom: 0px;
        }

      
        .auto-style17 {
            width: 171px;
        }

      
        </style>
    
</head> 
<body  >
     <h2 >
           欢迎来到客户信息反馈系统
       </h2>
   



   <%--<div id="demo" class="carousel slide" data-ride="carousel">
 
  <!-- 指示符 -->
  <ul class="carousel-indicators">
    <li data-target="#demo" data-slide-to="0" class="active"></li>
    <li data-target="#demo" data-slide-to="1" class="auto-style1"></li>
    <li data-target="#demo" data-slide-to="2"></li>
  </ul>
 
  <!-- 轮播图片 -->
  <div class="carousel-inner">
    <div class="carousel-item active">
      <img src="bg.jpg">
    </div>
    <div class="carousel-item">
      <img src="bg2.jpg">
    </div>
    <div class="carousel-item">
      <img src="adb.jpg">
    </div>
  </div>
 
  <!-- 左右切换按钮 -->
  <a class="carousel-control-prev" href="#demo" data-slide="prev">
    <span class="carousel-control-prev-icon"></span>
  </a>
  <a class="carousel-control-next" href="#demo" data-slide="next">
    <span class="carousel-control-next-icon"></span>
  </a>
 
</div>--%>
     <link href="Style.css" rel="stylesheet" type="text/css" />
    <form id="form1" runat="server">
    
      <table aria-atomic="True" aria-disabled="False" >
          <tr>
              <td class="auto-style2">
                 
         <asp:Image ID="Image1" runat="server" Height="144px"
            ImageUrl="~/pig.jpg" Width="115px" BorderWidth="4px" />
                  <table>
                       <tr>
                  <td>
                      <asp:Button ID="bt_update" CssClass="bt" runat="server" Text="修改信息" OnClick="bt_update_Click" />
                     
                     
                  </td>
                  

              </tr>
               <tr>
                    <td>  <asp:Button ID="bt_exit" CssClass="bt" runat="server" Text="退出登录" OnClick="bt_exit_Click" />

                   </td>

               </tr>
                  </table> 

                  
              </td>
             
              <td class="auto-style14">
                  <div>
                  <table class="auto-style16">
                       <tr>
                                 
                                     <td class="auto-style15">
                                       

                                        <asp:DropDownList ID="ddl_search" runat="server" Width="248px" CssClass="auto-style13" Height="30px">
                                            <asp:ListItem>好评</asp:ListItem>
                                            <asp:ListItem>中评</asp:ListItem>
                                            <asp:ListItem>差评</asp:ListItem>
                                        </asp:DropDownList>
                                               
                                   
                                        <asp:Button ID="bt_search" runat="server" Text="搜索评论" OnClick="bt_search_Click" Height="36px" Width="138px" /> 
                                   
                                    </td>
                                        
                                </tr>
                      <tr>
                          <td  >
                          
                                您的反馈： 
                             
                              
                          </td>
                      </tr>
                      <tr>
                          
                         
                          <td class="auto-style1">
                               <asp:TextBox ID="tb_Message"  runat="server" BackColor="#FFFFCC" BorderColor="#66FF66" BorderWidth="4px" Height="103px" Rows="10" style="margin-left: 61px; margin-bottom: 27px" Width="532px" ForeColor="Black" MaxLength="200" TextMode="MultiLine" ></asp:TextBox>

                         <table>
                                  <tr>
                                      <td>
                                          &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;
                                      </td>
                                      <td>&nbsp;&nbsp;&nbsp;&nbsp;</td>
                                      <td>
                                           <asp:RadioButtonList ID="rbl_evaluate" runat="server" RepeatDirection="Horizontal">
                                            <asp:ListItem>好评</asp:ListItem>
                                            <asp:ListItem>中评</asp:ListItem>
                                            <asp:ListItem>差评</asp:ListItem>
                                            </asp:RadioButtonList>
                                      </td>
                                      <td> &nbsp;
                                          <asp:Button ID="bt_summit" CssClass="bt" runat="server" Text="发布" OnClick="bt_summit_Click" />

                                      </td>
                                  </tr>
                              
                              </table>
                              
                               </td>
                      </tr>
                  </table></div>
              </td>
          </tr>   
          </table> 
     
        <div style="margin-left:750px;margin-top:-8cm;">
             <span style="width:150px;float: left;color: #5a5757;font-size:12px;display: block;height: 35px;line-height: 35px; margin-left:18px" id="jnkc">
                <script type="text/javascript">
                    function showLocale(objD) {
                        var str;
                        var yy = objD.getYear();
                        if (yy < 1900) yy = yy + 1900;
                        var MM = objD.getMonth() + 1;
                        if (MM < 10) MM = '0' + MM;
                        var dd = objD.getDate();
                        if (dd < 10) dd = '0' + dd;
                        var hh = objD.getHours();
                        if (hh < 10) hh = '0' + hh;
                        var mm = objD.getMinutes();
                        if (mm < 10) mm = '0' + mm;
                        var ss = objD.getSeconds();
                        if (ss < 10) ss = '0' + ss;
                        str =yy + "年" + MM + "月" + dd + "日" + " " + hh + ":" + mm + ":" + ss + "  ";
                        return (str);
                    }

                    function tick() {
                        var today;
                        today = new Date();
                        document.getElementById("jnkc").innerHTML = showLocale(today);
                        window.setTimeout("tick()", 1000);
                    }
                    
                    tick();
                </script>
        </span>
        </div>
        <div style="margin-left:780px;margin-top:-4cm;" class="auto-style6">
            <asp:Calendar ID="Calendar1"   runat="server" CssClass="auto-style7" FirstDayOfWeek="Sunday" Font-Size="Smaller" Font-Strikeout="False" Height="188px" Width="351px">
               
                <SelectorStyle BackColor="#FF9900" BorderColor="#CC9900" />
            </asp:Calendar>
        </div>
        <br />
        <table style="margin-top:1cm;">
       
            <tr>
                <td><a href="History.aspx"><h4 class="auto-style17"> 我的反馈</h4></a></td>
            </tr>
         
            <tr>
                <td> <a href="LookReply.aspx"><h4>查看回复</h4></a></td>
            </tr>
          
            <tr>
                <td> <a href="most.aspx"><h4>最新反馈</h4></a></td>
            </tr>
        </table>
         
        
        <div align="center">
                    <asp:DataList ID="DataList1" runat="server" BackColor="#DEBA84" BorderColor="#DEBA84" BorderWidth="1px" CellPadding="3" ClientIDMode="Predictable" DataSourceID="SqlDataSource1" Height="16px" Width="552px" BorderStyle="None" GridLines="Both" CellSpacing="2">
            <FooterStyle BackColor="#F7DFB5" ForeColor="#8C4510" />
            <HeaderStyle BackColor="#A55129" Font-Bold="True" ForeColor="White" />
                        <ItemStyle BackColor="#FFF7E7" ForeColor="#8C4510" />
            <ItemTemplate>
                账号:
                <asp:Label ID="PhoneLabel" runat="server" Text='<%# Eval("Phone") %>' />
                <br />
                昵称:
                <asp:Label ID="NameLabel" runat="server" Text='<%# Eval("Name") %>' />
                <br />
                反馈:
                <asp:Label ID="MessageLabel" runat="server" Text='<%# Eval("Message") %>' />
                <br />
                评价:
                <asp:Label ID="EvaluateLabel" runat="server" Text='<%# Eval("Evaluate") %>' />
                <br />
                时间:
                <asp:Label ID="TimeLabel" runat="server" Text='<%# Eval("Time") %>' />
                <br />
                <br />
            </ItemTemplate>
            <SelectedItemStyle BackColor="#738A9C" ForeColor="White" Font-Bold="True" />
          
        </asp:DataList> 

        <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:UsersConnectionString3 %>" SelectCommand="SELECT top 1 [Phone], [Name], [Message], [Evaluate], [Time] FROM [FeedBack] ORDER BY [Time] DESC
"></asp:SqlDataSource>

        </div>
     
    </form>
</body>
</html>

