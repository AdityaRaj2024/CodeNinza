<html>
<head>
<title>Web Page</title>
</head>
<body>
<%out.print("Welcome"+request.getParameter("UName"));
String driver=config.getInitParameter("dname");
out.print("drivername= "+driver);%>
</body>
</html>