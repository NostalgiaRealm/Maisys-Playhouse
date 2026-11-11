
/* ==== FUN_100020f0 @ 100020f0 ==== 
 * signature: undefined4 __cdecl FUN_100020f0(int param_1)
 * body: 100020f0-10002143
 */

undefined4 __cdecl FUN_100020f0(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = param_1;
  pcVar2 = (code *)FUN_100089c7(param_1,0,0x21,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,2,iVar1);
  pcVar2 = (code *)FUN_100089c7(iVar1,0,0x21,&param_1);
  DAT_100173bc = (*pcVar2)(param_1,2,iVar1 + 10);
  return 0;
}


