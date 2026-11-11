
/* ==== FUN_0044c000 @ 0044c000 ==== 
 * signature: undefined __thiscall FUN_0044c000(void * this, void * param_1, undefined4 param_2, short * param_3, short * param_4, byte * param_5, short * param_6, int * param_7)
 * body: 0044c000-0044c0b5
 */

void __thiscall
FUN_0044c000(void *this,void *param_1,undefined4 param_2,short *param_3,short *param_4,byte *param_5
            ,short *param_6,int *param_7)

{
  undefined1 local_28;
  undefined1 local_27;
  undefined2 local_26;
  short local_24;
  undefined2 local_22;
  short local_20;
  undefined2 local_16;
  undefined4 local_e;
  undefined4 local_a;
  
  if (*(int *)((int)this + 0x84) == 0) {
    FUN_0044b040(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  local_28 = 1;
  local_27 = 1;
  local_20 = *(short *)((int)this + 0x92);
  if (local_20 < 0) {
    local_24 = -local_20;
    local_20 = 0;
  }
  else {
    local_24 = 0;
  }
  local_22 = *(undefined2 *)((int)this + 0x90);
  local_26 = 0;
  local_e = 0;
  local_16 = *(undefined2 *)((int)this + 0x94);
  local_a = *(undefined4 *)((int)this + 0x8c);
  FUN_0047b7d0(param_1,(undefined4 *)&local_28,param_3,param_4,param_5,param_6,param_7,'\x01');
  return;
}


