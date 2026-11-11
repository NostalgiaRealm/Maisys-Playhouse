
/* ==== FUN_00410ff0 @ 00410ff0 ==== 
 * signature: HCURSOR __thiscall FUN_00410ff0(void * this, uint param_1)
 * body: 00410ff0-00411044
 */

HCURSOR __thiscall FUN_00410ff0(void *this,uint param_1)

{
  short sVar1;
  HCURSOR pHVar2;
  int iVar3;
  short sVar4;
  HINSTANCE local_8;
  
  sVar4 = 1;
  sVar1 = *(short *)(*(int *)((int)this + 0xca) + 0x26);
  do {
    if (sVar1 < sVar4) {
      return (HCURSOR)0x0;
    }
    iVar3 = (int)sVar4;
    sVar4 = sVar4 + 1;
    FUN_00430370(*(void **)((int)this + 0xca),iVar3,&local_8);
    pHVar2 = LoadCursorA(local_8,(LPCSTR)(param_1 & 0xffff));
  } while (pHVar2 == (HCURSOR)0x0);
  return pHVar2;
}


