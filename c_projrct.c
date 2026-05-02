Deploy a project from GitHub to EC2. 
Steps: login to aws console -> EC2 -> Launch an instance -> select 
ubuntu -> create key pair -> open bitvise -> add key.pem in client key 
manager -> login -> open terminal.


sudo apt-get update
sudo apt-get upgrade
sudo apt-get install nginx
curl -sL https://deb.nodesource.com/setup_16.x | sudo -E bash -
sudo apt-get install nodejs
git clone https://github.com/gomixsrishti29/beeep/repository2.git
cd repository2
npm install
node index.js


Go to Security settings.
Click on Edit rules.
Click on Add rule.
Add a new rule with:
Type: IPv4
Port: 4000
Click on Save.
Refresh your browser using your IP address with port 4000.

ASSIGNMENT NO: 10 
Deploy a project from GitHub to EC2 by creating a new security group and user data. 
STEP1: Create and launch an instance-> delete all previous security groups except default one
Add security groups and security groups are created.
inbound rules
http https ssh custom tcp
Create a Security Group.
Create a Key Pair.
Launch an Instance using the created security group and key pair.
In the User Data (bin/bash) section, add:
Bash
#!/bin/bash
apt-get update
apt-get install -y nginx.......
Launch the instance.
Copy the Public IP address.
Open the IP in a browser ? it should show “Welcome to Nginx”.
Configure your application to run on port 4000.
Open Public IP:4000 in the browser ? it should display “Hello World”.

Build scaling plans in AWS that balance the load on different EC2 instances. 
STEP 1: GO TO EC2 and click on launch templates ->launch templates and give the name and version 
type -> Give information and launch. 
Steps to Perform the Task:
Launch a template with the name Auto Scaling Guidance Checkmark.
Select a Key Pair.
Choose an existing security group.
Add the bin/bash APT update script in user data.
Click on Launch Instance.

Create Auto Scaling Group:
Create an Auto Scaling Group.
Select all availability zones and subnets.
Choose Balanced Best Effort.
Attach it to a new Load Balancer.

Configure Load Balancer:
Select Application Load Balancer.
Set it as Internet Facing.
Set Port = 80.
Create a new Target Group.
Give a Target Group name (same as Auto Scaling Group name).

Scaling Policy Configuration:
Select Target Tracking Scaling Policy.
Set values:
Target: 20
Instance warm-up: 180 seconds
Click Next ? Next ? Create Auto Scaling Group.

ccess Instances:
Open the created Auto Scaling Group.
Select both instances.
Copy Public IPv4 Address of first instance.
Add :4000 and open in browser.
Repeat for the second instance.

Instance Termination Test:
Go to EC2 Dashboard.
Select one running instance.
Click Instance State ? Terminate.
Confirm termination.

Select any running instance.
Copy Public IPv4 Address.
Open Bitvise SSH Client.
Connect to the instance.

nano file1.sh

#!/bin/bash
while true
do
echo "Loop running"
done
Press Ctrl + X, then save.
chmod +x file1.sh
./file1.sh

Go back and select instances.
Click Monitor and troubleshoot ? Instance status.
Observe the results.
Logout from Bitvise SSH Client.
Delete the Auto Scaling Group.
Delete the Load Balancer.
Delete the Target Group.
Delete all remaining resources.
