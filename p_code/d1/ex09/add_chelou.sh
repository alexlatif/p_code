

’\"?!
01234 - base5

mrdoc
01234 - base5

gtaio luSnemf
0123456789ABC - base13 -> 23base5

\'?"\"'\rcrdmddd
1032120114120222

echo $FT_NBR1+$FT_NBR2 | sed 's/+//' | sed "s/'/0/g" | sed 's/\\/1/g' | sed 's/"/2/g' | sed 's/?/3/g' | 
sed 's/\!/4/g' | tr "mrdoc" "01234" | 

xargs echo "ibase=5; obase23;" | bc | tr "0123456789ABC" "gtaio luSnemf"
