
/* ==== FUN_004b2f6f @ 004b2f6f ==== 
 * signature: undefined4 __cdecl FUN_004b2f6f(int param_1)
 * body: 004b2f6f-004b2fc7
 */

undefined4 __cdecl FUN_004b2f6f(int param_1)

{
  _AFX_THREAD_STATE *p_Var1;
  uint uVar2;
  
  p_Var1 = AfxGetThreadState();
  if (p_Var1 != (_AFX_THREAD_STATE *)0x0) {
    p_Var1 = p_Var1 + 0xc;
    if (*(LPCVOID *)p_Var1 != (LPCVOID)0x0) {
      uVar2 = FUN_00492660(*(LPCVOID *)p_Var1);
      if (param_1 + 4U < uVar2) {
        FUN_00492630(*(LPVOID *)p_Var1,(uVar2 - param_1) - 4);
      }
      else {
        FUN_0048e750(*(LPVOID *)p_Var1);
        *(undefined4 *)p_Var1 = 0;
      }
      return 1;
    }
  }
  FUN_004a3538();
  return 0;
}


