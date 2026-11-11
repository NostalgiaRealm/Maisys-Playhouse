
/* ==== FUN_00449580 @ 00449580 ==== 
 * signature: undefined __thiscall FUN_00449580(void * this, void * param_1, undefined4 param_2, short * param_3, short * param_4, byte * param_5, undefined4 param_6, int * param_7)
 * body: 00449580-004495eb
 */

void __thiscall
FUN_00449580(void *this,void *param_1,undefined4 param_2,short *param_3,short *param_4,byte *param_5
            ,undefined4 param_6,int *param_7)

{
  char *pcVar1;
  undefined1 uVar2;
  
  uVar2 = DAT_004dcb38;
  DAT_004dcb38 = 1;
  pcVar1 = (char *)((int)this + 0xf2);
  if ((*pcVar1 == '\0') && (FUN_004495f0(this,(int)param_1), *pcVar1 == '\0')) {
    (**(code **)(*(int *)this + 0x1f0))(0,param_4);
    DAT_004dcb38 = uVar2;
    return;
  }
  FUN_0047b7d0(param_1,(undefined4 *)pcVar1,param_3,param_4,param_5,param_6,param_7,'\x01');
  DAT_004dcb38 = uVar2;
  return;
}


