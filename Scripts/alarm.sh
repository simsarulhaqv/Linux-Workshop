#!/bin/bash

echo "Sleeping for $1 minutes"

sleep $(expr $1 \* 60)

echo -e "\a" # Alarm

echo "Time up"
