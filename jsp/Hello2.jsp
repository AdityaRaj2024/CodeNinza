<html>
<head>
<title>Web Page</title>
</head>
<body>
<%out.print("Hello World");%>
<p>Host Name = <%=request.getRemoteHost()%></p>
<p>ID = <%=session.getId()%></p>
</body>
</html>