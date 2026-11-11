
/* ==== FUN_004a736c @ 004a736c ==== 
 * signature: undefined __fastcall FUN_004a736c(int * param_1)
 * body: 004a736c-004a73ee
 */

void __fastcall FUN_004a736c(int *param_1)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = true;
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    if (bVar1) {
      do {
        BVar2 = PeekMessageA((LPMSG)(param_1 + 0xc),(HWND)0x0,0,0,0);
        iVar4 = iVar3;
        if (BVar2 != 0) break;
        iVar4 = iVar3 + 1;
        iVar3 = (**(code **)(*param_1 + 100))(iVar3);
        if (iVar3 == 0) {
          bVar1 = false;
        }
        iVar3 = iVar4;
      } while (bVar1);
    }
    do {
      iVar3 = (**(code **)(*param_1 + 0x60))();
      if (iVar3 == 0) {
        (**(code **)(*param_1 + 0x6c))();
        return;
      }
      iVar3 = (**(code **)(*param_1 + 0x68))(param_1 + 0xc);
      if (iVar3 != 0) {
        bVar1 = true;
        iVar4 = 0;
      }
      BVar2 = PeekMessageA((LPMSG)(param_1 + 0xc),(HWND)0x0,0,0,0);
    } while (BVar2 != 0);
  } while( true );
}


