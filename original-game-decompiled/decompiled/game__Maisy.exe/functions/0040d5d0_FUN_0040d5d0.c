
/* ==== FUN_0040d5d0 @ 0040d5d0 ==== 
 * signature: int __fastcall FUN_0040d5d0(int param_1)
 * body: 0040d5d0-0040d5ea
 */

int __fastcall FUN_0040d5d0(int param_1)

{
  int iVar1;
  
  iVar1 = 10;
  if (*(int *)(param_1 + 0xa8) != 0) {
    iVar1 = *(short *)(*(int *)(param_1 + 0xa8) + 0xc) * 4 + 0x18;
  }
  return iVar1;
}


