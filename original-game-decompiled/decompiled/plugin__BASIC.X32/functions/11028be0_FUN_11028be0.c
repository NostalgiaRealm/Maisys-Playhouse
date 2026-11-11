
/* ==== FUN_11028be0 @ 11028be0 ==== 
 * signature: undefined __cdecl FUN_11028be0(undefined4 param_1, int param_2, short * param_3)
 * body: 11028be0-11028c20
 */

void __cdecl FUN_11028be0(undefined4 param_1,int param_2,short *param_3)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = *param_3;
  if (sVar1 == 0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined1 *)(param_2 + 0x1c) = 0;
    return;
  }
  if (sVar1 != 3) {
    if (sVar1 != 0x19) {
      return;
    }
    uVar2 = *(undefined4 *)(param_3 + 1);
    *(undefined1 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    return;
  }
  uVar2 = *(undefined4 *)(param_3 + 1);
  *(undefined1 *)(param_2 + 0x1c) = 1;
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  return;
}


