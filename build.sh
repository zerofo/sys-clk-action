#!/bin/sh
PACKAGE_FOLDER=$1
BRANCH=$2
TITLE_ID=00FF0000636C6BFF

mkdir -p $PACKAGE_FOLDER/$TITLE_ID
make -j12
mv out/sys-clk.nsp $PACKAGE_FOLDER/$TITLE_ID/exefs.nsp
