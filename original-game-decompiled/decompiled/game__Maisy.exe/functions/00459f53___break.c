
/* ==== __break @ 00459f53 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00459f53-00459f53
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


