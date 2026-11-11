
/* ==== FUN_0042d520 @ 0042d520 ==== 
 * signature: undefined __thiscall FUN_0042d520(void * this, undefined4 param_1, undefined4 param_2, char * param_3)
 * body: 0042d520-0042d56a
 */

void __thiscall FUN_0042d520(void *this,undefined4 param_1,undefined4 param_2,char *param_3)

{
  FUN_0041f4c0(DAT_004da380,0,*(short *)((int)this + 0x46),*(undefined4 *)((int)this + 0x4c),0x19d,
               param_3,1);
  if ((*(int **)((int)this + 0x3e) != (int *)0x0) && (*param_3 == '\0')) {
    (**(code **)(**(int **)((int)this + 0x3e) + 0x220))(param_1,param_2,param_3);
  }
  return;
}


