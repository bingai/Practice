#!/bin/bash

for f in condor_test/*
do
    condor_submit "$f"
    #echo "condor_submit $f"
done
