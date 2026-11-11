
/* ==== __break @ 004110dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004110dd-004110dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


