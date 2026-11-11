
/* ==== FUN_140181b0 @ 140181b0 ==== 
 * signature: char __cdecl FUN_140181b0(int param_1, short * param_2)
 * body: 140181b0-1401827f
 */

char __cdecl FUN_140181b0(int param_1,short *param_2)

{
  code *pcVar1;
  short *psVar2;
  int local_4;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_4);
    DAT_14028e48 = (*pcVar1)(local_4,param_1,param_1 + 0x36,param_1 + 0x62);
  }
  if (*(int *)(param_1 + 0x7a) == 0) {
    psVar2 = (short *)(param_1 + 10);
    if (*psVar2 == 0x6e) {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_4);
      psVar2 = param_2;
    }
    else {
      pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x3c),1,0,&local_4);
    }
    DAT_14028e48 = (*pcVar1)(local_4,param_1,psVar2,param_1 + 0x74);
  }
  return '\x01' - (*(int *)(param_1 + 0x70) == 0);
}


