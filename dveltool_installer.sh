#!/bin/bash

MYDIR=/tmp
FLENAME=installer.sh

if [ -f "$MYDIR/$FLENAME" ]; then
	rm $FLENAME
fi

wget -P $MYDIR https://raw.githubusercontent.com/dveltool/toolchain/master/installer/installer.sh
chmod +x $MYDIR/$FLENAME
sh $MYDIR/$FLENAME
rm $MYDIR/$FLENAME
