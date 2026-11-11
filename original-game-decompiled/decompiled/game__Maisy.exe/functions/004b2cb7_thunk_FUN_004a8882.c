
/* ==== thunk_FUN_004a8882 @ 004b2cb7 ==== 
 * signature: undefined __fastcall thunk_FUN_004a8882(int * param_1)
 * body: 004b2cb7-004b2cbb
 * thunk to: FUN_004a8882
 */

void __fastcall thunk_FUN_004a8882(int *param_1)

{
  _AFX_THREAD_STATE *p_Var1;
  
  p_Var1 = AfxGetThreadState();
  (**(code **)(*param_1 + 0xa4))
            (*(undefined4 *)(p_Var1 + 0x3c),*(undefined4 *)(p_Var1 + 0x40),
             *(undefined4 *)(p_Var1 + 0x44));
  return;
}


