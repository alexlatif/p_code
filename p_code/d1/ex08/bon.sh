#!/bin/sh

ldapsearch -LLL -Q '(&(sn=*bon*))' sn | grep ^sn | wc -l | bc