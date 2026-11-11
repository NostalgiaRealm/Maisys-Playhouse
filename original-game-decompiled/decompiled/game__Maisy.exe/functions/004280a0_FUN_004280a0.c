
/* ==== FUN_004280a0 @ 004280a0 ==== 
 * signature: uint __fastcall FUN_004280a0(int * param_1)
 * body: 004280a0-0042818c
 */

uint __fastcall FUN_004280a0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar5;
  uint uVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_24 [15];
  char local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042819d;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd0;
  uVar5 = (undefined2)((uint)local_10 >> 0x10);
  if (*(char *)((int)param_1 + 0xf9) == '\0') {
    local_15 = '\0';
    if ((param_1[0x2e] == 0) && (0 < (short)param_1[0x30])) {
      uVar3 = CONCAT22(uVar5,2);
    }
    else {
      iVar1 = *param_1;
      (**(code **)(iVar1 + 0x114))();
      cVar2 = (**(code **)(iVar1 + 0xec))();
      if ((cVar2 != '\0') && (param_1[0x2f] != 0)) {
        AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_24);
        local_8 = 1;
        *(undefined4 *)((int)param_1 + 0xf2) = 0;
        hMem = FUN_0043f770(param_1[0x2f]);
        param_1[0x2e] = (int)hMem;
        pvVar4 = GlobalLock(hMem);
        *(LPVOID *)((int)param_1 + 0xee) = pvVar4;
        *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 0x10;
        (**(code **)(iVar1 + 0xc4))(0,(short)param_1[9]);
        local_15 = '\x01';
        local_8 = 0xffffffff;
        FUN_004281a7();
      }
      uVar3 = -(uint)(local_15 == '\0') & 0xffff0002;
    }
  }
  else {
    uVar3 = CONCAT22(uVar5,1);
  }
  *unaff_FS_OFFSET = local_10;
  return uVar3;
}


