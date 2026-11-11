
/* ==== FUN_004010c4 @ 004010c4 ==== 
 * signature: int __cdecl FUN_004010c4(uint * param_1)
 * body: 004010c4-00401168
 */

int __cdecl FUN_004010c4(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_004043ac;
  local_c = DAT_0040439c;
  FUN_00401d3d(1,&local_8,&local_c);
  *param_1 = local_8 & 1;
  FUN_00401d89(1,&local_8,(int *)&local_c);
  FUN_00401d3d(2,&local_8,&local_c);
  uVar2 = local_8 & 3;
  FUN_00401d89(2,&local_8,(int *)&local_c);
  DAT_004043ac = local_8;
  DAT_0040439c = local_c;
  if (uVar2 == 0) {
    iVar1 = FUN_004017c0();
  }
  else if (uVar2 == 1) {
    iVar1 = FUN_004018cc();
  }
  else if (uVar2 == 2) {
    iVar1 = FUN_004019c0();
  }
  else {
    iVar1 = -2;
  }
  return iVar1;
}


