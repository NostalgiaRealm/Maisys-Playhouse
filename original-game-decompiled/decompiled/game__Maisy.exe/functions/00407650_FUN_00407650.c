
/* ==== FUN_00407650 @ 00407650 ==== 
 * signature: undefined __fastcall FUN_00407650(void * param_1)
 * body: 00407650-004076a6
 */

void __fastcall FUN_00407650(void *param_1)

{
  undefined4 local_58 [21];
  
  if (*(short *)((int)param_1 + 0x40) == 2) {
    *(undefined2 *)((int)param_1 + 0x40) = 3;
    if (*(int **)((int)param_1 + 0x46) != (int *)0x0) {
      FUN_004040c0(param_1,*(int **)((int)param_1 + 0x46));
      *(undefined4 *)((int)param_1 + 0x46) = 0;
    }
    FUN_004142c0(local_58,0x1fa,0,0,0);
    FUN_0046b730(*(void **)((int)param_1 + 0x96),(int)local_58);
  }
  return;
}


