
/* ==== FUN_0047e6d0 @ 0047e6d0 ==== 
 * signature: undefined __thiscall FUN_0047e6d0(void * this, byte param_1, char param_2)
 * body: 0047e6d0-0047e7c9
 */

void __thiscall FUN_0047e6d0(void *this,byte param_1,char param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined2 uVar5;
  undefined4 local_58 [21];
  
  if ((*(byte *)((int)this + 0x9c) & 2) >> 1 != param_1) {
    FUN_00440d30(*(void **)((int)this + 0x5a),param_1);
  }
  cVar2 = FUN_004413d0(*(int *)((int)this + 0x5a));
  if (cVar2 != '\0') {
    FUN_00462bf0(this,param_1,param_2);
    return;
  }
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x140))(CONCAT31(extraout_var,param_1 == 0));
  bVar3 = *(byte *)((int)this + 0x9c);
  if ((bVar3 & 2) >> 1 == param_1) {
    return;
  }
  if (*(void **)((int)this + 0x3a) != (void *)0x0) {
    bVar3 = (param_1 * '\x02' ^ bVar3) & 2 ^ bVar3;
    *(byte *)((int)this + 0x9c) = bVar3;
    if ((bVar3 & 2) == 0) {
      uVar5 = 2;
    }
    else {
      uVar5 = 0;
    }
    FUN_00406bb0(*(void **)((int)this + 0x3a),uVar5,this,(undefined4 *)0x0);
    if (((param_1 == 0) || (iVar4 = FUN_0040c620(this), *(short *)(iVar4 + 0x40) == 1)) ||
       (iVar4 = FUN_0040c620(this), *(short *)(iVar4 + 0x40) == 2)) {
      (**(code **)(iVar1 + 0x424))(1);
    }
    if (param_2 != '\0') {
      FUN_004142c0(local_58,(param_1 == 0) + 0xde,0,this,0);
      FUN_0046b770(this,(int)local_58);
    }
    return;
  }
  return;
}


