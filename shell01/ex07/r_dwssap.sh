cat /etc/passwd | grep -v '^#' | cut -f1 -d ":" | sed -n 'n;p' | rev | sort -r | tr '\n' ',' | sed 's/.$/./'
