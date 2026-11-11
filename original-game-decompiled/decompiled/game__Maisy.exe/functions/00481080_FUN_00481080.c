
/* ==== FUN_00481080 @ 00481080 ==== 
 * signature: undefined4 __fastcall FUN_00481080(int param_1)
 * body: 00481080-0048109d
 */

undefined4 __fastcall FUN_00481080(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x168);
  uVar2 = (undefined2)((uint)iVar1 >> 0x10);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x26) != 0)) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x10;
    return CONCAT22(uVar2,2);
  }
  return CONCAT22(uVar2,1);
}


