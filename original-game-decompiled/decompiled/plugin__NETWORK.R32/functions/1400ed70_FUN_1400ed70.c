
/* ==== FUN_1400ed70 @ 1400ed70 ==== 
 * signature: char __cdecl FUN_1400ed70(int param_1)
 * body: 1400ed70-1400edc4
 */

char __cdecl FUN_1400ed70(int param_1)

{
  code *pcVar1;
  int local_4;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,param_1,param_1 + 10,param_1 + 0x66);
  }
  return '\x01' - (*(int *)(param_1 + 0x74) == 0);
}


