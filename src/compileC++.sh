file_in=$1
printf "file in $file_in\\n"
file_out="${file_in##*/}"
file_out=$(basename -- "$file_out")
printf "file out $file_out\\n"
if ! [ -d ../exe ]; then
  printf "directory ../exe/ not found\\n"
  printf "Create directory ../exe/\\n"
  mkdir ../exe
fi
printf "compile file ${file_in} to file ../exe/${file_out%%.*}.out\\n"

g++  "$file_in" -o ../exe/"${file_out%%.*}".out
