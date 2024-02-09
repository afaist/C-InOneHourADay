file_in=$1
file_out="${file_in##*/}"
printf "compile file ${file_out} to file ../exe/${file_out%%.*}.out\\n"

g++  $file_in -o ../exe/"${file_out%%.*}".out
