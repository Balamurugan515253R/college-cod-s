echo "enter the radius of the circle"
read radius
pi=3.14159
area=$(echo "$pi*($radius^2)"|bc)
circum=$(echo " (2*$pi*$radius)"|bc)
echo "area of the circle is :$area"
echo "circurmference of the circle is :$circum"
