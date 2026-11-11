
/* ==== __break @ 004181dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004181dd-004181dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


