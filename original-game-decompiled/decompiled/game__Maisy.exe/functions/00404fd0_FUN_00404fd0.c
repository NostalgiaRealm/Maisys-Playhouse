
/* ==== FUN_00404fd0 @ 00404fd0 ==== 
 * signature: undefined __fastcall FUN_00404fd0(void * param_1)
 * body: 00404fd0-00405104
 */

void __fastcall FUN_00404fd0(void *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)((int)param_1 + 0x11c) != 0) {
    if (*(int *)((int)param_1 + 0x96) != *(int *)((int)param_1 + 0x11c)) {
      FUN_00408490(param_1,1);
      FUN_00405940(param_1,'\0');
      *(undefined4 *)((int)param_1 + 0x96) = *(undefined4 *)((int)param_1 + 0x11c);
      *(undefined4 *)((int)param_1 + 0x92) = *(undefined4 *)((int)param_1 + 0x120);
      if (*(char *)((int)param_1 + 0xb4) == '\0') {
        FUN_00408080(param_1);
      }
      else {
        *(undefined4 *)((int)param_1 + 0x9a) = *(undefined4 *)((int)param_1 + 0x11c);
        *(undefined4 *)((int)param_1 + 0x9e) = *(undefined4 *)((int)param_1 + 0x120);
        FUN_00405e50(param_1,'\x01');
        FUN_00408700(param_1,(short *)((int)param_1 + 0xb8));
      }
      FUN_00408490(param_1,0);
    }
    *(undefined4 *)((int)param_1 + 0x11c) = 0;
    *(undefined4 *)((int)param_1 + 0x120) = 0;
    *(undefined1 *)((int)param_1 + 0xb4) = 0;
  }
  if (*(int *)((int)param_1 + 0x124) != 0) {
    FUN_00408490(param_1,1);
    if (*(char *)((int)param_1 + 0xb5) == '\0') {
      FUN_00405940(param_1,'\0');
    }
    else {
      FUN_00405e50(param_1,'\0');
    }
    if (*(char *)((int)param_1 + 0xb6) != '\0') {
      FUN_00405400((int)param_1);
    }
    uVar1 = *(undefined4 *)((int)param_1 + 0x124);
    *(undefined4 *)((int)param_1 + 0x124) = 0;
    *(undefined1 *)((int)param_1 + 0xb5) = 0;
    *(undefined1 *)((int)param_1 + 0xb6) = 0;
    *(undefined4 *)((int)param_1 + 0x96) = uVar1;
    FUN_00408080(param_1);
    FUN_00408490(param_1,0);
  }
  if (*(int *)((int)param_1 + 0x118) != 0) {
    FUN_004081b0(param_1);
    FUN_00407ee0(param_1,*(int **)((int)param_1 + 0x118));
    FUN_00407fa0(param_1,'\0');
    *(undefined4 *)((int)param_1 + 0x118) = 0;
  }
  return;
}


