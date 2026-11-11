
/* ==== FUN_110041d0 @ 110041d0 ==== 
 * signature: int __cdecl FUN_110041d0(undefined4 param_1, int param_2)
 * body: 110041d0-110041f8
 */

int __cdecl FUN_110041d0(undefined4 param_1,int param_2)

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


