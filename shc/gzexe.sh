#!/bin/sh -
# compressed by gzexe
lines=19
prog=`/usr/bin/basename "$0"`
tmp=`/usr/bin/mktemp -d /tmp/gzexeXXXXXXXXXX` || {
/bin/echo "$prog: cannot create tmp dir"; exit 1
}
trap '/bin/rm -rf "$tmp"' 0
if /usr/bin/tail +$lines "$0" |
    /usr/bin/gzip -dc > "$tmp/$prog" 2> /dev/null; then
/bin/chmod u+x "$tmp/$prog"
"$tmp/$prog" ${1+"$@"}
ret=$?
else
/bin/echo "$prog: cannot decompress $0"
ret=1
fi
exit $ret
���O\ gzexe.sh m�Ko�@���F\!��k9s��y��R�V��J��<�<$B��I��	��֨��%�ɇagw}�W`åb+��~��Ǐ����bQ3���䎺%��
�8���:%U�v��)B��s�������;��fEއQ��C1�R��	jBo^�&*��Pw���E�f�	%7R��A�ߔ�b�rί��y�R��|�r�/�W@��z{O��C��%�6���C�KFG�x�C�]�V��3	Q��u�C5�c��|g���/Q��*��Yo�[�;��W�`��O��A�G�I��A\��T�]C��J�;� �����>�"�i��	�����"���x����Ho�">���k�kZ,�����t$�[ZX�E3�O�ZB��F��^���>{��*�\b�<�g�B��2��M��p(�`�_p���}�)PRA���?Ym��r[�o0��:<  