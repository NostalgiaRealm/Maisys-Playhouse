
/* ==== FUN_00449850 @ 00449850 ==== 
 * signature: undefined __thiscall FUN_00449850(void * this, int * param_1, uint param_2, undefined4 * param_3)
 * body: 00449850-004498f8
 */

void __thiscall FUN_00449850(void *this,int *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 local_68 [98];
  byte local_6;
  
  if (*(short *)(param_3 + 1) == 2) {
    FUN_00486dd0(param_1,(undefined4 *)(local_68 + 2),param_3,0x62);
    FUN_0041e660(this,param_1,(int)(local_68 + 2),param_2);
    FUN_0041e7a0(this,param_1,(int)(local_68 + 2));
    FUN_00449770(this,param_1,param_2,(int)(local_68 + 2));
    return;
  }
  FUN_00486dd0(param_1,(undefined4 *)local_68,param_3,100);
  FUN_0041e660(this,param_1,(int)local_68,param_2);
  FUN_0041e7a0(this,param_1,(int)local_68);
  FUN_00449770(this,param_1,param_2,(int)local_68);
  *(byte *)((int)this + 0x17d) = local_6 & 1;
  return;
}


