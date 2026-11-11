
/* ==== FUN_00470c80 @ 00470c80 ==== 
 * signature: int __fastcall FUN_00470c80(int param_1)
 * body: 00470c80-00470c95
 */

int __fastcall FUN_00470c80(int param_1)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x96);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x26) != 0)) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


