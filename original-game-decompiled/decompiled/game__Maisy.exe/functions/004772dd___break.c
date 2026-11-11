
/* ==== __break @ 004772dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004772dd-004772dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


