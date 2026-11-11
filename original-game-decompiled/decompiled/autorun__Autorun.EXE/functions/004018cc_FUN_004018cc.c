
/* ==== FUN_004018cc @ 004018cc ==== 
 * signature: int __stdcall FUN_004018cc(void)
 * body: 004018cc-004019bf
 */

int FUN_004018cc(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint local_494 [144];
  undefined4 local_254 [112];
  undefined4 local_94 [24];
  undefined4 local_34 [8];
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  puVar3 = local_494;
  for (iVar1 = 0x90; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 8;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_254;
  for (iVar1 = 0x70; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 9;
    puVar2 = puVar2 + 1;
  }
  puVar2 = local_94;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 7;
    puVar2 = puVar2 + 1;
  }
  local_c = 7;
  puVar2 = local_34;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 8;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_00401169(0x120,0x101,local_494,0x404058,0x404098,&local_8,&local_c);
  if (iVar1 == 0) {
    puVar3 = local_494;
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = 5;
      puVar3 = puVar3 + 1;
    }
    local_14 = 5;
    iVar1 = FUN_00401169(0x1e,0,local_494,0x4040d8,0x404118,&local_10,&local_14);
    if (iVar1 < -1) {
      FUN_00401520(local_8);
    }
    else {
      iVar1 = FUN_00401539(local_8,local_c,local_10,local_14);
      if (iVar1 == 0) {
        FUN_00401520(local_8);
        FUN_00401520(local_10);
        iVar1 = 0;
      }
      else {
        iVar1 = -1;
      }
    }
  }
  return iVar1;
}


