USER=

.PHONY: get-fullname

get-fullname:
        @grep "^${USER}:" /etc/passwd | cut -d: -f5 | cut -d, -f1