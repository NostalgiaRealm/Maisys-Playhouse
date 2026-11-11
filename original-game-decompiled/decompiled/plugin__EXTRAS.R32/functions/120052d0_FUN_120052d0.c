
/* ==== FUN_120052d0 @ 120052d0 ==== 
 * signature: undefined __cdecl FUN_120052d0(undefined4 param_1, undefined4 param_2)
 * body: 120052d0-12005322
 */

void __cdecl FUN_120052d0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int local_4;
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x10),1,0x34,&local_4);
  DAT_12039a9c = (*pcVar1)(local_4,param_1,param_2,s_Open_Application_120371d8,0x9c5,
                           s_Open_Application_Failed_120371ec,3);
  return;
}


