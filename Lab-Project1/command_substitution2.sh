value1=4.259
value2=7.384
result=$(echo "scale=6;$value1/$value2" | bc)
echo "$result"
