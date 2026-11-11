
/* ==== FUN_11027c20 @ 11027c20 ==== 
 * signature: int __cdecl FUN_11027c20(undefined4 param_1, int param_2)
 * body: 11027c20-11027c48
 */

int __cdecl FUN_11027c20(undefined4 param_1,int param_2)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((((iVar1 != 0x12d) && (iVar1 != 0x12e)) && (iVar1 != 0x12f)) && (iVar1 != 0x130)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


