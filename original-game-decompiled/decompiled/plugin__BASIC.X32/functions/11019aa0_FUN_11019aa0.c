
/* ==== FUN_11019aa0 @ 11019aa0 ==== 
 * signature: undefined __cdecl FUN_11019aa0(short * param_1, short * param_2)
 * body: 11019aa0-11019b6e
 */

void __cdecl FUN_11019aa0(short *param_1,short *param_2)

{
  short sVar1;
  short sVar2;
  
  if (*param_1 == 0x1a) {
    *param_1 = 1;
    *(uint *)(param_1 + 1) = (uint)((char)param_1[1] != '\0');
  }
  if (*param_2 == 0x1a) {
    *param_2 = 1;
    *(uint *)(param_2 + 1) = (uint)((char)param_2[1] != '\0');
  }
  if (*param_1 == 0x1e) {
    *param_1 = 1;
  }
  if (*param_2 == 0x1e) {
    *param_2 = 1;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  }
  sVar1 = *param_1;
  if ((sVar1 == 0x15) && (*param_2 == 1)) {
    *param_2 = 0x15;
    *(double *)(param_2 + 1) = (double)*(int *)(param_2 + 1);
    return;
  }
  sVar2 = *param_2;
  if ((sVar2 == 0x15) && (sVar1 == 1)) {
    *param_1 = 0x15;
    *(double *)(param_1 + 1) = (double)*(int *)(param_1 + 1);
    return;
  }
  if ((sVar1 == 0) && ((sVar2 == 3 || (sVar2 == 0x19)))) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = sVar2;
  }
  if ((*param_2 == 0) && ((sVar1 = *param_1, sVar1 == 3 || (sVar1 == 0x19)))) {
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = sVar1;
  }
  return;
}


