#!/bin/bash

echo "Sleeping for $1 minutes"

sleep $(expr $1 \* 60)

cvlc --play-and-exit Beep-sound.ogg # Alarm

echo "Time up"
