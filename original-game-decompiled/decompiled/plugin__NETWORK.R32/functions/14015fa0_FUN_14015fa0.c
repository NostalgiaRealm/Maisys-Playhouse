
/* ==== FUN_14015fa0 @ 14015fa0 ==== 
 * signature: undefined4 __cdecl FUN_14015fa0(undefined4 * param_1, undefined4 * param_2)
 * body: 14015fa0-1401603e
 */

undefined4 __cdecl FUN_14015fa0(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int local_4;
  
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x12e;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((int)param_1 + 10) = 0;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x10),1,0x19,&local_4);
  DAT_14028e48 = (*pcVar1)(local_4,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  param_1[0xf] = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0x66;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0xffffffff;
  FUN_14008b20(0,(undefined2 *)((int)param_1 + 0x36),(int)param_2 + 0x36);
  return 0;
}


