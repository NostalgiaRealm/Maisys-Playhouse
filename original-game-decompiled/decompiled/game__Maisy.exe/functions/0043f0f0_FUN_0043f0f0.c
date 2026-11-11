
/* ==== FUN_0043f0f0 @ 0043f0f0 ==== 
 * signature: uint __cdecl FUN_0043f0f0(int param_1)
 * body: 0043f0f0-0043f18e
 */

uint __cdecl FUN_0043f0f0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  UINT UVar5;
  uint uVar6;
  undefined3 extraout_var;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_108;
  undefined4 local_104 [63];
  UINT local_8;
  
  bVar4 = false;
  local_8 = 0;
  UVar5 = 0;
  puVar8 = local_104;
  for (iVar7 = 0x3f; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_108._0_1_ = (byte)DAT_004db584;
  uVar2 = DAT_004db584;
  bVar1 = (byte)local_108;
  do {
    local_108 = uVar2;
    if ('z' < (char)bVar1) {
LAB_0043f185:
      return CONCAT31((int3)(UVar5 >> 8),(undefined1)local_8);
    }
    UVar5 = GetDriveTypeA((LPCSTR)&local_108);
    if (UVar5 == 5) {
      bVar4 = true;
    }
    if (bVar4) {
      cVar3 = FUN_0043eea0();
      if (cVar3 != '\0') {
        uVar6 = FUN_0043ef00(param_1,(char *)&local_108);
        return uVar6;
      }
      bVar4 = FUN_0043f020(param_1,(byte *)&local_108);
      UVar5 = CONCAT31(extraout_var,bVar4);
      local_8 = UVar5;
      goto LAB_0043f185;
    }
    bVar1 = (byte)local_108 + 1;
    local_108 = CONCAT31(local_108._1_3_,bVar1);
    uVar2 = local_108;
  } while( true );
}


