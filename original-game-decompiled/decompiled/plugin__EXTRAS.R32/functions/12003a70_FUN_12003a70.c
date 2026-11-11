
/* ==== FUN_12003a70 @ 12003a70 ==== 
 * signature: undefined __thiscall FUN_12003a70(void * this, byte param_1, char param_2)
 * body: 12003a70-12003afe
 */

void __thiscall FUN_12003a70(void *this,byte param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = *(char *)((int)this + 0x62);
  *(char *)((int)this + 0x62) = cVar1 + '\x01';
  if (param_1 == 0) {
    bVar2 = 0;
    do {
      if (param_2 == '\0') {
        *(ushort *)((int)this + 0x8a) =
             *(ushort *)((int)this + 0x8a) & ~(ushort)(0x8000 >> (bVar2 & 0x1f));
      }
      else {
        *(ushort *)((int)this + 0x8a) =
             *(ushort *)((int)this + 0x8a) | (ushort)(0x8000 >> (bVar2 & 0x1f));
      }
      bVar2 = bVar2 + 1;
    } while (bVar2 < 0x10);
    *(char *)((int)this + 0x62) = cVar1;
    return;
  }
  if ((param_1 != 0) && (param_1 < 0x11)) {
    if (param_2 == '\0') {
      *(ushort *)((int)this + 0x8a) =
           *(ushort *)((int)this + 0x8a) & ~(ushort)(0x8000 >> (param_1 - 1 & 0x1f));
      *(char *)((int)this + 0x62) = cVar1;
      return;
    }
    *(ushort *)((int)this + 0x8a) =
         *(ushort *)((int)this + 0x8a) | (ushort)(0x8000 >> (param_1 - 1 & 0x1f));
  }
  *(char *)((int)this + 0x62) = cVar1;
  return;
}


