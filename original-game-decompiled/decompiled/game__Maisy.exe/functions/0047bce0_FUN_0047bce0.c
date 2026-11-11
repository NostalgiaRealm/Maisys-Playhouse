
/* ==== FUN_0047bce0 @ 0047bce0 ==== 
 * signature: undefined __stdcall FUN_0047bce0(char * param_1)
 * body: 0047bce0-0047bd0c
 */

void FUN_0047bce0(char *param_1)

{
  if (*param_1 != '\0') {
    if (param_1[1] == '\0') {
      FUN_0043f7a0(*(HGLOBAL *)(param_1 + 0x1a));
    }
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    *param_1 = '\0';
  }
  return;
}


