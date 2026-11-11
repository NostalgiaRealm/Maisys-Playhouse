
/* ==== FUN_12005420 @ 12005420 ==== 
 * signature: undefined4 __cdecl FUN_12005420(undefined4 * param_1, undefined4 * param_2)
 * body: 12005420-12005517
 */

undefined4 __cdecl FUN_12005420(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  code *pcVar3;
  int local_4;
  
  *(undefined2 *)param_1 = 0x17;
  *(undefined4 *)((int)param_1 + 2) = 0x12e;
  *(undefined4 *)((int)param_1 + 6) = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  piVar1 = param_1 + 6;
  uVar2 = *(undefined2 *)(param_2 + 2);
  param_1[3] = 0xffffffff;
  *(undefined2 *)(param_1 + 2) = uVar2;
  *piVar1 = 0;
  *(undefined2 *)((int)param_1 + 10) = 0x66;
  param_1[4] = 0;
  param_1[5] = 0;
  pcVar3 = (code *)FUN_12027370(*(int *)(DAT_12039a98 + 0x34),1,0xe,&local_4);
  DAT_12039a9c = (*pcVar3)(local_4,piVar1,0x100);
  if ((undefined1 *)*piVar1 != (undefined1 *)0x0) {
    param_1[4] = 0x100;
    *(undefined1 *)*piVar1 = 0;
  }
  FUN_120273e0(0,(undefined2 *)((int)param_1 + 10),(int)param_2 + 10);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  if (*piVar1 != 0) {
    *(undefined1 *)(param_1[5] + *piVar1) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)((int)param_2 + 0x1e);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
  param_1[9] = param_2[9];
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  *(undefined4 *)((int)param_1 + 0x2a) = *(undefined4 *)((int)param_2 + 0x2a);
  return 0;
}


