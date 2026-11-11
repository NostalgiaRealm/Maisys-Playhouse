
/* ==== FUN_1000ff04 @ 1000ff04 ==== 
 * signature: undefined FUN_1000ff04(void)
 * body: 1000ff04-1000ff92
 */

undefined4 __fastcall FUN_1000ff04(uint param_1)

{
  int iVar1;
  DWORD *pDVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10018500) {
    iVar1 = (&DAT_10018400)[(int)param_1 >> 5];
    iVar3 = (param_1 & 0x1f) * 0x24;
    if (((*(byte *)(iVar1 + 4 + iVar3) & 1) != 0) && (*(int *)(iVar1 + iVar3) != -1)) {
      if (DAT_10016f40 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_1000ff67;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_1000ff67:
      *(undefined4 *)((&DAT_10018400)[(int)param_1 >> 5] + iVar3) = 0xffffffff;
      return 0;
    }
  }
  pDVar2 = FUN_1000f540();
  *pDVar2 = 9;
  pDVar2 = FUN_1000f550();
  *pDVar2 = 0;
  return 0xffffffff;
}


