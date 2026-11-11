
/* ==== FUN_00450d40 @ 00450d40 ==== 
 * signature: undefined __cdecl FUN_00450d40(int * param_1, uint param_2)
 * body: 00450d40-00450d9e
 */

void __cdecl FUN_00450d40(int *param_1,uint param_2)

{
  byte bVar1;
  uint local_14;
  undefined2 local_10;
  uint local_e;
  uint local_a;
  
  bVar1 = (byte)param_2 & 1;
  local_a = FUN_0044ae60(bVar1,0xe);
  local_10 = FUN_0044aea0(bVar1,0);
  local_e = FUN_0044ae60(bVar1,param_2);
  local_14 = FUN_0044ae60(bVar1,0xfffffffe);
  (**(code **)(*param_1 + 0x158))(&local_14,0xe);
  return;
}


