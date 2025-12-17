// Adds control, shift, and tab/enter to the unused outer columns in the tap layer.
// Used for playing games.
#if defined(MIRYOKU_KEYBOARD_CORNE)
#define MIRYOKU_LAYERMAPPING_TAP( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB     K00  K01  K02  K03  K04       K05  K06  K07  K08  K09  &kp RET \
&kp LSHIFT  K10  K11  K12  K13  K14       K15  K16  K17  K18  K19  &kp RSHIFT \
&kp LCTRL   K20  K21  K22  K23  K24       K25  K26  K27  K28  K29  &kp RCTRL \
                      K32  K33  K34       K35  K36  K37
#endif
