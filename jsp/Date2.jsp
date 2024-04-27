<html>
<head>
<title>Example of JSP Implicit object</title>
<%@page import="java.util.Date"%>
</head>
<body>
<body bgcolor="aqua">
<font color="green">
<h2>This is Example of current Date</h2>
<h3>
    <%response.setHeader("Refresh","6");%>
    current Date : <%=new Date()%>.
</h3>
</font>
</body>
</html>