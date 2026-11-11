
/* ==== FUN_00404d20 @ 00404d20 ==== 
 * signature: undefined __thiscall FUN_00404d20(void * this, int param_1, char * param_2, undefined1 param_3, int param_4)
 * body: 00404d20-00404dab
 */

void __thiscall FUN_00404d20(void *this,int param_1,char *param_2,undefined1 param_3,int param_4)

{
  short sVar1;
  int local_1c;
  char *local_18;
  undefined1 local_14;
  int local_12;
  int local_e;
  undefined4 local_a;
  
  if ((((param_1 != 0) && ((*(byte *)(param_1 + 0x1e) & 1) != 0)) &&
      (sVar1 = *(short *)(param_1 + 0x22), sVar1 != 0x43)) && ((sVar1 != 0x40 && (sVar1 != 0x3f))))
  {
    local_1c = param_1;
    if (param_2 == (char *)0x0) {
      local_18 = (char *)0x0;
    }
    else {
      local_18 = FUN_0043b970(param_2);
    }
    local_14 = param_3;
    local_12 = param_4;
    if (param_4 == 0) {
      local_12 = param_1;
    }
    if (*(int *)((int)this + 0x1ce) != 0) {
      local_a = *(undefined4 *)((int)this + 0x1d2);
      local_e = *(int *)((int)this + 0x1ce);
    }
    (**(code **)(**(int **)((int)this + 0x76) + 0xe8))(&local_1c);
  }
  return;
}


