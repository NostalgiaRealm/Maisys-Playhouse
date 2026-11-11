
/* ==== FUN_004270c0 @ 004270c0 ==== 
 * signature: undefined __cdecl FUN_004270c0(short * param_1, short * param_2, short * param_3)
 * body: 004270c0-00427155
 */

void __cdecl FUN_004270c0(short *param_1,short *param_2,short *param_3)

{
  undefined4 uVar1;
  short sVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)param_2;
  local_8 = *(undefined4 *)(param_2 + 2);
  local_14 = *(undefined4 *)param_1;
  local_10 = *(undefined4 *)(param_1 + 2);
  sVar2 = *param_3;
  if (*param_3 <= *param_2) {
    sVar2 = *param_2;
  }
  *param_2 = sVar2;
  sVar2 = param_3[2];
  if (param_2[2] <= param_3[2]) {
    sVar2 = param_2[2];
  }
  param_2[2] = sVar2;
  sVar2 = param_3[1];
  if (param_3[1] <= param_2[1]) {
    sVar2 = param_2[1];
  }
  param_2[1] = sVar2;
  sVar2 = param_3[3];
  if (param_2[3] <= param_3[3]) {
    sVar2 = param_2[3];
  }
  param_2[3] = sVar2;
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 2) = uVar1;
  FUN_0043bff0(param_1,(short *)&local_c,(short *)&local_14);
  return;
}


