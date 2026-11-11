
/* ==== FUN_0041cdc0 @ 0041cdc0 ==== 
 * signature: undefined __thiscall FUN_0041cdc0(void * this, void * param_1, undefined4 param_2, short * param_3, short * param_4, byte * param_5, undefined4 param_6, int * param_7)
 * body: 0041cdc0-0041ce2e
 */

void __thiscall
FUN_0041cdc0(void *this,void *param_1,undefined4 param_2,short *param_3,short *param_4,byte *param_5
            ,undefined4 param_6,int *param_7)

{
  char *pcVar1;
  
  if ((*(byte *)((int)this + 0x10) & 0x10) != 0) {
    (**(code **)(**(int **)((int)this + 0x4e) + 0xf0))(this);
  }
  pcVar1 = (char *)((int)this + 0xf2);
  if (*pcVar1 == '\0') {
    FUN_0041cca0(this,(int)param_1);
    if (*pcVar1 == '\0') {
      (**(code **)(*(int *)this + 0x1f0))(0,param_2);
      return;
    }
  }
  FUN_0047b7d0(param_1,(undefined4 *)pcVar1,param_3,param_4,param_5,param_6,param_7,'\x01');
  return;
}


