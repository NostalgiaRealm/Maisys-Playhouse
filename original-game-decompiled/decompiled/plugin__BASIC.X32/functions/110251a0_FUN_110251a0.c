
/* ==== FUN_110251a0 @ 110251a0 ==== 
 * signature: undefined __cdecl FUN_110251a0(undefined4 param_1, int param_2, short * param_3)
 * body: 110251a0-11025220
 */

void __cdecl FUN_110251a0(undefined4 param_1,int param_2,short *param_3)

{
  short sVar1;
  undefined1 local_1;
  
  sVar1 = *param_3;
  if (sVar1 == 0x1a) {
    *(char *)(param_2 + 0xc) = (char)param_3[1];
    return;
  }
  if (sVar1 == 1) {
    *(char *)(param_2 + 0xc) = '\x01' - (*(int *)(param_3 + 1) == 0);
    return;
  }
  if (sVar1 == 0x15) {
    *(bool *)(param_2 + 0xc) =
         (*(uint *)(param_3 + 3) & 0x7fffffff) != 0 || *(int *)(param_3 + 1) != 0;
    return;
  }
  if (sVar1 == 0xd) {
    FUN_11025160(param_1,*(char **)(param_3 + 2),&local_1);
    *(undefined1 *)(param_2 + 0xc) = local_1;
  }
  return;
}


