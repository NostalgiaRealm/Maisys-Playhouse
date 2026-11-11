
/* ==== FUN_1100a430 @ 1100a430 ==== 
 * signature: int __cdecl FUN_1100a430(undefined4 param_1, int param_2)
 * body: 1100a430-1100a474
 */

int __cdecl FUN_1100a430(undefined4 param_1,int param_2)

{
  int iVar1;
  uint3 uVar2;
  
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (((((iVar1 != 0x12d) && (iVar1 != 0x12e)) && ((iVar1 < 0x131 || (0x133 < iVar1)))) &&
      (((iVar1 != 0x135 && (iVar1 != 0x136)) && (iVar1 != 0x12f)))) && (iVar1 != 0x130)) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


