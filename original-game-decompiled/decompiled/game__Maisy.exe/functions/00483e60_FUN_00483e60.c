
/* ==== FUN_00483e60 @ 00483e60 ==== 
 * signature: undefined __cdecl FUN_00483e60(undefined4 * param_1, undefined4 * param_2, int * param_3)
 * body: 00483e60-00483ecd
 */

void __cdecl FUN_00483e60(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  
  uVar1 = *param_1;
  param_2[1] = 0xaaaa5555;
  *param_2 = uVar1;
  param_2[3] = param_1[3];
  param_2[4] = param_1[4];
  param_2[2] = param_1[2];
  FUN_004166b0((short *)((int)param_1 + 0x26),(undefined2 *)(param_2 + 9));
  if (((param_3 != (int *)0x0) && (*(short *)(param_2 + 9) == 0x1c)) &&
     (*(int *)((int)param_2 + 0x26) == 0)) {
    piVar2 = FUN_0043ea50(param_3,(int *)((int)param_2 + 0x2a),*(char **)((int)param_2 + 0x2e));
    if (piVar2 != (int *)0x0) {
      *(int **)((int)param_2 + 0x26) = piVar2;
    }
  }
  *(undefined2 *)(param_2 + 5) = 0;
  return;
}


