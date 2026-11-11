
/* ==== FUN_12014ed0 @ 12014ed0 ==== 
 * signature: undefined4 __cdecl FUN_12014ed0(int param_1, undefined2 * param_2)
 * body: 12014ed0-12014f5d
 */

undefined4 __cdecl FUN_12014ed0(int param_1,undefined2 *param_2)

{
  code *pcVar1;
  int local_214;
  undefined1 local_210 [528];
  
  pcVar1 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 4),1,10,&local_214);
  DAT_12039a9c = (*pcVar1)(local_214,param_1,*(undefined4 *)(param_1 + 0x22),local_210);
  if (DAT_12039a9c != 0) {
    FUN_12027790(0,param_2,*(int *)(param_1 + 0x22));
    return 0;
  }
  FUN_12027790(0,param_2,(int)local_210);
  return 0;
}


