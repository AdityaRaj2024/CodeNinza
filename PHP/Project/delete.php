<?php
						$conn=mysqli_connect("localhost","root","","cimage");
						if($conn)
						{
							$dl = $_GET['dl'];
							$query = "DELETE from data where id=" . $dl . "";
							$rs=mysqli_query($conn,$query);
							if($rs)
							{
								header("location: show.php");
							}
							else
							{
								$conn->error;
							}
						}
						else
						{
							echo "MYSQL not connected<br>";
						}
?>