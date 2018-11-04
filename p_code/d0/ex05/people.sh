#!/bin/sh

ldapsearch -xLLL '(&(uid=z*))' cn | grep -i ^cn | cut -d ':' -f 2 | sort -fdr