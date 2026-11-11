
/* ==== FUN_0047ace0 @ 0047ace0 ==== 
 * signature: undefined __thiscall FUN_0047ace0(void * this, undefined4 param_1)
 * body: 0047ace0-0047ad4f
 */

void __thiscall FUN_0047ace0(void *this,undefined4 param_1)

{
  short sVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  sVar1 = *(short *)((int)this + 0x470);
  uVar2 = *(undefined4 *)((int)this + 0x474);
  uVar3 = (ushort)((int)uVar2 >> 0x1f);
  SelectObject(*(HDC *)((int)this + 0xcdc),DAT_004dcb30);
  BitBlt(DAT_004da398,(int)(short)param_1,(int)param_1._2_2_,(int)sVar1 - (int)(short)param_1,
         (int)(short)(((ushort)uVar2 ^ uVar3) - uVar3) - (int)param_1._2_2_,
         *(HDC *)((int)this + 0x468),0,0,0xcc0020);
  GdiFlush();
  return;
}


