
/* ==== FUN_004556a0 @ 004556a0 ==== 
 * signature: undefined4 __cdecl FUN_004556a0(short * param_1, short * param_2)
 * body: 004556a0-00455726
 */

undefined4 __cdecl FUN_004556a0(short *param_1,short *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int local_8;
  
  if ((*param_2 == 0x6a) || (*param_2 == 0)) {
    *param_2 = 0x6d;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  if (*param_1 != 0x69) {
    if (*param_1 != 0x6d) {
      return 0x10000;
    }
    uVar1 = *(undefined4 *)(param_1 + 2);
    *(undefined4 *)param_2 = *(undefined4 *)param_1;
    *(undefined4 *)(param_2 + 2) = uVar1;
    return 0;
  }
  pcVar2 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x38),1,6,&local_8);
  DAT_004e34cc = (*pcVar2)(local_8,*(undefined4 *)(param_1 + 1),param_2);
  return DAT_004e34cc;
}


