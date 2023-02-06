# Hosting a Webserver Using a Raspberry Pi

###### Source :- https://www.section.io/engineering-education/hosting-a-webserver-using-a-raspberry-pi/

### Step 1 :

```
sudo apt update

sudo apt install apache2 –y

sudo apt-get install php7.0 php7.0-mcrypt
```

### Step 2 :

Remember to restart Apache.

```
/etc/init.d/apache2 restart
```

### Step 3 :

```
sudo apt-get update

sudo apt install MySQL-server
```

### Step 4 :

if you don't know password of user

```
sudo passwd root
```

and than change the Password of user

### Step 5 :

Repeat Step 3 Again if this does not work

```
sudo mysql_secure_installation
```

### Step 6 :
