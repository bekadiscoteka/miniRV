#!/bin/bash
# Fetch abstract-machine, am-kernels and fceux-am (git submodules in third_party/)
set -e
cd "$(dirname "$0")/.."
git submodule update --init --recursive
echo "export AM_HOME=$(pwd)/third_party/abstract-machine"
