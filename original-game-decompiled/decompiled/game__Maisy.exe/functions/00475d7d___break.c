
/* ==== __break @ 00475d7d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00475d7d-00475d7d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


