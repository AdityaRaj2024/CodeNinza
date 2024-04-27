<?php
	$con = mysqli_connect("localhost","root","","cimage");
	if($con)
	{
		$SQL_query = "SELECT * from employee";
		$rs = mysqli_query($con,$SQL_query);
		if($rs)
		{
			//$row = mysqli_fetch_array($rs);
			/*echo "Records are:<br>";
			echo "Name&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Id&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Post&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;Email&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbspSalary<br>";
			while($row = mysqli_fetch_array($rs))
			{
				echo $row['name'] . "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" . $row['id'] . "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" . $row['post'] . "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" . $row['email'] . "&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;" . $row['salary'] . "<br>";
			}*/
		}
		else
		{
			echo "MySQL error :" . mysqli_error($con) . "<br>";
		}
	}
	else
	{
		echo "Database error :" . mysqli_connect_error() . "<br>";
	}
?>
<center>
	<table height="300px" width="500px" border="2px">
		<tr>
			<td>NAME</td>
			<td>ID</td>
			<td>POST</td>
			<td>EMAIL</td>
			<td>SALARY</td>
		</tr>
		<?php
			while($row = mysqli_fetch_array($rs))
			{
		?>
			<tr>
				<td><?php echo $row['name']?></td>
				<td><?php echo $row['id']?></td>
				<td><?php echo $row['post']?></td>
				<td><?php echo $row['email']?></td>
				<td><?php echo $row['salary']?></td>
			</tr>
		<?php
			}
		?>
	</table>
</center>