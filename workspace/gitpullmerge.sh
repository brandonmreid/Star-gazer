#!/bin/bash

git pull --no-edit
git checkout master
git merge master -m "automerging"