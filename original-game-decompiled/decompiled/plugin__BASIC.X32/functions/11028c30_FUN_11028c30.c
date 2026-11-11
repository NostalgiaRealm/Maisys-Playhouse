
/* ==== FUN_11028c30 @ 11028c30 ==== 
 * signature: undefined __cdecl FUN_11028c30(undefined4 param_1, int param_2, short * param_3)
 * body: 11028c30-11028c83
 */

void __cdecl FUN_11028c30(undefined4 param_1,int param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = *param_3;
  if (sVar1 == 3) {
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x18);
    return;
  }
  if (sVar1 != 0x17) {
    if (sVar1 != 0x19) {
      *param_3 = 0;
      return;
    }
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x18);
    return;
  }
  if (*(char *)(param_2 + 0x1c) != '\0') {
    *param_3 = 3;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x18);
    return;
  }
  *param_3 = 0x19;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 0x18);
  return;
}


