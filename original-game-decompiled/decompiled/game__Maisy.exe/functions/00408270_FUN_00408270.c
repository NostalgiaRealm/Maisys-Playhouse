
/* ==== FUN_00408270 @ 00408270 ==== 
 * signature: undefined __fastcall FUN_00408270(void * param_1)
 * body: 00408270-004083da
 */

void __fastcall FUN_00408270(void *param_1)

{
  if (*(char *)((int)param_1 + 0xa4) != '\0') {
    FUN_00408490(param_1,1);
    if (*(int **)((int)param_1 + 0x8e) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0x8e) + 300))();
    }
    FUN_00404450(param_1,0);
    FUN_0042fc00(*(void **)((int)param_1 + 0x76));
    FUN_0042fc00(*(void **)((int)param_1 + 0x7a));
    FUN_0042fc00(*(void **)((int)param_1 + 0x7e));
    FUN_00405940(param_1,'\x01');
    FUN_004081b0(param_1);
    FUN_004035b0((int)param_1);
    FUN_0047a7d0(*(void **)((int)param_1 + 0x8a),1,(undefined4 *)0x0);
    FUN_00448710(*(void **)(*(int *)((int)param_1 + 0x2a) + 0x6e),100);
    FUN_00448820(*(int *)((int)param_1 + 0x2e));
    *(undefined1 *)((int)param_1 + 0xa4) = 0;
    if (*(int **)((int)param_1 + 0x4a) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0x4a) + 0xe4))();
    }
    if (*(int **)((int)param_1 + 0x4e) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0x4e) + 0xe4))();
    }
    if (*(int **)((int)param_1 + 0x32) != (int *)0x0) {
      (**(code **)(**(int **)((int)param_1 + 0x32) + 0xe4))();
    }
    if (*(void **)((int)param_1 + 0x72) != (void *)0x0) {
      FUN_0042fc00(*(void **)((int)param_1 + 0x72));
    }
    *(undefined2 *)((int)param_1 + 0x36) = 0xffff;
    *(undefined4 *)((int)param_1 + 0x9e) = 0;
    *(undefined4 *)((int)param_1 + 0x9a) = 0;
    DAT_004d91e4 = DAT_004d91e4 + -1;
    *(undefined2 *)((int)param_1 + 0x14a) = 0;
    *(undefined2 *)((int)param_1 + 0x148) = 0;
    *(undefined2 *)((int)param_1 + 0x128) = 0;
    *(undefined2 *)((int)param_1 + 0x12a) = 0;
    if (*(int **)((int)param_1 + 0x42) != (int *)0x0) {
      FUN_004040c0(param_1,*(int **)((int)param_1 + 0x42));
      *(undefined4 *)((int)param_1 + 0x42) = 0;
    }
    if (*(int **)((int)param_1 + 0x46) != (int *)0x0) {
      FUN_004040c0(param_1,*(int **)((int)param_1 + 0x46));
      *(undefined4 *)((int)param_1 + 0x46) = 0;
    }
    if (*(int *)((int)param_1 + 0x2a) != 0) {
      FUN_0045a200(*(int *)((int)param_1 + 0x2a));
    }
    *(undefined4 *)((int)param_1 + 0x124) = 0;
    *(undefined1 *)((int)param_1 + 0xb5) = 0;
    *(undefined1 *)((int)param_1 + 0xb6) = 1;
    FUN_00402f50(param_1,2,'\0');
  }
  FUN_00408490(param_1,0);
  FUN_00410ca0(DAT_004da390,0x2b);
  return;
}


