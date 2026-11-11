
/* ==== FUN_00409070 @ 00409070 ==== 
 * signature: undefined __fastcall FUN_00409070(void * param_1)
 * body: 00409070-00409132
 */

void __fastcall FUN_00409070(void *param_1)

{
  char cVar1;
  short local_14;
  short local_12;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  
  cVar1 = (**(code **)(**(int **)((int)param_1 + 0x2a) + 0x104))();
  if (cVar1 == '\0') {
    *(undefined2 *)((int)param_1 + 0xe0) = 0;
    *(undefined2 *)((int)param_1 + 0xdc) = 0;
    *(undefined2 *)((int)param_1 + 0xde) = 0;
    *(undefined2 *)((int)param_1 + 0xda) = 0;
    FUN_004063b0();
    FUN_004106a0(*(int *)((int)param_1 + 0x8e));
    FUN_00408510(param_1,(undefined4 *)&local_c);
    FUN_00410630(*(void **)((int)param_1 + 0x8e),&local_14);
    local_c = local_c + local_14;
    local_8 = local_8 + local_14;
    local_a = local_a + local_12;
    local_6 = local_6 + local_12;
    if (*(int **)((int)param_1 + 0x15c) != (int *)0x0) {
      FUN_00403700(param_1,*(int **)((int)param_1 + 0x15c));
    }
    FUN_0047aa10(*(void **)((int)param_1 + 0x8a),(undefined4 *)&local_c,
                 *(short *)((int)param_1 + 0xc0),*(int **)((int)param_1 + 0x46));
    if (*(char *)((int)param_1 + 0xa4) != '\0') {
      FUN_00407e50((int)param_1);
    }
  }
  return;
}


