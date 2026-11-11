
/* ==== FUN_004a8846 @ 004a8846 ==== 
 * signature: _AFX_THREAD_STATE * __stdcall FUN_004a8846(void)
 * body: 004a8846-004a8881
 */

_AFX_THREAD_STATE * FUN_004a8846(void)

{
  _AFX_THREAD_STATE *p_Var1;
  LONG LVar2;
  DWORD DVar3;
  
  p_Var1 = AfxGetThreadState();
  LVar2 = GetMessageTime();
  *(LONG *)(p_Var1 + 0x48) = LVar2;
  DVar3 = GetMessagePos();
  *(int *)(p_Var1 + 0x4c) = (int)(short)DVar3;
  *(int *)(p_Var1 + 0x50) = (int)(short)(DVar3 >> 0x10);
  return p_Var1 + 0x38;
}


