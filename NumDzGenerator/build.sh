#!/bin/bash

# coloring 
white='\e[1;37m'
red='\e[1;31m'
yellow='\e[1;33m'

# Copying Files To Sys Dir

echo -e $yellow " \n \n \t \t \t NumDzGenerator V1.0 Builder \n \n "

#Check root if exist
[[ `id -u` -eq 0 ]] > /dev/null 2>&1 || { echo -e $red "[-] No Root Checked ,Please U Need To Be root "; exit 1; }


echo -e  $white " [*] Building Sources..."
g++ CORE/main.cpp -o numgen

echo -e $white " [*] Copying Files To Dir... "
mkdir -p /usr/share/NumDzGenerator
cp -r CORE /usr/share/NumDzGenerator/

echo -e $white " [*] Creating a Shortrun command... \n"

cp -r numgen /usr/share/NumDzGenerator/
echo "#!/bin/bash" >> /usr/bin/numgen
echo "cd /usr/share/NumDzGenerator" >> /usr/bin/numgen
echo "exec ./numgen" >> /usr/bin/numgen
chmod 777 /usr/bin/numgen


echo -e $red " [+] Build Tool succeed"
echo -e $red " [+] Copying Data succeed "
echo -e $red " [+] Creating ShortRun command succeed"


echo -e $white "\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
echo -e $yellow " [+] Install Well Done! "
echo -e $red " [!] Type [numgen] to RUN." 
echo -e $white "\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
