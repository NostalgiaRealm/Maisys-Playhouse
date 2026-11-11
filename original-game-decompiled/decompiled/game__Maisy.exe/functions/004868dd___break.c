
/* ==== __break @ 004868dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004868dd-004868dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


