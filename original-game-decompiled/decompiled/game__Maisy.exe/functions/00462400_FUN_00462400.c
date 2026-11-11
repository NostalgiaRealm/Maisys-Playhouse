
/* ==== FUN_00462400 @ 00462400 ==== 
 * signature: undefined __thiscall FUN_00462400(void * this, byte * param_1)
 * body: 00462400-00462466
 */

void __thiscall FUN_00462400(void *this,byte *param_1)

{
  undefined4 local_60 [21];
  byte local_c [8];
  
  if (*(int *)((int)this + 0x3a) != 0) {
    if (param_1 == (byte *)0x0) {
      local_c[0] = 0x80;
      local_c[1] = 0;
      param_1 = local_c;
    }
    if ((*(char *)(*(int *)((int)this + 0x3a) + 0xa4) != '\0') &&
       ((*(byte *)((int)this + 0x32) & 1) != 0)) {
      FUN_00414300(local_60,0x138a,0,this,0);
      (**(code **)(*(int *)this + 0x420))(local_60);
    }
    FUN_00405170(*(void **)((int)this + 0x3a),param_1,this);
  }
  return;
}


