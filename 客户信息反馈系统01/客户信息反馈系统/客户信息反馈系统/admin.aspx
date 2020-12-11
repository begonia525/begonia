<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="admin.aspx.cs" Inherits="客户信息反馈系统.admin" %>
<!DOCTYPE html>
<html>
<head>
  <title>管理员页面</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
        <link href="AdminStyle.css" rel="stylesheet" type="text/css" />
  <link rel="stylesheet" href="bootstrap.min.css">  

    <script src="jquery-3.5.1.min.js"></script>
  <script src="bootstrap.min.js"></script>
</head>
<body>

<div class="container">
   
    <div class="container-fluid">
 
  <div class="row">
    <div class="col" style="background-color:skyblue;"> <button type="button" class="btn btn-primary" data-toggle="collapse" data-target="#demo">温馨提示</button>
  <div id="demo" class="collapse">
    您已进入管理员操作界面，请谨慎操作！
  </div>
      
    </div>
      <div>
         
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
                        str = yy + "年" + MM + "月" + dd + "日" + " " + hh + ":" + mm + ":" + ss + "  ";
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
    <div class="col" style="background-color:yellowgreen;"> 
          <span class="float-right"> <a href="Login.aspx">注销登录</a></span>
      </div>
  </div>
</div>
  <div class="jumbotron">
      <div>
         <table>
            <tr>
                <td class="auto-style1"><asp:Image ID="Image2" runat="server" Height="129px"
            ImageUrl="~/lufei.jpg" Width="115px" BorderWidth="4px" /></td>
                <td> <h2 class="display-4">尊敬的管理员，您好</h2></td>
                 
            </tr>
             
             </table>
    </div>
     
   
       
  
  </div>
  <div class="row">
    <div class="col-sm-4">
      <h3 >注册管理</h3>
      <p><a href="adminClient.aspx">管理客户注册信息</a></p>
      
    </div>
    <div class="col-sm-4">
      <h3 >反馈管理</h3>
      <p><a href="adminMessage.aspx">管理客户反馈信息</a></p>
       
    
        
    </div>
    <div class="col-sm-4">
      <h3>统计</h3> 
         <p><a href="adminSelectGood.aspx">好评记录</a></p>
         <p><a href="adminSelectMid.aspx">中评记录</a></p>
         <p><a href="adminSelectBad.aspx">差评记录</a></p>
               
      
      
    </div>
  </div>
</div>

</body>
</html>


<%--<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title></title>
    <style type="text/css">
        .auto-style1 {
            width: 124px;
        }
    </style>
</head>
<body >
     <link href="Style.css" rel="stylesheet" type="text/css" />
    <form id="form1" runat="server">
    <div>
         <table>
            <tr>
                <td class="auto-style1"><asp:Image ID="Image1" runat="server" Height="144px"
            ImageUrl="~/lufei.jpg" Width="127px" BorderWidth="4px" /></td>
            </tr>
             </table>
    </div>
    </form>
</body>
</html>--%>
