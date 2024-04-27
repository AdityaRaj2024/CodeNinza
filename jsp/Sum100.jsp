<!-- Sum of first 100 Natural Number -->
<html>
<head>
<title>JSP Example</title>
</head>
<body>
<%int num,sum=0;
    for(num=1;num<=100;num++)
    {
        sum=sum+num;
    }
    out.println("Sum of First 100 Natural Number are :- "+sum);%>
</body>
</html>