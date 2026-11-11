
/* ==== __break @ 0043c8dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043c8dd-0043c8dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


