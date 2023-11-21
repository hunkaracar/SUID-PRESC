# SUID-PRESC

- Post Exploiting 

# SUID-PRESC Post Exploiting

- This document contains basic information about operations conducted through SUID.

## What is SUID?

- Set User ID (SUID) is a feature that allows a file to be executed with the permissions of the file owner instead of the user who runs it. It is used, particularly by system administrators or other users with special privileges, to securely perform specific tasks.

## Finding SUID Files

- To find SUID files, you can use the following command:

```bash
find / -type f -perm /4000 -ls 2>/dev/null
find / -perm -u=s -type -f 2>/dev/null

