
/* ==== FUN_10002090 @ 10002090 ==== 
 * signature: undefined4 __cdecl FUN_10002090(int param_1)
 * body: 10002090-100020e3
 */

undefined4 __cdecl FUN_10002090(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_1;
  pcVar2 = (code *)FUN_100089c7(param_1,0,0x21,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,1,iVar1);
  pcVar2 = (code *)FUN_100089c7(iVar1,0,0x21,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,1,iVar1 + 10);
  return 0;
}


