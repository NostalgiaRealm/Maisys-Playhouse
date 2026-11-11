
/* ==== FUN_0045f770 @ 0045f770 ==== 
 * signature: undefined __fastcall FUN_0045f770(CFrameWnd * param_1)
 * body: 0045f770-0045f80b
 */

void __fastcall FUN_0045f770(CFrameWnd *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined1 *puVar3;
  int *piVar4;
  short sVar5;
  
  if (DAT_004dc564 != (void *)0x0) {
    iVar1 = FUN_0046e950(DAT_004dc564,1);
    if (iVar1 != 0) {
      iVar1 = FUN_0046e950(DAT_004dc564,1);
      if (*(char *)(iVar1 + 0x86) != '\0') {
        CFrameWnd::OnClose(param_1);
        return;
      }
      sVar5 = 1;
      pvVar2 = (void *)FUN_0046e950(DAT_004dc564,1);
      iVar1 = FUN_0045a000(pvVar2,sVar5);
      if (iVar1 != 0) {
        puVar3 = (undefined1 *)FUN_004a5fed(10);
        *puVar3 = 0x71;
        *(undefined4 *)(puVar3 + 2) = 0x100;
        sVar5 = 1;
        pvVar2 = (void *)FUN_0046e950(DAT_004dc564,1);
        piVar4 = (int *)FUN_0045a000(pvVar2,sVar5);
        (**(code **)(*piVar4 + 0x120))(puVar3);
        FUN_004a602d(puVar3);
      }
    }
  }
  return;
}


