#!/bin/sh

ldapwhoami -h ldap-master.42.US.org -Q | cut -d ':' -f 2
