
/* ==== FUN_14005f80 @ 14005f80 ==== 
 * signature: undefined4 __cdecl FUN_14005f80(int * param_1, LONG * param_2)
 * body: 14005f80-140060d7
 */

undefined4 __cdecl FUN_14005f80(int *param_1,LONG *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_fc;
  int iStack_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined2 local_76 [9];
  undefined4 local_64;
  undefined2 *local_5c [17];
  int *piStack_16;
  undefined2 uStack_12;
  undefined2 uStack_10;
  
  puVar3 = &local_f4;
  for (iVar2 = 0x3c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  iVar2 = FUN_1400d1b0(local_76,*param_2,'\x01');
  if (iVar2 != 0) {
    if (iVar2 == -2) {
      FUN_14007300((int)param_1,*param_1,0x835,0);
    }
    return 0x10000;
  }
  local_64 = 0;
  local_f0 = 1;
  local_f4._2_1_ = 1;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 8),1,0,&local_fc);
  DAT_14028e48 = (*pcVar1)(local_fc,0x12,local_5c);
  *local_5c[0] = 0x69;
  *(undefined4 *)(local_5c[0] + 3) = 0;
  *(undefined4 *)(local_5c[0] + 5) = 0;
  *(int *)(local_5c[0] + 1) = *param_1;
  *(undefined4 *)(local_5c[0] + 7) = 0;
  uStack_12 = 1;
  piStack_16 = param_1;
  uStack_10 = 3;
  pcVar1 = (code *)FUN_14008ab0(*(int *)(DAT_14028e44 + 0x30),1,2,&iStack_f8);
  DAT_14028e48 = (*pcVar1)(iStack_f8,*(undefined4 *)(*param_2 + 0x1c),&local_f4);
  *(undefined2 *)(*param_2 + 0x24) = 1;
  return 0;
}


