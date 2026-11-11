
/* ==== FUN_00471270 @ 00471270 ==== 
 * signature: undefined4 __cdecl FUN_00471270(undefined4 param_1, int param_2)
 * body: 00471270-004712c3
 */

undefined4 __cdecl FUN_00471270(undefined4 param_1,int param_2)

{
  int iVar1;
  void *local_10;
  short local_c [4];
  
  local_c[0] = -10000;
  local_c[1] = 0xd8f0;
  local_c[2] = 10000;
  local_c[3] = 10000;
  iVar1 = FUN_00471110(param_2,(int *)&local_10);
  if (iVar1 == 0x10000) {
    return 0x10000;
  }
  FUN_004087c0(local_10,local_c,'\x01');
  return 0;
}


