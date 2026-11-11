
/* ==== FUN_1000_0652 @ 1000:0652 ==== 
 * signature: undefined __cdecl16near FUN_1000_0652(void)
 * body: 1000:0652-1000:067e
 */

void __cdecl16near FUN_1000_0652(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0x8c = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_1000_0676;
  if (*(byte *)0x87 < 3) {
LAB_1000_066c:
    if (0x13 < bVar1) {
LAB_1000_0670:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_1000_0670;
    if (bVar1 < 0x20) goto LAB_1000_066c;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0xc0);
LAB_1000_0676:
  *(int *)0x7e = (int)cVar2;
  return;
}


