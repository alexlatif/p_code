#!/bin/sh

find . | grep -v './[.]' | wc -l | bc