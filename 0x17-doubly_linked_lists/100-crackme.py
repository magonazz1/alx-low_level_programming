#!/usr/bin/python3
import subprocess

# Define the command to run the crackme4 program
command = "./crackme4"

# Read the password from the "100-password" file
with open("100-password", "r") as password_file:
    password = password_file.read().strip()

# Run the crackme4 program and provide the password as input
process = subprocess.Popen(command, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
stdout, stderr = process.communicate(input=password)

# Check the output to see if it contains "OK" (password is correct)
if "OK" in stdout:
    print("Password is correct")
else:
    print("Password is incorrect")

# Print the program's output
print("Program output:")
print(stdout)

# Print any errors or messages from the program
print("Program errors:")
print(stderr)
