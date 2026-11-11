
/* ==== FUN_00441af0 @ 00441af0 ==== 
 * signature: undefined4 __fastcall FUN_00441af0(int param_1)
 * body: 00441af0-00441b34
 */

undefined4 __fastcall FUN_00441af0(int param_1)

{
  uint3 uVar1;
  undefined2 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_10;
  
  if (*(int *)(param_1 + 0x7e) == 0) {
    return 1;
  }
  FUN_0048ceed();
  uVar1 = (uint3)((uint)local_18 >> 8);
  if ((local_1c < local_14) && ((short)local_18 < local_10)) {
    return (uint)uVar1 << 8;
  }
  return CONCAT31(uVar1,1);
}


