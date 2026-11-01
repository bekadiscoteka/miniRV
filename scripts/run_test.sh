#!/bin/bash
# Usage: scripts/run_test.sh [image.bin]
set -e
cd "$(dirname "$0")/.."
make sim IMG="${1:-programs/bin/dummy-minirv-npc.bin}"
