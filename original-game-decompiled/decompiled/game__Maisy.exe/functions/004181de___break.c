
/* ==== __break @ 004181de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004181de-004181de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


