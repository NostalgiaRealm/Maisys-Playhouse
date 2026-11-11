
/* ==== FUN_1000fa86 @ 1000fa86 ==== 
 * signature: undefined FUN_1000fa86(void)
 * body: 1000fa86-1000fc88
 */

int FUN_1000fa86(void)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  int *piVar6;
  DWORD unaff_EDI;
  char *pcVar7;
  int *piStack00000004;
  DWORD DStack00000010;
  int *piStack00000014;
  DWORD DStack00000018;
  DWORD in_stack_0000001c;
  int in_stack_00000020;
  int *in_stack_00000024;
  uint in_stack_00000420;
  uint in_stack_00000428;
  char *in_stack_00000434;
  
  DStack00000010 = 0;
  if (in_stack_00000428 == 0) {
    return 0;
  }
  piVar1 = &DAT_10018400 + ((int)in_stack_00000420 >> 5);
  piVar6 = (int *)((in_stack_00000420 & 0x1f) * 0x24);
  piStack00000004 = piVar6;
  piStack00000014 = piVar1;
  if ((*(byte *)((int)piVar6 + *piVar1 + 4) & 0x20) != 0) {
    FUN_10010090(in_stack_00000420,0,2,unaff_EDI);
  }
  if ((*(byte *)((undefined4 *)(*piVar1 + (int)piVar6) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar1 + (int)piVar6),in_stack_00000434,in_stack_00000428,
                      &stack0x0000001c,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      DStack00000018 = GetLastError();
    }
    else {
      DStack00000010 = in_stack_0000001c;
      DStack00000018 = 0;
    }
  }
  else {
    DStack00000018 = 0;
    pcVar7 = in_stack_00000434;
    if (in_stack_00000428 != 0) {
      do {
        pcVar3 = &stack0x00000028;
        do {
          if (in_stack_00000428 <= (uint)((int)pcVar7 - (int)in_stack_00000434)) break;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar2 == '\n') {
            *pcVar3 = '\r';
            in_stack_00000020 = in_stack_00000020 + 1;
            pcVar3 = pcVar3 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
        } while ((int)pcVar3 - (int)&stack0x00000028 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)((int)piStack00000014 + *in_stack_00000024),&stack0x00000028,
                          (int)pcVar3 - (int)&stack0x00000028,&stack0x0000001c,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          DStack00000018 = GetLastError();
          piVar6 = piStack00000014;
          break;
        }
        DStack00000010 = DStack00000010 + in_stack_0000001c;
        piVar6 = piStack00000014;
        if (((int)in_stack_0000001c < (int)pcVar3 - (int)&stack0x00000028) ||
           (in_stack_00000428 <= (uint)((int)pcVar7 - (int)in_stack_00000434))) break;
      } while( true );
    }
  }
  if (DStack00000010 != 0) {
    return DStack00000010 - in_stack_00000020;
  }
  if (DStack00000018 == 0) {
    if (((*(byte *)((int)piVar6 + *in_stack_00000024 + 4) & 0x40) != 0) &&
       (*in_stack_00000434 == '\x1a')) {
      return 0;
    }
    pDVar5 = FUN_1000f540();
    *pDVar5 = 0x1c;
    pDVar5 = FUN_1000f550();
    *pDVar5 = 0;
    return -1;
  }
  if (DStack00000018 != 5) {
    FUN_1000f4c0(DStack00000018);
    return -1;
  }
  pDVar5 = FUN_1000f540();
  *pDVar5 = 9;
  pDVar5 = FUN_1000f550();
  *pDVar5 = 5;
  return -1;
}


