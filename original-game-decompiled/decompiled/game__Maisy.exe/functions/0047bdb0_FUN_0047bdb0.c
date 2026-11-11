
/* ==== FUN_0047bdb0 @ 0047bdb0 ==== 
 * signature: undefined __thiscall FUN_0047bdb0(void * this, uint param_1, HPALETTE param_2)
 * body: 0047bdb0-0047bf3e
 */

void __thiscall FUN_0047bdb0(void *this,uint param_1,HPALETTE param_2)

{
  uint uVar1;
  int iVar2;
  RGBQUAD *prgbq;
  RGBQUAD *pRVar3;
  
  if (*(uint *)((int)this + 0xce8) != param_1) {
    uVar1 = FUN_00439650(&DAT_004e1c58,param_1);
    if ((uVar1 == 0) &&
       (uVar1 = FUN_004394e0(&DAT_004e1c58,param_1,param_2,(uint *)0x0), uVar1 == 0)) {
      return;
    }
    FUN_004396a0(&DAT_004e1c58,*(int *)((int)this + 0xce8),'\0');
    *(uint *)((int)this + 0xce4) = uVar1;
    *(uint *)((int)this + 0xce8) = param_1;
    FUN_004396a0(&DAT_004e1c58,param_1,'\x01');
    UnrealizeObject(*(HGDIOBJ *)((int)this + 0xce4));
    if (*(int *)((int)this + 0x468) != 0) {
      prgbq = (RGBQUAD *)((int)this + 0x494);
      *(undefined4 *)((int)this + 0x894) = *(undefined4 *)((int)this + 0xce4);
      FUN_00439670(&DAT_004e1c58,param_1,(int *)prgbq);
      if (*(short *)((int)this + 0x2a) == 8) {
        SetDIBColorTable(*(HDC *)((int)this + 0x468),0,0x100,prgbq);
      }
      if (((*(byte *)((int)this + 0x1134) & 0x80) != 0) && (*(short *)((int)this + 0xd0a) == 8)) {
        pRVar3 = (RGBQUAD *)((int)this + 0xd24);
        for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pRVar3 = *prgbq;
          prgbq = prgbq + 1;
          pRVar3 = pRVar3 + 1;
        }
        SetDIBColorTable(*(HDC *)((int)this + 0xcf8),0,0x100,(RGBQUAD *)((int)this + 0xd24));
      }
    }
    if (*(int *)((int)this + 0x8a4) != 0) {
      *(undefined4 *)((int)this + 0xcd0) = *(undefined4 *)((int)this + 0xce4);
      FUN_00439670(&DAT_004e1c58,param_1,(int *)((int)this + 0x8d0));
      if (*(short *)((int)this + 0x2a) == 8) {
        SetDIBColorTable(*(HDC *)((int)this + 0x8a4),0,0x100,(RGBQUAD *)((int)this + 0x8d0));
      }
    }
    FUN_00439670(&DAT_004e1c58,param_1,(int *)((int)this + 0x54));
    if (*(LPVOID *)((int)this + 0xcf4) != (LPVOID)0x0) {
      FUN_00434950(*(LPVOID *)((int)this + 0xcf4));
      *(undefined4 *)((int)this + 0xcf4) = 0;
    }
    if ((*(int *)((int)this + 0x26) != 0) &&
       (iVar2 = *(int *)(*(int *)((int)this + 0x26) + 0x82), iVar2 != 0)) {
      FUN_00405390(iVar2);
    }
  }
  return;
}


