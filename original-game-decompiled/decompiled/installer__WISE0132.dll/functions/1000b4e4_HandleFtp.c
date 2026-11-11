
/* ==== HandleFtp @ 1000b4e4 ==== 
 * signature: undefined __stdcall HandleFtp(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * body: 1000b4e4-1000b4fe
 */

void HandleFtp(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
                    /* 0xb4e4  7  HandleFtp */
  if (DAT_10023f14 != (code *)0x0) {
    (*DAT_10023f14)(param_1,param_2,param_3);
  }
  return;
}


