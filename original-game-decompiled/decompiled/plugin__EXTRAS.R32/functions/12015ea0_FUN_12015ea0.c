
/* ==== FUN_12015ea0 @ 12015ea0 ==== 
 * signature: undefined __cdecl FUN_12015ea0(int param_1)
 * body: 12015ea0-12015edb
 */

void __cdecl FUN_12015ea0(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (param_1 != 0) {
    pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 8),1,3,&local_4);
    DAT_12039a9c = (*pcVar1)(local_4,param_1);
  }
  return;
}


