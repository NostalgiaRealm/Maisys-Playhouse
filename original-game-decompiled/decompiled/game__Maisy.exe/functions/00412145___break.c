
/* ==== __break @ 00412145 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00412145-00412145
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


