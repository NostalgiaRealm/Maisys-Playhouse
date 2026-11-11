
/* ==== FUN_0041ce80 @ 0041ce80 ==== 
 * signature: byte __fastcall FUN_0041ce80(int * param_1)
 * body: 0041ce80-0041cf57
 */

byte __fastcall FUN_0041ce80(int *param_1)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_24 [15];
  char local_15;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0041cf68;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd0;
  if (*(char *)((int)param_1 + 0xf2) == '\0') {
    local_15 = 0;
    *(undefined4 *)((int)param_1 + 0x15a) = 0;
    *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 0x10;
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_24);
    local_8 = 1;
    iVar1 = *param_1;
    cVar2 = (**(code **)(iVar1 + 0x15c))(0xe);
    if (cVar2 != '\0') {
      pvVar4 = FUN_0043f770(param_1[0x44]);
      param_1[0x43] = (int)pvVar4;
      if (pvVar4 == (HGLOBAL)0x0) {
        FUN_004a3538();
      }
      (**(code **)(iVar1 + 0xc4))(0,(short)param_1[9]);
      pvVar5 = GlobalLock((HGLOBAL)param_1[0x43]);
      *(LPVOID *)((int)param_1 + 0x156) = pvVar5;
    }
    local_15 = '\x01';
    local_8 = 0xffffffff;
    FUN_0041cf72();
    bVar3 = -(local_15 == '\0') & 2;
  }
  else {
    *(byte *)((int)param_1 + 0x15e) = *(byte *)((int)param_1 + 0x15e) | 2;
    bVar3 = 1;
  }
  *unaff_FS_OFFSET = local_10;
  return bVar3;
}


