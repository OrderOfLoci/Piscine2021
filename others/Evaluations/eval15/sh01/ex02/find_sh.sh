find . -type f -name "*.sh" -execdir echo {} ';' | sed -n 's/\.sh$//p'
