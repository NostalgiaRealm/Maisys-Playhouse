
/* ==== FUN_004038d0 @ 004038d0 ==== 
 * signature: undefined __fastcall FUN_004038d0(void * param_1)
 * body: 004038d0-0040392a
 */

void __fastcall FUN_004038d0(void *param_1)

{
  FUN_00402dc0(*(int *)((int)param_1 + 0x52));
  FUN_0042fc00(*(void **)((int)param_1 + 0x52));
  FUN_00402dc0(*(int *)((int)param_1 + 0x56));
  FUN_0042fc00(*(void **)((int)param_1 + 0x56));
  FUN_0042fc00(*(void **)((int)param_1 + 0x82));
  FUN_00430640(*(int *)((int)param_1 + 0x6a));
  *(undefined1 *)((int)param_1 + 0xa7) = 1;
  if (*(char *)((int)param_1 + 0xac) != '\0') {
    FUN_00406240(param_1,*(int **)((int)param_1 + 0x38));
  }
  return;
}


