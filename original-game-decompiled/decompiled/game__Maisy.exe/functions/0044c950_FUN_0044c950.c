
/* ==== FUN_0044c950 @ 0044c950 ==== 
 * signature: undefined __stdcall FUN_0044c950(void)
 * body: 0044c950-0044cbe2
 */

void FUN_0044c950(void)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  void *this;
  HPALETTE wParam;
  LRESULT LVar6;
  short sVar7;
  undefined4 *puVar8;
  undefined4 *unaff_FS_OFFSET;
  LPARAM LVar9;
  AFX_EXCEPTION_LINK local_78 [80];
  int local_28;
  int *local_24;
  char local_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0044cc0a;
  *unaff_FS_OFFSET = &local_10;
  uStack_14 = SUB41(&stack0xffffff7c,0);
  uStack_13 = (undefined1)((uint)&stack0xffffff7c >> 8);
  uStack_12 = (undefined1)((uint)&stack0xffffff7c >> 0x10);
  uStack_11 = (undefined1)((uint)&stack0xffffff7c >> 0x18);
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_78);
  local_8 = 1;
  local_28 = *local_24;
  pcVar1 = *(code **)(local_28 + 0x210);
  piVar3 = (int *)(*pcVar1)();
  (**(code **)(*piVar3 + 0x128))();
  puVar8 = (undefined4 *)((int)local_24 + 0x7e);
  SendMessageA((HWND)*puVar8,0x477,0,0x4dbb10);
  piVar3 = (int *)(*pcVar1)();
  cVar2 = (**(code **)(*piVar3 + 0x130))();
  if (cVar2 != '\0') {
    FUN_0044c280(local_24);
    cVar2 = FUN_0044c5d0((int)local_24);
    if (cVar2 != '\0') {
      pcVar4 = FUN_004145e0;
      if (DAT_004d99c0 != (code *)0x0) {
        pcVar4 = DAT_004d99c0;
      }
      FUN_0044c570(local_24,(int)pcVar4);
    }
  }
  LVar9 = 0;
  cVar2 = '\x01';
  iVar5 = FUN_0041ed90((int)local_24);
  this = (void *)FUN_004084c0(iVar5);
  wParam = FUN_0047bd40(this,cVar2);
  SendMessageA((HWND)*puVar8,0x47f,(WPARAM)wParam,LVar9);
  FUN_0044bcb0(local_24,0x80,'\x01');
  FUN_0044bcb0(local_24,0x40,'\x01');
  FUN_0044bcb0(local_24,0x200,'\0');
  iVar5 = (*pcVar1)();
  FUN_0044bcb0(local_24,0x100,(*(uint *)(iVar5 + 0x26) & 0x40000000) == 0);
  iVar5 = (*pcVar1)();
  FUN_0044bcb0(local_24,2,'\x01' - ((*(uint *)(iVar5 + 0x26) & 0x1000000) == 0));
  FUN_0044c130(local_24);
  piVar3 = (int *)(*pcVar1)();
  local_17 = (**(code **)(*piVar3 + 0x46c))();
  piVar3 = (int *)(*pcVar1)();
  uStack_16 = (**(code **)(*piVar3 + 0x474))();
  piVar3 = (int *)(*pcVar1)();
  uStack_15 = (**(code **)(*piVar3 + 0x49c))();
  FUN_0044c810(local_24,local_17);
  FUN_0044c840();
  iVar5 = (*pcVar1)();
  sVar7 = *(short *)(iVar5 + 0x15e);
  if (sVar7 < 0x65) {
    if (sVar7 < 1) {
      sVar7 = 0;
    }
  }
  else {
    sVar7 = 100;
  }
  piVar3 = (int *)(*pcVar1)();
  cVar2 = (**(code **)(*piVar3 + 0x494))();
  LVar9 = 0;
  if (cVar2 == '\0') {
    LVar9 = (LPARAM)(short)(sVar7 * 10);
  }
  FUN_0044c750(local_24,LVar9);
  FUN_0044c850();
  LVar6 = FUN_0044c870((int)local_24);
  FUN_0044c790(local_24,0,LVar6);
  iVar5 = (**(code **)(local_28 + 0x244))();
  local_24[0x26] = *(int *)(iVar5 + 0x15e);
  FUN_0044bc60((int)local_24);
  if (local_24[0x21] != 0) {
    cVar2 = FUN_0044bd00(local_24,2);
    if (cVar2 != '\0') {
      FUN_0044bc00(local_24);
      SendMessageA((HWND)*puVar8,0x80e,0,1);
    }
  }
  piVar3 = (int *)FUN_0041ed90((int)local_24);
  (**(code **)(*piVar3 + 0x78))(0xc,local_24,1);
  FUN_004749f0();
  local_8 = 0xffffffff;
  FUN_0044cc14();
  *unaff_FS_OFFSET = local_10;
  return;
}


