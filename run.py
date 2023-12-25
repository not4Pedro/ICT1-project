import os 

cmd = "gcc -ggdb -fno-stack-protector -z execstack app.c -o app && ./app 25"

os.system(cmd)