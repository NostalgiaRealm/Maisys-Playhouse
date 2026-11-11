
/* ==== FUN_1000fa80 @ 1000fa80 ==== 
 * signature: int __stdcall FUN_1000fa80(uint param_1, char * param_2, uint param_3)
 * body: 1000fa80-1000fa80
 */

int FUN_1000fa80(uint param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  int *piVar6;
  DWORD unaff_EDI;
  char *pcVar7;
  char *in_stack_00000018;
  DWORD DStack_40c;
  uint uStack_404;
  DWORD DStack_400;
  int iStack_3fc;
  int *piStack_3f8;
  char acStack_3f4 [1012];
  
  DStack_40c = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = &DAT_10018400 + ((int)param_1 >> 5);
  piVar6 = (int *)((param_1 & 0x1f) * 0x24);
  if ((*(byte *)((int)piVar6 + *piVar1 + 4) & 0x20) != 0) {
    FUN_10010090(param_1,0,2,unaff_EDI);
  }
  if ((*(byte *)((undefined4 *)(*piVar1 + (int)piVar6) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar1 + (int)piVar6),in_stack_00000018,param_3,&DStack_400,
                      (LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      uStack_404 = GetLastError();
    }
    else {
      DStack_40c = DStack_400;
      uStack_404 = 0;
    }
  }
  else {
    uStack_404 = 0;
    pcVar7 = in_stack_00000018;
    if (param_3 != 0) {
      do {
        pcVar3 = acStack_3f4;
        do {
          if (param_3 <= (uint)((int)pcVar7 - (int)in_stack_00000018)) break;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar2 == '\n') {
            *pcVar3 = '\r';
            iStack_3fc = iStack_3fc + 1;
            pcVar3 = pcVar3 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
        } while ((int)pcVar3 - (int)acStack_3f4 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)((int)piVar1 + *piStack_3f8),acStack_3f4,
                          (int)pcVar3 - (int)acStack_3f4,&DStack_400,(LPOVERLAPPED)0x0);
        piVar6 = piVar1;
        if (BVar4 == 0) {
          uStack_404 = GetLastError();
          break;
        }
        DStack_40c = DStack_40c + DStack_400;
        if (((int)DStack_400 < (int)pcVar3 - (int)acStack_3f4) ||
           (param_3 <= (uint)((int)pcVar7 - (int)in_stack_00000018))) break;
      } while( true );
    }
  }
  if (DStack_40c != 0) {
    return DStack_40c - iStack_3fc;
  }
  if (uStack_404 == 0) {
    if (((*(byte *)((int)piVar6 + *piStack_3f8 + 4) & 0x40) != 0) && (*in_stack_00000018 == '\x1a'))
    {
      return 0;
    }
    pDVar5 = FUN_1000f540();
    *pDVar5 = 0x1c;
    pDVar5 = FUN_1000f550();
    *pDVar5 = 0;
    return -1;
  }
  if (uStack_404 != 5) {
    FUN_1000f4c0(uStack_404);
    return -1;
  }
  pDVar5 = FUN_1000f540();
  *pDVar5 = 9;
  pDVar5 = FUN_1000f550();
  *pDVar5 = 5;
  return -1;
}


