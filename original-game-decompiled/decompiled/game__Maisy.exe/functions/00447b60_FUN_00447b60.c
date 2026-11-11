
/* ==== FUN_00447b60 @ 00447b60 ==== 
 * signature: undefined4 __fastcall FUN_00447b60(int * param_1)
 * body: 00447b60-00447bfa
 */

undefined4 __fastcall FUN_00447b60(int *param_1)

{
  code *pcVar1;
  undefined4 in_EAX;
  undefined2 uVar5;
  int iVar2;
  void *this;
  HGDIOBJ pvVar3;
  BOOL BVar4;
  HGDIOBJ *ppvVar6;
  tagTEXTMETRICA local_50;
  HGDIOBJ local_18 [5];
  
  uVar5 = (undefined2)((uint)in_EAX >> 0x10);
  if ((*(short *)((int)param_1 + 0x15e) == 0) && (DAT_004da398 != (HDC)0x0)) {
    local_18[0] = (HGDIOBJ)0x0;
    pcVar1 = *(code **)(*param_1 + 0x41c);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      ppvVar6 = local_18;
      this = (void *)(*pcVar1)();
      FUN_004390e0(this,ppvVar6);
    }
    if (local_18[0] == (HGDIOBJ)0x0) {
      local_18[0] = DAT_004dae34;
    }
    pvVar3 = SelectObject(DAT_004da398,local_18[0]);
    BVar4 = GetTextMetricsA(DAT_004da398,&local_50);
    if (BVar4 != 0) {
      *(undefined2 *)((int)param_1 + 0x15e) = (undefined2)local_50.tmHeight;
    }
    pvVar3 = SelectObject(DAT_004da398,pvVar3);
    uVar5 = (short)((uint)pvVar3 >> 0x10);
  }
  return CONCAT22(uVar5,*(undefined2 *)((int)param_1 + 0x15e));
}


