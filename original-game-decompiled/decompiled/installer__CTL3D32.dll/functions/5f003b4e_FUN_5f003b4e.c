
/* ==== FUN_5f003b4e @ 5f003b4e ==== 
 * signature: undefined __stdcall FUN_5f003b4e(void)
 * body: 5f003b4e-5f003b4f
 */

void FUN_5f003b4e(void)

{
  code *pcVar1;
  LRESULT LVar2;
  HWND pHVar3;
  HDC hDC;
  LONG LVar4;
  int iVar5;
  HWND hWndTo;
  uint uVar6;
  char unaff_BL;
  ushort uVar7;
  int unaff_EBP;
  HWND unaff_ESI;
  int unaff_EDI;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined2 in_FPUStatusWord;
  uint uStack00000010;
  int in_stack_00000018;
  uint uStack0000001c;
  uint uStack00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  LRESULT in_stack_00000034;
  int in_stack_0000003c;
  int in_stack_00000044;
  int in_stack_0000005c;
  int in_stack_00000060;
  
  if (in_ZF || in_OF != in_SF) {
    *(char *)(unaff_EDI + -0x77) = *(char *)(unaff_EDI + -0x77) + unaff_BL;
    uRam555f0039 = in_FPUStatusWord;
    *(char *)(unaff_EBP + -0x34) = *(char *)(unaff_EBP + -0x34) + unaff_BL;
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack00000010 = GetWindowLongA(unaff_ESI,-0x10);
  if (((uStack00000010 & 0x10000000) != 0) &&
     (((in_stack_00000060 != 3 || (((byte)uStack00000010 & 3) != 3)) ||
      (LVar2 = SendMessageA(unaff_ESI,0x157,0,0), LVar2 == 0)))) {
    if (in_stack_0000005c != 0) {
      HideCaret(unaff_ESI);
    }
    GetWindowRect(unaff_ESI,(LPRECT)&stack0x00000024);
    pHVar3 = GetParent(unaff_ESI);
    ScreenToClient(pHVar3,(LPPOINT)&stack0x00000024);
    uVar7 = 0xf;
    ScreenToClient(pHVar3,(LPPOINT)&stack0x0000002c);
    hDC = GetDC(pHVar3);
    uStack0000001c = uStack00000010 & 0x100000;
    if (uStack0000001c != 0) {
      uVar7 = 7;
    }
    uStack00000020 = uStack00000010 & 0x200000;
    if (uStack00000020 != 0) {
      uVar7 = uVar7 & 0xfffb;
    }
    LVar4 = GetWindowLongA(unaff_ESI,-0xc);
    hWndTo = pHVar3;
    if (in_stack_0000005c - LVar4 == -1000) {
      in_stack_00000018 = 0x29a;
      in_stack_00000034 = SendMessageA(pHVar3,0x1944,0,(LPARAM)&stack0x00000018);
      if (in_stack_00000018 == 0x29a) {
        in_stack_00000034 = SendMessageA(pHVar3,0x1943,0,(LPARAM)&stack0x00000018);
      }
      GetClassNameA(pHVar3,(LPSTR)&stack0x00000044,0x10);
      iVar5 = lstrcmpA((LPCSTR)&stack0x00000044,"ComboBox");
      if ((iVar5 == 0) || ((in_stack_00000018 == 1 && (in_stack_00000034 == 0x3eb)))) {
        hWndTo = GetParent(pHVar3);
        MapWindowPoints(pHVar3,hWndTo,(LPPOINT)&stack0x00000024,2);
        ReleaseDC(pHVar3,hDC);
        hDC = GetDC(hWndTo);
        if (in_stack_0000005c == 0) {
          uVar7 = uVar7 & 0xfffd;
          in_stack_00000028 = in_stack_00000028 + 1;
        }
        else {
          uVar6 = GetWindowLongA(pHVar3,-0x10);
          if (((uVar6 & 3) == 2) || ((uVar6 & 3) == 3)) {
            LVar2 = SendMessageA(pHVar3,0x157,0,0);
            if (LVar2 != 0) {
              ReleaseDC(hWndTo,hDC);
              ShowCaret(unaff_ESI);
              return;
            }
          }
          else {
            uVar7 = uVar7 & 0xfff7;
            pHVar3 = GetWindow(pHVar3,5);
            GetWindowRect(pHVar3,(LPRECT)&stack0x00000034);
            in_stack_0000002c = in_stack_0000002c + (in_stack_00000034 - in_stack_0000003c);
            FUN_5f001470(hDC,&stack0x00000024,0x1008);
            in_stack_0000002c = in_stack_0000002c + (in_stack_0000003c - in_stack_00000034);
          }
        }
      }
    }
    FUN_5f001470(hDC,&stack0x00000024,uVar7);
    iVar5 = in_stack_0000002c;
    if ((in_stack_00000060 == 3) && (((byte)uStack00000010 & 3) == 3)) {
      in_stack_00000024 = GetSystemMetrics(2);
      in_stack_00000024 = iVar5 - in_stack_00000024;
      FUN_5f001330(hDC,&stack0x00000024,7,7,0xc);
      FUN_5f002fa0(unaff_ESI);
    }
    else {
      if (uStack00000020 != 0) {
        in_stack_0000002c = in_stack_0000002c + 1;
        FUN_5f001330(hDC,&stack0x00000024,0,0,4);
        iVar5 = in_stack_0000002c + -1;
        in_stack_00000044 = in_stack_00000024;
        in_stack_0000002c = iVar5;
        in_stack_00000024 = GetSystemMetrics(2);
        in_stack_00000024 = iVar5 - in_stack_00000024;
        FUN_5f001330(hDC,&stack0x00000024,7,7,8);
        in_stack_00000024 = in_stack_00000044;
      }
      if (uStack0000001c != 0) {
        in_stack_00000030 = in_stack_00000030 + 1;
        FUN_5f001330(hDC,&stack0x00000024,0,0,8);
        iVar5 = in_stack_00000030 + -1;
        in_stack_00000030 = iVar5;
        in_stack_00000028 = GetSystemMetrics(0x15);
        in_stack_00000028 = iVar5 - in_stack_00000028;
        FUN_5f001330(hDC,&stack0x00000024,7,7,4);
      }
    }
    ReleaseDC(hWndTo,hDC);
    if (in_stack_0000005c != 0) {
      ShowCaret(unaff_ESI);
    }
  }
  return;
}


