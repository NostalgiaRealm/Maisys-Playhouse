
/* ==== __break @ 00498638 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00498638-00498638
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


