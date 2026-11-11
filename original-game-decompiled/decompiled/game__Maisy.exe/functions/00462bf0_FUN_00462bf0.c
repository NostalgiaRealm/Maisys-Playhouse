
/* ==== FUN_00462bf0 @ 00462bf0 ==== 
 * signature: undefined __thiscall FUN_00462bf0(void * this, byte param_1, char param_2)
 * body: 00462bf0-00462c9c
 */

void __thiscall FUN_00462bf0(void *this,byte param_1,char param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined4 local_58 [21];
  
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x140))(param_1 == 0);
  bVar2 = *(byte *)((int)this + 0x9c);
  if (((bVar2 & 2) >> 1 != param_1) && (*(void **)((int)this + 0x3a) != (void *)0x0)) {
    bVar2 = (param_1 * '\x02' ^ bVar2) & 2 ^ bVar2;
    *(byte *)((int)this + 0x9c) = bVar2;
    if ((bVar2 & 2) == 0) {
      uVar4 = 2;
    }
    else {
      uVar4 = 0;
    }
    FUN_00406bb0(*(void **)((int)this + 0x3a),uVar4,this,(undefined4 *)0x0);
    uVar3 = FUN_00460d70(this);
    if ((char)uVar3 == '\0') {
      uVar3 = (**(code **)(iVar1 + 0x130))();
      (**(code **)(iVar1 + 0x424))(uVar3);
    }
    if (param_2 != '\0') {
      FUN_004142c0(local_58,(param_1 == 0) + 0xde,0,this,0);
      FUN_0046b770(this,(int)local_58);
    }
  }
  return;
}


