<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="most.aspx.cs" Inherits="客户信息反馈系统.most" %>

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <title></title>
</head>
<body>
    <link href="Style.css" rel="stylesheet" type="text/css" />
    <form id="form1" runat="server">
    <div>
    
    </div>
        <asp:DataList ID="DataList1" runat="server" CellPadding="4" DataSourceID="SqlDataSource1" Height="237px" Width="847px" ForeColor="#333333">
            <AlternatingItemStyle BackColor="White" ForeColor="#284775" />
            <FooterStyle BackColor="#5D7B9D" ForeColor="White" Font-Bold="True" />
            <HeaderStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
            <ItemStyle BackColor="#F7F6F3" ForeColor="#333333" />
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
            <SelectedItemStyle BackColor="#E2DED6" ForeColor="#333333" Font-Bold="True" />
        </asp:DataList>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" ConnectionString="<%$ ConnectionStrings:UsersConnectionString4 %>" SelectCommand="SELECT [Phone], [Name], [Message], [Evaluate], [Time] FROM [FeedBack] ORDER BY [Time]DESC"></asp:SqlDataSource>
    </form>
</body>
</html>
