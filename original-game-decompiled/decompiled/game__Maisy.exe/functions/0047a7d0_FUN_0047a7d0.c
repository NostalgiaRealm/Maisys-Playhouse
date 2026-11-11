
/* ==== FUN_0047a7d0 @ 0047a7d0 ==== 
 * signature: undefined __thiscall FUN_0047a7d0(void * this, byte param_1, undefined4 * param_2)
 * body: 0047a7d0-0047a871
 */

void __thiscall FUN_0047a7d0(void *this,byte param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_0047a880();
  bVar1 = *(byte *)((int)this + 0x1134);
  if ((bVar1 & 4) >> 2 != param_1) {
    *(byte *)((int)this + 0x1134) = (bVar1 ^ param_1 * '\x04') & 4 ^ bVar1;
    if (param_1 == 0) {
      if (*(int *)((int)this + 0x26) != 0) {
        iVar3 = FUN_0045a340(*(int *)((int)this + 0x26));
      }
      uVar2 = FUN_0047a250(this,param_2,*(short *)((int)this + 0x2a),iVar3);
      if ((char)uVar2 == '\0') {
        *(undefined4 *)((int)this + 0x8a4) = 0;
        *(undefined4 *)((int)this + 0x468) = 0;
        *(byte *)((int)this + 0x1134) =
             *(byte *)((int)this + 0x1134) & 4 ^ *(byte *)((int)this + 0x1134);
        return;
      }
    }
    else {
      FUN_0047a720((int)this);
      *(byte *)((int)this + 0x1134) = *(byte *)((int)this + 0x1134) & 0xfe;
    }
  }
  return;
}


