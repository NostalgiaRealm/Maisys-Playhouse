
/* ==== FUN_1400d2f0 @ 1400d2f0 ==== 
 * signature: int __cdecl FUN_1400d2f0(undefined1 * param_1, undefined4 param_2, int * param_3, int * param_4)
 * body: 1400d2f0-1400d4c6
 */

/* WARNING: Removing unreachable block (ram,0x1400d3a3) */
/* WARNING: Removing unreachable block (ram,0x1400d4ba) */
/* WARNING: Removing unreachable block (ram,0x1400d409) */

int __cdecl FUN_1400d2f0(undefined1 *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  int local_14;
  undefined4 local_10;
  int iStack_c;
  
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,6,&local_14);
  DAT_14028e48 = (*pcVar1)(local_14,param_2,&local_10);
  if (DAT_14028e48 != 0) {
    return -1;
  }
  DAT_14028e48 = 0;
  iStack_c = FUN_14009900(param_1,local_10,*param_3);
  if (iStack_c == 0) {
    *param_4 = *param_4;
    pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_14);
    DAT_14028e48 = (*pcVar1)(local_14,param_2);
    return 0;
  }
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,7,&local_14);
  DAT_14028e48 = (*pcVar1)(local_14,param_2);
  return iStack_c;
}


