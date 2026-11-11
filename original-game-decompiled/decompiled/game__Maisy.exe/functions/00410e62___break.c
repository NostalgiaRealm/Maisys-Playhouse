
/* ==== __break @ 00410e62 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410e62-00410e62
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


