
/* ==== FUN_10003f80 @ 10003f80 ==== 
 * signature: undefined4 __cdecl FUN_10003f80(int param_1)
 * body: 10003f80-10003fac
 */

undefined4 __cdecl FUN_10003f80(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_1;
  pcVar2 = (code *)FUN_100089c7(param_1,0,0x21,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,2,iVar1);
  return 0;
}


